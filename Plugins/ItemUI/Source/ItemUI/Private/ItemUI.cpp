// Copyright Epic Games, Inc. All Rights Reserved.

#include "ItemUI.h"
#include "ItemUIStyle.h"
#include "ItemUICommands.h"
#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "ToolMenus.h"

static const FName ItemUITabName("ItemUI");

#define LOCTEXT_NAMESPACE "FItemUIModule"

void FItemUIModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FItemUIStyle::Initialize();
	FItemUIStyle::ReloadTextures();

	FItemUICommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FItemUICommands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FItemUIModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FItemUIModule::RegisterMenus));
	
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(ItemUITabName, FOnSpawnTab::CreateRaw(this, &FItemUIModule::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FItemUITabTitle", "ItemUI"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);
}

void FItemUIModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FItemUIStyle::Shutdown();

	FItemUICommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(ItemUITabName);
}

TSharedRef<SDockTab> FItemUIModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
	FText WidgetText = FText::Format(
		LOCTEXT("WindowWidgetText", "Add code to {0} in {1} to override this window's contents"),
		FText::FromString(TEXT("FItemUIModule::OnSpawnPluginTab")),
		FText::FromString(TEXT("ItemUI.cpp"))
		);

	return SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			// Put your tab content here!
			SNew(SBox)
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Center)
			[
				SNew(STextBlock)
				.Text(WidgetText)
			]
		];
}

void FItemUIModule::PluginButtonClicked()
{
	FGlobalTabmanager::Get()->TryInvokeTab(ItemUITabName);
}

void FItemUIModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FItemUICommands::Get().OpenPluginWindow, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("Settings");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FItemUICommands::Get().OpenPluginWindow));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FItemUIModule, ItemUI)