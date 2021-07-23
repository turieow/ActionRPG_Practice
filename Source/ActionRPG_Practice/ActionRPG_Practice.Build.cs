// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ActionRPG_Practice : ModuleRules
{
	public ActionRPG_Practice(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
