// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SequenceExercise : ModuleRules
{
	public SequenceExercise(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
