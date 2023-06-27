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
	TETRISFINAL_API UClass* Z_Construct_UClass_ABlock_NoRegister();
	TETRISFINAL_API UClass* Z_Construct_UClass_APiece_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATetrisFinalGameModeBase::execDestroyActorFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyActorFunction();
		P_NATIVE_END;
	}
	void ATetrisFinalGameModeBase::StaticRegisterNativesATetrisFinalGameModeBase()
	{
		UClass* Class = ATetrisFinalGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyActorFunction", &ATetrisFinalGameModeBase::execDestroyActorFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATetrisFinalGameModeBase_DestroyActorFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATetrisFinalGameModeBase_DestroyActorFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TetrisFinalGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATetrisFinalGameModeBase_DestroyActorFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATetrisFinalGameModeBase, nullptr, "DestroyActorFunction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATetrisFinalGameModeBase_DestroyActorFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATetrisFinalGameModeBase_DestroyActorFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATetrisFinalGameModeBase_DestroyActorFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATetrisFinalGameModeBase_DestroyActorFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATetrisFinalGameModeBase_NoRegister()
	{
		return ATetrisFinalGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATetrisFinalGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedPiece_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedPiece;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATetrisFinalGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisFinal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATetrisFinalGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATetrisFinalGameModeBase_DestroyActorFunction, "DestroyActorFunction" }, // 188569285
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetrisFinalGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TetrisFinalGameModeBase.h" },
		{ "ModuleRelativePath", "TetrisFinalGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetrisFinalGameModeBase_Statics::NewProp_SpawnedActor_MetaData[] = {
		{ "ModuleRelativePath", "TetrisFinalGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATetrisFinalGameModeBase_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetrisFinalGameModeBase, SpawnedActor), Z_Construct_UClass_ABlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATetrisFinalGameModeBase_Statics::NewProp_SpawnedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetrisFinalGameModeBase_Statics::NewProp_SpawnedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetrisFinalGameModeBase_Statics::NewProp_SpawnedPiece_MetaData[] = {
		{ "ModuleRelativePath", "TetrisFinalGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATetrisFinalGameModeBase_Statics::NewProp_SpawnedPiece = { "SpawnedPiece", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetrisFinalGameModeBase, SpawnedPiece), Z_Construct_UClass_APiece_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATetrisFinalGameModeBase_Statics::NewProp_SpawnedPiece_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetrisFinalGameModeBase_Statics::NewProp_SpawnedPiece_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATetrisFinalGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetrisFinalGameModeBase_Statics::NewProp_SpawnedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetrisFinalGameModeBase_Statics::NewProp_SpawnedPiece,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATetrisFinalGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATetrisFinalGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATetrisFinalGameModeBase_Statics::ClassParams = {
		&ATetrisFinalGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATetrisFinalGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATetrisFinalGameModeBase_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ATetrisFinalGameModeBase, 594502306);
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
