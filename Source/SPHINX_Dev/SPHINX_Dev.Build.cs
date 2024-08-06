using UnrealBuildTool;

public class SPHINX_Dev : ModuleRules
{
    public SPHINX_Dev(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { 
            "Core", 
            "CoreUObject", 
            "Engine", 
            "InputCore", 
            "EnhancedInput", 
            "AssetRegistry", 
            "Paper2D", 
            "PaperZD", 
            "Slate", 
            "SlateCore", 
            "UMG" 
        });

        if (Target.bBuildEditor)
        {
            PrivateDependencyModuleNames.AddRange(new string[] { 
                "EditorScriptingUtilities", 
                "Blutility", 
                "UMGEditor", 
                "UnrealEd" 
            });
        }
    }
}