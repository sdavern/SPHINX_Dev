import unreal

# Define the path where you want to create the Blueprint
folder_path = "/Game/Resources/Test/"  # Change this to your desired folder path
blueprint_name = "MyNewActorBlueprint"
component_class_path = "/Script/SPHINX_Dev.GameItem"  # The path to your custom Actor component

# Ensure the folder exists
unreal.EditorAssetLibrary.make_directory(folder_path)

# Define the Blueprint class type
blueprint_factory = unreal.BlueprintFactory()
blueprint_factory.set_editor_property("ParentClass", unreal.Actor)

# Create the Blueprint
blueprint_asset = unreal.AssetToolsHelpers.get_asset_tools().create_asset(
    blueprint_name, 
    folder_path, 
    None, 
    blueprint_factory
)

# Find the custom component class
component_class = unreal.SystemLibrary.find_class(None, component_class_path)

# Ensure the component class is valid
if not component_class:
    print(f"Component class {component_class_path} not found.")
else:
    # Open the Blueprint Editor
    blueprint_editor = unreal.AssetEditorSubsystem().open_editor_for_assets([blueprint_asset])

    # Get the Blueprint's Simple Construction Script (SCS)
    scs = blueprint_asset.simple_construction_script

    # Create a new SCS node for the component
    new_node = scs.create_node(component_class, component_class_path.split('.')[-1])

    # Add the new node to the SCS root nodes
    scs.add_node(new_node)

    # Mark the Blueprint as modified and save it
    blueprint_asset.mark_package_dirty()
    unreal.EditorAssetLibrary.save_loaded_asset(blueprint_asset)

    print(f"Blueprint {blueprint_name} with component {component_class_path.split('.')[-1]} created successfully in {folder_path}")