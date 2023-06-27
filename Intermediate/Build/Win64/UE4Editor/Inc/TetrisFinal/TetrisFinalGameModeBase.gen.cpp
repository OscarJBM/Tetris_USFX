// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisFinal/TetrisFinalGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetrisFinalGameModeBase() {}
// Cross Module References
	TETRISFINAL_API UClass* Z_Construct_UClass_ATetrisFinalGameModeBase_NoRegister();
	TETRISFINAL_API UClass* Z_Construct_UClass_ATetrisFinalGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TetrisFinal();
// End Cross Module References
	void ATetrisFinalGameModeBase::StaticRegisterNativesATetrisFinalGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATetrisFinalGameModeBase_NoRegister()
	{
		return ATetrisFinalGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATetrisFinalGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATetrisFinalGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisFinal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetrisFinalGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TetrisFinalGameModeBase.h" },
		{ "ModuleRelativePath", "TetrisFinalGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATetrisFinalGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATetrisFinalGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATetrisFinalGameModeBase_Statics::ClassParams = {
		&ATetrisFinalGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATetrisFinalGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATetrisFinalGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATetrisFinalGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATetrisFinalGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATetrisFinalGameModeBase, 1922889210);
	template<> TETRISFINAL_API UClass* StaticClass<ATetrisFinalGameModeBase>()
	{
		return ATetrisFinalGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATetrisFinalGameModeBase(Z_Construct_UClass_ATetrisFinalGameModeBase, &ATetrisFinalGameModeBase::StaticClass, TEXT("/Script/TetrisFinal"), TEXT("ATetrisFinalGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATetrisFinalGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
