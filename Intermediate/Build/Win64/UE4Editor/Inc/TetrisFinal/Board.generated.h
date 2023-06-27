// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TETRISFINAL_Board_generated_h
#error "Board.generated.h already included, missing '#pragma once' in Board.h"
#endif
#define TETRISFINAL_Board_generated_h

#define TetrisFinal_Source_TetrisFinal_Board_h_13_SPARSE_DATA
#define TetrisFinal_Source_TetrisFinal_Board_h_13_RPC_WRAPPERS
#define TetrisFinal_Source_TetrisFinal_Board_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define TetrisFinal_Source_TetrisFinal_Board_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoard(); \
	friend struct Z_Construct_UClass_ABoard_Statics; \
public: \
	DECLARE_CLASS(ABoard, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TetrisFinal"), NO_API) \
	DECLARE_SERIALIZER(ABoard)


#define TetrisFinal_Source_TetrisFinal_Board_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABoard(); \
	friend struct Z_Construct_UClass_ABoard_Statics; \
public: \
	DECLARE_CLASS(ABoard, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TetrisFinal"), NO_API) \
	DECLARE_SERIALIZER(ABoard)


#define TetrisFinal_Source_TetrisFinal_Board_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoard(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoard) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoard); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoard(ABoard&&); \
	NO_API ABoard(const ABoard&); \
public:


#define TetrisFinal_Source_TetrisFinal_Board_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoard(ABoard&&); \
	NO_API ABoard(const ABoard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoard)


#define TetrisFinal_Source_TetrisFinal_Board_h_13_PRIVATE_PROPERTY_OFFSET
#define TetrisFinal_Source_TetrisFinal_Board_h_10_PROLOG
#define TetrisFinal_Source_TetrisFinal_Board_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TetrisFinal_Source_TetrisFinal_Board_h_13_PRIVATE_PROPERTY_OFFSET \
	TetrisFinal_Source_TetrisFinal_Board_h_13_SPARSE_DATA \
	TetrisFinal_Source_TetrisFinal_Board_h_13_RPC_WRAPPERS \
	TetrisFinal_Source_TetrisFinal_Board_h_13_INCLASS \
	TetrisFinal_Source_TetrisFinal_Board_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TetrisFinal_Source_TetrisFinal_Board_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TetrisFinal_Source_TetrisFinal_Board_h_13_PRIVATE_PROPERTY_OFFSET \
	TetrisFinal_Source_TetrisFinal_Board_h_13_SPARSE_DATA \
	TetrisFinal_Source_TetrisFinal_Board_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TetrisFinal_Source_TetrisFinal_Board_h_13_INCLASS_NO_PURE_DECLS \
	TetrisFinal_Source_TetrisFinal_Board_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TETRISFINAL_API UClass* StaticClass<class ABoard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TetrisFinal_Source_TetrisFinal_Board_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
