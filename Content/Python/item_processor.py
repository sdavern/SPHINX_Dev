import unreal
import pandas as pd

# Define the enum type mapping
TYPE_MAPPING = {
    'bool': 'BoolProperty',
    'string': 'StringProperty',
    'int': 'IntProperty'
}

def process_file(file_path):
    # Check if the file path is valid
    if not file_path:
        unreal.log_error("Invalid file path.")
        return
    
    # Read the CSV file
    try:
        df = pd.read_csv(file_path)
    except Exception as e:
        unreal.log_error(f"Failed to read CSV file: {e}")
        return

    # Get the Asset Tools Helper
    asset_tools = unreal.AssetToolsHelpers.get_asset_tools()

    # Iterate over each row in the DataFrame
    for index, row in df.iterrows():
        item_name = row['Name']
        item_description = row['Description']
        
        # Define the paths
        original_item_blueprint_path = "/Game/BPsForWidgets/MyItem"
        destination_path = "/Game/Test/NewItems/"
        new_blueprint_name = f"{item_name}"

        # Load the original item blueprint
        original_blueprint = unreal.EditorAssetLibrary.load_asset(original_item_blueprint_path)

        # Duplicate the item blueprint
        duplicated_blueprint = asset_tools.duplicate_asset(new_blueprint_name, destination_path, original_blueprint)
        duplicated_blueprint_generated_class = unreal.EditorAssetLibrary.load_blueprint_class(duplicated_blueprint.get_path_name())
        duplicated_blueprint_instance = unreal.get_default_object(duplicated_blueprint_generated_class)

        if not duplicated_blueprint_instance:
            unreal.log_error("Duplicated instance is not valid")
            continue

        # Set the Name and Description
        unreal.EditorAssetLibrary.set_editor_property(duplicated_blueprint_instance, "Name", item_name)
        unreal.EditorAssetLibrary.set_editor_property(duplicated_blueprint_instance, "Description", item_description)

        original_actor_path = "/Game/BPsForWidgets/MyActor"
        actor_path = "/Game/Test/NewItemsBP"
        actor_name = f"{item_name}_BP"
        
        original_actor = unreal.EditorAssetLibrary.load_asset(original_actor_path)

        duplicated_actor = asset_tools.duplicate_asset(actor_name, actor_path, original_actor)
        duplicated_actor_generated_class = unreal.EditorAssetLibrary.load_blueprint_class(duplicated_actor.get_path_name())
        #duplicated_actor_instance = unreal.get_default_object(duplicated_actor_generated_class)

        # Define the Blueprint class type
      
        unreal.EditorAssetLibrary.set_editor_property(duplicated_blueprint_instance, "ItemPrefab", duplicated_actor_generated_class)

        # Initialize properties array if not already present
        properties_array = unreal.EditorAssetLibrary.get_editor_property(duplicated_blueprint_instance, "PropertiesBP")
        if properties_array is None:
            properties_array = []

 
        # Process item properties
        for i in range(1, 8):
            prop_type = row.get(f'Property {i} Type')
            prop_name = row.get(f'Property {i} Name')
            prop_value = row.get(f'Property {i} Value')

            if pd.notna(prop_type) and pd.notna(prop_name) and pd.notna(prop_value):
                prop_type = prop_type.strip()  # Remove any leading or trailing whitespace
                prop_enum = TYPE_MAPPING.get(prop_type)

                if prop_enum is None:
                    unreal.log_error(f"Unknown property type: {prop_type}")
                    continue

                # Duplicate the property blueprint
                try:
                    original_property_blueprint_path = "/Game/BPsForWidgets/MyItemProperty"
                    itemprop_path = "/Game/Test/NewProps"
                    new_property_blueprint_name = f"{item_name}_{prop_name}_{prop_value}_BP"

                    original_property_blueprint = unreal.EditorAssetLibrary.load_asset(original_property_blueprint_path)

                    duplicated_property_blueprint = asset_tools.duplicate_asset(new_property_blueprint_name, itemprop_path, original_property_blueprint)
                    duplicated_property_blueprint_generated_class = unreal.EditorAssetLibrary.load_blueprint_class(duplicated_property_blueprint.get_path_name())
                    duplicated_property_blueprint_instance = unreal.get_default_object(duplicated_property_blueprint_generated_class)

                    # Set the property values
                    unreal.EditorAssetLibrary.set_editor_property(duplicated_property_blueprint_instance, "Name", prop_name)
                    value = str(prop_value)

                    unreal.EditorAssetLibrary.set_editor_property(duplicated_property_blueprint_instance, "Value", value)

                    # Add the property blueprint class to the array
                    properties_array.append(duplicated_property_blueprint_generated_class)
                    
                except Exception as e:
                    unreal.log_error(f"Failed to duplicate or set property {prop_name} for item {item_name}: {e}")

        # Set the updated properties array back to the blueprint instance
        unreal.EditorAssetLibrary.set_editor_property(duplicated_blueprint_instance, "PropertiesBP", properties_array)
        
        # Save the duplicated item blueprint
        unreal.EditorAssetLibrary.save_asset(duplicated_blueprint.get_path_name())

# Example usage
# file_path = open_file_dialog()
# process_file(file_path)