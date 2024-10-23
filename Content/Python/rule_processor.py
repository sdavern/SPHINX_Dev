import unreal
import pandas as pd

def parse_terms(term_string):
    terms = []
    if pd.notna(term_string):
        term_parts = term_string.split()
        term_name = term_parts[0]
        properties = []
        for i in range(1, len(term_parts), 2):
            if i+1 < len(term_parts):
                prop_name = term_parts[i]
                prop_value = term_parts[i+1]
                properties.append({'name': prop_name, 'value': prop_value})
        terms.append({'name': term_name, 'properties': properties})
    return terms

def process_rules(file_path):
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
        rule_name = f"Rule_{index + 132}"
        action = row['Action']
        
        input_terms = []
        for col in ['Input1', 'Input2']:
            input_terms += parse_terms(row.get(col, ''))

        output_terms = []
        for col in ['Output1', 'Output2', 'Output3', 'Output4']:
            output_terms += parse_terms(row.get(col, ''))

        original_rule_blueprint_path = "/Game/BPsForWidgets/MyRule"
        destination_path = "/Game/Test/NewRules"
        new_blueprint_name = f"{rule_name}"

        original_blueprint = unreal.EditorAssetLibrary.load_asset(original_rule_blueprint_path)
        duplicated_blueprint = asset_tools.duplicate_asset(new_blueprint_name, destination_path, original_blueprint)
        duplicated_blueprint_generated_class = unreal.EditorAssetLibrary.load_blueprint_class(duplicated_blueprint.get_path_name())
        duplicated_blueprint_instance = unreal.get_default_object(duplicated_blueprint_generated_class)

        if not duplicated_blueprint_instance:
            unreal.log_error("Duplicated instance is not valid")
            continue

        unreal.EditorAssetLibrary.set_editor_property(duplicated_blueprint_instance, "Name", rule_name)
        unreal.EditorAssetLibrary.set_editor_property(duplicated_blueprint_instance, "Action", action)

        input_terms_array = unreal.EditorAssetLibrary.get_editor_property(duplicated_blueprint_instance, "InputsBP")
        output_terms_array = unreal.EditorAssetLibrary.get_editor_property(duplicated_blueprint_instance, "OutputsBP")
        
        if input_terms_array is None:
            input_terms_array = []
        if output_terms_array is None:
            output_terms_array = []

        for term in input_terms:
            term_blueprint = create_iterm_blueprint(term, rule_name)
            if term_blueprint:
                input_terms_array.append(term_blueprint)

        for term in output_terms:
            term_blueprint = create_oterm_blueprint(term, rule_name)
            if term_blueprint:
                output_terms_array.append(term_blueprint)

        unreal.EditorAssetLibrary.set_editor_property(duplicated_blueprint_instance, "InputsBP", input_terms_array)
        unreal.EditorAssetLibrary.set_editor_property(duplicated_blueprint_instance, "OutputsBP", output_terms_array)

        unreal.EditorAssetLibrary.save_asset(duplicated_blueprint.get_path_name())

def create_iterm_blueprint(term, rule_name):
    asset_tools = unreal.AssetToolsHelpers.get_asset_tools()
    
    original_term_blueprint_path = "/Game/BPsForWidgets/MyTerm"
    term_path = "/Game/Test/NewTerms"
    new_term_blueprint_name = f"{rule_name}_Input_{term['name']}_BP"

    original_term_blueprint = unreal.EditorAssetLibrary.load_asset(original_term_blueprint_path)
    duplicated_term_blueprint = asset_tools.duplicate_asset(new_term_blueprint_name, term_path, original_term_blueprint)
    duplicated_term_blueprint_generated_class = unreal.EditorAssetLibrary.load_blueprint_class(duplicated_term_blueprint.get_path_name())
    duplicated_term_blueprint_instance = unreal.get_default_object(duplicated_term_blueprint_generated_class)

    if not duplicated_term_blueprint_instance:
        unreal.log_error("Duplicated term instance is not valid")
        return None

    unreal.EditorAssetLibrary.set_editor_property(duplicated_term_blueprint_instance, "Name", term['name'])

    properties_array = unreal.EditorAssetLibrary.get_editor_property(duplicated_term_blueprint_instance, "PropertiesBP")
    if properties_array is None:
        properties_array = []

    for prop in term['properties']:
        prop_blueprint = create_iproperty_blueprint(prop, term['name'], rule_name)
        if prop_blueprint:
            properties_array.append(prop_blueprint)

    unreal.EditorAssetLibrary.set_editor_property(duplicated_term_blueprint_instance, "PropertiesBP", properties_array)
    unreal.EditorAssetLibrary.save_asset(duplicated_term_blueprint.get_path_name())

    return duplicated_term_blueprint_generated_class

def create_oterm_blueprint(term, rule_name):
    asset_tools = unreal.AssetToolsHelpers.get_asset_tools()
    
    original_term_blueprint_path = "/Game/BPsForWidgets/MyTerm"
    term_path = "/Game/Test/NewTerms"
    new_term_blueprint_name = f"{rule_name}_Output_{term['name']}_BP"

    original_term_blueprint = unreal.EditorAssetLibrary.load_asset(original_term_blueprint_path)
    duplicated_term_blueprint = asset_tools.duplicate_asset(new_term_blueprint_name, term_path, original_term_blueprint)
    duplicated_term_blueprint_generated_class = unreal.EditorAssetLibrary.load_blueprint_class(duplicated_term_blueprint.get_path_name())
    duplicated_term_blueprint_instance = unreal.get_default_object(duplicated_term_blueprint_generated_class)

    if not duplicated_term_blueprint_instance:
        unreal.log_error("Duplicated term instance is not valid")
        return None

    unreal.EditorAssetLibrary.set_editor_property(duplicated_term_blueprint_instance, "Name", term['name'])

    properties_array = unreal.EditorAssetLibrary.get_editor_property(duplicated_term_blueprint_instance, "PropertiesBP")
    if properties_array is None:
        properties_array = []

    for prop in term['properties']:
        prop_blueprint = create_oproperty_blueprint(prop, term['name'], rule_name)
        if prop_blueprint:
            properties_array.append(prop_blueprint)

    unreal.EditorAssetLibrary.set_editor_property(duplicated_term_blueprint_instance, "PropertiesBP", properties_array)
    unreal.EditorAssetLibrary.save_asset(duplicated_term_blueprint.get_path_name())

    return duplicated_term_blueprint_generated_class

def create_oproperty_blueprint(prop, term_name, rule_name):
    asset_tools = unreal.AssetToolsHelpers.get_asset_tools()

    original_property_blueprint_path = "/Game/BPsForWidgets/MyItemProperty"
    property_path = "/Game/Test/NewRuleProps"
    new_property_blueprint_name = f"{rule_name}_Output_{term_name}_{prop['name']}_{prop['value']}_BP"

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

def create_iproperty_blueprint(prop, term_name, rule_name):
    asset_tools = unreal.AssetToolsHelpers.get_asset_tools()

    original_property_blueprint_path = "/Game/BPsForWidgets/MyItemProperty"
    property_path = "/Game/Test/NewRuleProps"
    new_property_blueprint_name = f"{rule_name}_Input_{term_name}_{prop['name']}_{prop['value']}_BP"

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


# Example usage
# file_path = open_file_dialog()
# process_rules(file_path)