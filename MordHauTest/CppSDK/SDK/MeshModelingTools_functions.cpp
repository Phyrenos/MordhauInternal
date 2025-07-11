﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MeshModelingTools

#include "Basic.hpp"

#include "MeshModelingTools_classes.hpp"
#include "MeshModelingTools_parameters.hpp"


namespace SDK
{

// Function MeshModelingTools.BakeMeshAttributeMapsToolProperties.GetUVLayerNamesFunc
// (Final, Native, Public)
// Parameters:
// TArray<class FString>                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UBakeMeshAttributeMapsToolProperties::GetUVLayerNamesFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BakeMeshAttributeMapsToolProperties", "GetUVLayerNamesFunc");

	Params::BakeMeshAttributeMapsToolProperties_GetUVLayerNamesFunc Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function MeshModelingTools.MeshSelectionMeshEditActions.CreatePolygroup
// (Final, Native, Public)

void UMeshSelectionMeshEditActions::CreatePolygroup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshSelectionMeshEditActions", "CreatePolygroup");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.MeshSelectionMeshEditActions.DeleteTriangles
// (Final, Native, Public)

void UMeshSelectionMeshEditActions::DeleteTriangles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshSelectionMeshEditActions", "DeleteTriangles");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.MeshSelectionMeshEditActions.DisconnectTriangles
// (Final, Native, Public)

void UMeshSelectionMeshEditActions::DisconnectTriangles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshSelectionMeshEditActions", "DisconnectTriangles");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.MeshSelectionMeshEditActions.FlipNormals
// (Final, Native, Public)

void UMeshSelectionMeshEditActions::FlipNormals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshSelectionMeshEditActions", "FlipNormals");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.MeshSelectionMeshEditActions.SeparateTriangles
// (Final, Native, Public)

void UMeshSelectionMeshEditActions::SeparateTriangles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshSelectionMeshEditActions", "SeparateTriangles");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.DisplaceMeshCommonProperties.GetWeightMapsFunc
// (Final, Native, Public)
// Parameters:
// TArray<class FString>                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UDisplaceMeshCommonProperties::GetWeightMapsFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DisplaceMeshCommonProperties", "GetWeightMapsFunc");

	Params::DisplaceMeshCommonProperties_GetWeightMapsFunc Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function MeshModelingTools.EditMeshPolygonsToolActions.CutFaces
// (Final, Native, Public)

void UEditMeshPolygonsToolActions::CutFaces()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "CutFaces");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Decompose
// (Final, Native, Public)

void UEditMeshPolygonsToolActions::Decompose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Decompose");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Delete
// (Final, Native, Public)

void UEditMeshPolygonsToolActions::Delete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Delete");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Disconnect
// (Final, Native, Public)

void UEditMeshPolygonsToolActions::Disconnect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Disconnect");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Extrude
// (Final, Native, Public)

void UEditMeshPolygonsToolActions::Extrude()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Extrude");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Flip
// (Final, Native, Public)

void UEditMeshPolygonsToolActions::Flip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Flip");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Inset
// (Final, Native, Public)

void UEditMeshPolygonsToolActions::Inset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Inset");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Merge
// (Final, Native, Public)

void UEditMeshPolygonsToolActions::Merge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Merge");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Offset
// (Final, Native, Public)

void UEditMeshPolygonsToolActions::Offset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Offset");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Outset
// (Final, Native, Public)

void UEditMeshPolygonsToolActions::Outset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Outset");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditMeshPolygonsToolActions.RecalcNormals
// (Final, Native, Public)

void UEditMeshPolygonsToolActions::RecalcNormals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "RecalcNormals");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Retriangulate
// (Final, Native, Public)

void UEditMeshPolygonsToolActions::Retriangulate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Retriangulate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.CutFaces
// (Final, Native, Public)

void UEditMeshPolygonsToolActions_Triangles::CutFaces()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "CutFaces");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Delete
// (Final, Native, Public)

void UEditMeshPolygonsToolActions_Triangles::Delete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "Delete");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Disconnect
// (Final, Native, Public)

void UEditMeshPolygonsToolActions_Triangles::Disconnect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "Disconnect");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Extrude
// (Final, Native, Public)

void UEditMeshPolygonsToolActions_Triangles::Extrude()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "Extrude");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Flip
// (Final, Native, Public)

void UEditMeshPolygonsToolActions_Triangles::Flip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "Flip");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Inset
// (Final, Native, Public)

void UEditMeshPolygonsToolActions_Triangles::Inset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "Inset");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Offset
// (Final, Native, Public)

void UEditMeshPolygonsToolActions_Triangles::Offset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "Offset");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Outset
// (Final, Native, Public)

void UEditMeshPolygonsToolActions_Triangles::Outset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "Outset");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Poke
// (Final, Native, Public)

void UEditMeshPolygonsToolActions_Triangles::Poke()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "Poke");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.RecalcNormals
// (Final, Native, Public)

void UEditMeshPolygonsToolActions_Triangles::RecalcNormals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "RecalcNormals");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditMeshPolygonsToolUVActions.PlanarProjection
// (Final, Native, Public)

void UEditMeshPolygonsToolUVActions::PlanarProjection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolUVActions", "PlanarProjection");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.FillHole
// (Final, Native, Public)

void UEditMeshPolygonsToolEdgeActions::FillHole()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolEdgeActions", "FillHole");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Straighten
// (Final, Native, Public)

void UEditMeshPolygonsToolEdgeActions::Straighten()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolEdgeActions", "Straighten");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Weld
// (Final, Native, Public)

