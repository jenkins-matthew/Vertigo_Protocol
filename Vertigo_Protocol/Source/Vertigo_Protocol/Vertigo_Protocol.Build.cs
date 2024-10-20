// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Vertigo_Protocol : ModuleRules
{
	public Vertigo_Protocol(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
