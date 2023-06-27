// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TETRISFINAL_Piece_generated_h
#error "Piece.generated.h already included, missing '#pragma once' in Piece.h"
#endif
#define TETRISFINAL_Piece_generated_h

#define TetrisFinal_Source_TetrisFinal_Piece_h_14_SPARSE_DATA
#define TetrisFinal_Source_TetrisFinal_Piece_h_14_RPC_WRAPPERS
#define TetrisFinal_Source_TetrisFinal_Piece_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define TetrisFinal_Source_TetrisFinal_Piece_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPiece(); \
	friend struct Z_Construct_UClass_APiece_Statics; \
public: \
	DECLARE_CLASS(APiece, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TetrisFinal"), NO_API) \
	DECLARE_SERIALIZER(APiece)


#define TetrisFinal_Source_TetrisFinal_Piece_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPiece(); \
	friend struct Z_Construct_UClass_APiece_Statics; \
public: \
	DECLARE_CLASS(APiece, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TetrisFinal"), NO_API) \
	DECLARE_SERIALIZER(APiece)


#define TetrisFinal_Source_TetrisFinal_Piece_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APiece(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APiece) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APiece); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APiece); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APiece(APiece&&); \
	NO_API APiece(const APiece&); \
public:


#define TetrisFinal_Source_TetrisFinal_Piece_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APiece(APiece&&); \
	NO_API APiece(const APiece&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APiece); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APiece); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APiece)


#define TetrisFinal_Source_TetrisFinal_Piece_h_14_PRIVATE_PROPERTY_OFFSET
#define TetrisFinal_Source_TetrisFinal_Piece_h_11_PROLOG
#define TetrisFinal_Source_TetrisFinal_Piece_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TetrisFinal_Source_TetrisFinal_Piece_h_14_PRIVATE_PROPERTY_OFFSET \
	TetrisFinal_Source_TetrisFinal_Piece_h_14_SPARSE_DATA \
	TetrisFinal_Source_TetrisFinal_Piece_h_14_RPC_WRAPPERS \
	TetrisFinal_Source_TetrisFinal_Piece_h_14_INCLASS \
	TetrisFinal_Source_TetrisFinal_Piece_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TetrisFinal_Source_TetrisFinal_Piece_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TetrisFinal_Source_TetrisFinal_Piece_h_14_PRIVATE_PROPERTY_OFFSET \
	TetrisFinal_Source_TetrisFinal_Piece_h_14_SPARSE_DATA \
	TetrisFinal_Source_TetrisFinal_Piece_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TetrisFinal_Source_TetrisFinal_Piece_h_14_INCLASS_NO_PURE_DECLS \
	TetrisFinal_Source_TetrisFinal_Piece_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TETRISFINAL_API UClass* StaticClass<class APiece>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TetrisFinal_Source_TetrisFinal_Piece_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
