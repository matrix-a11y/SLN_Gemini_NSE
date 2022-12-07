// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SLN_Gemini_NSE : ModuleRules
{
	public SLN_Gemini_NSE(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
