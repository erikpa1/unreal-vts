// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class unreal_vts : ModuleRules
{
	public unreal_vts(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core", 
			"CoreUObject", 
			"Engine",
			"InputCore",
			"HeadMountedDisplay", 
			"EnhancedInput", 
			"ImGui",
			"HTTP",
			"JSON"
		});
	}
}
