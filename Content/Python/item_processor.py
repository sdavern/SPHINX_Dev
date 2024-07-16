import unreal
import pandas as pd

# Define the enum type mapping
TYPE_MAPPING = {
    'bool': 'BoolProperty',
    'string': 'StringProperty',
    'int': 'IntProperty'
}

def open_file_dialog():
    dialog = unreal.SystemLibrary.get_editor_property('file_dialog')
    file_path = dialog.open_file_dialog(None, 'Select File', '', '', 'CSV Files (*.csv)|*.csv', 1)
    if file_path and len(file_path) > 0:
        return file_path[0]
    return ""

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
        destination_path = "/Game/Resources/Items/"
        new_blueprint_name = f"{item_name}_BP"

        # Load the original item blueprint
        original_blueprint = unreal.EditorAssetLibrary.load_asset(original_item_blueprint_path)

        # Duplicate the item blueprint
        duplicated_blueprint = asset_tools.duplicate_asset(new_blueprint_name, destination_path, original_blueprint)
        duplicated_blueprint_generated_class = unreal.EditorAssetLibrary.load_blueprint_class(duplicated_blueprint.get_path_name())
        duplicated_blueprint_instance = unreal.get_default_object(duplicated_blueprint_generated_class)

        # Set the Name and Description
        duplicated_blueprint_instance.Name = item_name
        duplicated_blueprint_instance.Description = item_description

        # Create an actor with the item component
        actor = unreal.EditorLevelLibrary.spawn_actor_from_class(unreal.Actor, unreal.Vector(0,0,0))
        item_component = unreal.GameplayStatics.add_actor_component(actor, unreal.GameItem, item_name)

        # Assign the component to the duplicated blueprint
        duplicated_blueprint_instance.AddInstanceComponent(item_component)
        
        # Process item properties
        for i in range(1, 6):
            prop_type = row.get(f'Property {i} Type')
            prop_name = row.get(f'Property {i} Name')
            prop_value = row.get(f'Property {i} Value')

            if pd.notna(prop_type) and pd.notna(prop_name) and pd.notna(prop_value):
                prop_enum = TYPE_MAPPING[prop_type]

                # Duplicate the property blueprint
                original_property_blueprint_path = "/Game/BPsForWidgets/MyItemProperty"
                new_property_blueprint_name = f"{item_name}_{prop_name}_BP"
                duplicated_property_blueprint = asset_tools.duplicate_asset(new_property_blueprint_name, destination_path, original_property_blueprint_path)
                duplicated_property_blueprint_generated_class = unreal.EditorAssetLibrary.load_blueprint_class(duplicated_property_blueprint.get_path_name())
                duplicated_property_blueprint_instance = unreal.get_default_object(duplicated_property_blueprint_generated_class)

                # Set the property values
                duplicated_property_blueprint_instance.Name = prop_name
                if prop_enum == 'BoolProperty':
                    duplicated_property_blueprint_instance.Value = prop_value.lower() == 'true'
                elif prop_enum == 'IntProperty':
                    duplicated_property_blueprint_instance.Value = int(prop_value)
                else:
                    duplicated_property_blueprint_instance.Value = prop_value

                # Add the property to the duplicated item blueprint
                duplicated_blueprint_instance.Properties.append(duplicated_property_blueprint_instance)
        
        # Save the duplicated item blueprint
        unreal.EditorAssetLibrary.save_asset(duplicated_blueprint.get_path_name())

# Example usage
# file_path = open_file_dialog()
# process_file(file_path)