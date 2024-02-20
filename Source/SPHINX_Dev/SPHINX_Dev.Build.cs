// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SPHINX_Dev : ModuleRules
{
	public SPHINX_Dev(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "AssetRegistry" });
		
	}
}
