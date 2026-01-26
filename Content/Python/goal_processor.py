import unreal
import pandas as pd

def parse_term(term_string):
    if pd.notna(term_string):
        term_parts = term_string.split()
        term_name = term_parts[0]
        properties = []
        for i in range(1, len(term_parts), 2):
            if i + 1 < len(term_parts):
                prop_name = term_parts[i]
                prop_value = term_parts[i + 1]
                properties.append({'name': prop_name, 'value': prop_value})
        return {'name': term_name, 'properties': properties}
    return None

def process_terms(file_path):
    if not file_path:
        unreal.log_error("Invalid file path.")
        return

    try:
        df = pd.read_csv(file_path)
    except Exception as e:
        unreal.log_error(f"Failed to read CSV file: {e}")
        return

    asset_tools = unreal.AssetToolsHelpers.get_asset_tools()

    for index, row in df.iterrows():
        term_data = parse_term(row.get('Goal', ''))
        goal_dialogue = row.get('GoalDialogue', '')
        thanks_dialogue = row.get('ThanksDialogue', '')
        follow_up_dialogue = row.get('FollowUpDialogue', '')
        
        if not term_data:
            continue
        
        create_term_blueprint(term_data, goal_dialogue, thanks_dialogue, follow_up_dialogue)

def create_term_blueprint(term, goal_dialogue, thanks_dialogue, follow_up_dialogue):
    asset_tools = unreal.AssetToolsHelpers.get_asset_tools()

    property_str = "_".join([f"{prop['name']}_{prop['value']}" for prop in term['properties']])
    full_term_name = f"Goal_{term['name']}_{property_str}_BP" if property_str else f"Goal_{term['name']}_BP"

    original_term_blueprint_path = "/Game/BPsForWidgets/MyTerm"
    term_path = "/Game/Test/NewGoals"
    new_term_blueprint_name = full_term_name

    original_term_blueprint = unreal.EditorAssetLibrary.load_asset(original_term_blueprint_path)
    duplicated_term_blueprint = asset_tools.duplicate_asset(new_term_blueprint_name, term_path, original_term_blueprint)
    duplicated_term_blueprint_generated_class = unreal.EditorAssetLibrary.load_blueprint_class(duplicated_term_blueprint.get_path_name())
    duplicated_term_blueprint_instance = unreal.get_default_object(duplicated_term_blueprint_generated_class)

    if not duplicated_term_blueprint_instance:
        unreal.log_error("Duplicated term instance is not valid")
        return None

    unreal.EditorAssetLibrary.set_editor_property(duplicated_term_blueprint_instance, "Name", term['name'])

    if goal_dialogue:
        unreal.EditorAssetLibrary.set_editor_property(duplicated_term_blueprint_instance, "GoalDialogue", goal_dialogue)

    if thanks_dialogue:
        unreal.EditorAssetLibrary.set_editor_property(duplicated_term_blueprint_instance, "ThanksDialogue", thanks_dialogue)
    
    if follow_up_dialogue:
        unreal.EditorAssetLibrary.set_editor_property(duplicated_term_blueprint_instance, "FollowUpDialogue", follow_up_dialogue)

    properties_array = unreal.EditorAssetLibrary.get_editor_property(duplicated_term_blueprint_instance, "PropertiesBP")
    if properties_array is None:
        properties_array = []

    for prop in term['properties']:
        prop_blueprint = create_property_blueprint(prop, term['name'])
        if prop_blueprint:
            properties_array.append(prop_blueprint)

    unreal.EditorAssetLibrary.set_editor_property(duplicated_term_blueprint_instance, "PropertiesBP", properties_array)
    unreal.EditorAssetLibrary.save_asset(duplicated_term_blueprint.get_path_name())

    return duplicated_term_blueprint_generated_class

def create_property_blueprint(prop, term_name):
    asset_tools = unreal.AssetToolsHelpers.get_asset_tools()

    original_property_blueprint_path = "/Game/BPsForWidgets/MyItemProperty"
    property_path = "/Game/Test/NewGoalProperties"
    new_property_blueprint_name = f"{term_name}_{prop['name']}_{prop['value']}_BP"

    original_property_blueprint = unreal.EditorAssetLibrary.load_asset(original_property_blueprint_path)
    duplicated_property_blueprint = asset_tools.duplicate_asset(new_property_blueprint_name, property_path, original_property_blueprint)
    duplicated_property_blueprint_generated_class = unreal.EditorAssetLibrary.load_blueprint_class(duplicated_property_blueprint.get_path_name())
    duplicated_property_blueprint_instance = unreal.get_default_object(duplicated_property_blueprint_generated_class)

    if not duplicated_property_blueprint_instance:
        unreal.log_error("Duplicated property instance is not valid")
        return None

    unreal.EditorAssetLibrary.set_editor_property(duplicated_property_blueprint_instance, "Name", prop['name'])
    unreal.EditorAssetLibrary.set_editor_property(duplicated_property_blueprint_instance, "Value", prop['value'])

    unreal.EditorAssetLibrary.save_asset(duplicated_property_blueprint.get_path_name())

    return duplicated_property_blueprint_generated_class

# Example usage:
# file_path = open_file_dialog()
# process_terms(file_path)