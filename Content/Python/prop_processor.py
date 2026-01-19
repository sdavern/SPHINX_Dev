import unreal
import pandas as pd

# Define the enum type mapping
TYPE_MAPPING = {
    'bool': 'BoolProperty',
    'string': 'StringProperty',
    'int': 'IntProperty'
}

def process_props(file_path):
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
        prop_name = row['PropName']
        prop_value = row['PropValue']

        # Define the paths
        original_item_blueprint_path = "/Game/BPsForWidgets/MyItemProperty"
        destination_path = "/Game/Test/NewProps"
        new_blueprint_name = f"{prop_name}_{prop_value}"

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
        unreal.EditorAssetLibrary.set_editor_property(duplicated_blueprint_instance, "Name", prop_name)
        unreal.EditorAssetLibrary.set_editor_property(duplicated_blueprint_instance, "Value", prop_value)

        tension_values = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
        unreal.log_warning(f"Tension list size: {len(tension_values)}")

        if pd.notna(row.get("Value")):
            tension_values[0] = float(row.get("Value"))

        if pd.notna(row.get("Strength")):
            tension_values[1] = float(row.get("Strength"))

        if pd.notna(row.get("Rarity")):
            tension_values[2] = float(row.get("Rarity"))

        if pd.notna(row.get("GoodEvil")):
            tension_values[3] = float(row.get("GoodEvil"))

        if pd.notna(row.get("Helpfulness")):
            tension_values[4] = float(row.get("Helpfulness"))

        if pd.notna(row.get("Exciting")):
            tension_values[5] = float(row.get("Exciting"))

        if pd.notna(row.get("EmotionalSig")):
            tension_values[6] = float(row.get("EmotionalSig"))

        unreal.EditorAssetLibrary.set_editor_property(
            duplicated_blueprint_instance,
            "TensionArray",
            tension_values
        )

        

# Example usage
# file_path = open_file_dialog()
# process_file(file_path)