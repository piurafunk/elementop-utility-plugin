// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Utility.h"
#include "Modules/ModuleManager.h"


class FUtility : public IUtility
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE( FUtility, Utility )



void FUtility::StartupModule()
{
	// This code will execute after your module is loaded into memory (but after global variables are initialized, of course.)
}


void FUtility::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}