void UEditMeshPolygonsToolEdgeActions::Weld()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolEdgeActions", "Weld");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Collapse
// (Final, Native, Public)

void UEditMeshPolygonsToolEdgeActions_Triangles::Collapse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolEdgeActions_Triangles", "Collapse");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.FillHole
// (Final, Native, Public)

void UEditMeshPolygonsToolEdgeActions_Triangles::FillHole()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolEdgeActions_Triangles", "FillHole");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Flip
// (Final, Native, Public)

void UEditMeshPolygonsToolEdgeActions_Triangles::Flip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolEdgeActions_Triangles", "Flip");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Split
// (Final, Native, Public)

void UEditMeshPolygonsToolEdgeActions_Triangles::Split()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolEdgeActions_Triangles", "Split");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Weld
// (Final, Native, Public)

void UEditMeshPolygonsToolEdgeActions_Triangles::Weld()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditMeshPolygonsToolEdgeActions_Triangles", "Weld");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditPivotToolActionPropertySet.Back
// (Final, Native, Public)

void UEditPivotToolActionPropertySet::Back()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditPivotToolActionPropertySet", "Back");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditPivotToolActionPropertySet.Bottom
// (Final, Native, Public)

void UEditPivotToolActionPropertySet::Bottom()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditPivotToolActionPropertySet", "Bottom");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditPivotToolActionPropertySet.Center
// (Final, Native, Public)

void UEditPivotToolActionPropertySet::Center()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditPivotToolActionPropertySet", "Center");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditPivotToolActionPropertySet.Front
// (Final, Native, Public)

void UEditPivotToolActionPropertySet::Front()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditPivotToolActionPropertySet", "Front");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditPivotToolActionPropertySet.Left
// (Final, Native, Public)

void UEditPivotToolActionPropertySet::Left()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditPivotToolActionPropertySet", "Left");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditPivotToolActionPropertySet.Right
// (Final, Native, Public)

void UEditPivotToolActionPropertySet::Right()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditPivotToolActionPropertySet", "Right");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.EditPivotToolActionPropertySet.Top
// (Final, Native, Public)

void UEditPivotToolActionPropertySet::Top()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditPivotToolActionPropertySet", "Top");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.HoleFillToolActions.Clear
// (Final, Native, Public)

void UHoleFillToolActions::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HoleFillToolActions", "Clear");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.HoleFillToolActions.SelectAll
// (Final, Native, Public)

void UHoleFillToolActions::SelectAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HoleFillToolActions", "SelectAll");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.MeshSelectionEditActions.Clear
// (Final, Native, Public)

void UMeshSelectionEditActions::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshSelectionEditActions", "Clear");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.MeshSelectionEditActions.ExpandToConnected
// (Final, Native, Public)

void UMeshSelectionEditActions::ExpandToConnected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshSelectionEditActions", "ExpandToConnected");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.MeshSelectionEditActions.Grow
// (Final, Native, Public)

void UMeshSelectionEditActions::Grow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshSelectionEditActions", "Grow");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.MeshSelectionEditActions.Invert
// (Final, Native, Public)

void UMeshSelectionEditActions::Invert()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshSelectionEditActions", "Invert");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.MeshSelectionEditActions.OptimizeSelection
// (Final, Native, Public)

void UMeshSelectionEditActions::OptimizeSelection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshSelectionEditActions", "OptimizeSelection");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.MeshSelectionEditActions.SelectAll
// (Final, Native, Public)

void UMeshSelectionEditActions::SelectAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshSelectionEditActions", "SelectAll");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.MeshSelectionEditActions.SelectLargestComponentByArea
// (Final, Native, Public)

void UMeshSelectionEditActions::SelectLargestComponentByArea()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshSelectionEditActions", "SelectLargestComponentByArea");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.MeshSelectionEditActions.SelectLargestComponentByTriCount
// (Final, Native, Public)

void UMeshSelectionEditActions::SelectLargestComponentByTriCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshSelectionEditActions", "SelectLargestComponentByTriCount");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.MeshSelectionEditActions.Shrink
// (Final, Native, Public)

void UMeshSelectionEditActions::Shrink()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshSelectionEditActions", "Shrink");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.MirrorToolActionPropertySet.Backward
// (Final, Native, Public)

void UMirrorToolActionPropertySet::Backward()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MirrorToolActionPropertySet", "Backward");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.MirrorToolActionPropertySet.Down
// (Final, Native, Public)

void UMirrorToolActionPropertySet::Down()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MirrorToolActionPropertySet", "Down");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.MirrorToolActionPropertySet.Forward
// (Final, Native, Public)

void UMirrorToolActionPropertySet::Forward()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MirrorToolActionPropertySet", "Forward");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.MirrorToolActionPropertySet.Left
// (Final, Native, Public)

void UMirrorToolActionPropertySet::Left()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MirrorToolActionPropertySet", "Left");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.MirrorToolActionPropertySet.Right
// (Final, Native, Public)

void UMirrorToolActionPropertySet::Right()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MirrorToolActionPropertySet", "Right");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.MirrorToolActionPropertySet.ShiftToCenter
// (Final, Native, Public)

void UMirrorToolActionPropertySet::ShiftToCenter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MirrorToolActionPropertySet", "ShiftToCenter");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.MirrorToolActionPropertySet.Up
// (Final, Native, Public)

void UMirrorToolActionPropertySet::Up()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MirrorToolActionPropertySet", "Up");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function MeshModelingTools.PlaneCutTool.Cut
// (Final, Native, Protected)

void UPlaneCutTool::Cut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlaneCutTool", "Cut");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

