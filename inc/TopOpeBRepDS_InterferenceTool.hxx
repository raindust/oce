// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_InterferenceTool_HeaderFile
#define _TopOpeBRepDS_InterferenceTool_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_TopOpeBRepDS_Interference.hxx>
#include <TopOpeBRepDS_Kind.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Real.hxx>
#include <Handle_Geom2d_Curve.hxx>
#include <Standard_Boolean.hxx>
#include <TopOpeBRepDS_Config.hxx>
class TopOpeBRepDS_Interference;
class TopOpeBRepDS_Transition;
class Geom2d_Curve;



class TopOpeBRepDS_InterferenceTool 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT static   Handle(TopOpeBRepDS_Interference) MakeEdgeInterference (const TopOpeBRepDS_Transition& T, const TopOpeBRepDS_Kind SK, const Standard_Integer SI, const TopOpeBRepDS_Kind GK, const Standard_Integer GI, const Standard_Real P) ;
  
  Standard_EXPORT static   Handle(TopOpeBRepDS_Interference) MakeCurveInterference (const TopOpeBRepDS_Transition& T, const TopOpeBRepDS_Kind SK, const Standard_Integer SI, const TopOpeBRepDS_Kind GK, const Standard_Integer GI, const Standard_Real P) ;
  
  //! duplicate I in a new interference with Complement() transition.
  Standard_EXPORT static   Handle(TopOpeBRepDS_Interference) DuplicateCurvePointInterference (const Handle(TopOpeBRepDS_Interference)& I) ;
  
  Standard_EXPORT static   Handle(TopOpeBRepDS_Interference) MakeFaceCurveInterference (const TopOpeBRepDS_Transition& Transition, const Standard_Integer FaceI, const Standard_Integer CurveI, const Handle(Geom2d_Curve)& PC) ;
  
  Standard_EXPORT static   Handle(TopOpeBRepDS_Interference) MakeSolidSurfaceInterference (const TopOpeBRepDS_Transition& Transition, const Standard_Integer SolidI, const Standard_Integer SurfaceI) ;
  
  Standard_EXPORT static   Handle(TopOpeBRepDS_Interference) MakeEdgeVertexInterference (const TopOpeBRepDS_Transition& Transition, const Standard_Integer EdgeI, const Standard_Integer VertexI, const Standard_Boolean VertexIsBound, const TopOpeBRepDS_Config Config, const Standard_Real param) ;
  
  Standard_EXPORT static   Handle(TopOpeBRepDS_Interference) MakeFaceEdgeInterference (const TopOpeBRepDS_Transition& Transition, const Standard_Integer FaceI, const Standard_Integer EdgeI, const Standard_Boolean EdgeIsBound, const TopOpeBRepDS_Config Config) ;
  
  Standard_EXPORT static   Standard_Real Parameter (const Handle(TopOpeBRepDS_Interference)& CPI) ;
  
  Standard_EXPORT static   void Parameter (const Handle(TopOpeBRepDS_Interference)& CPI, const Standard_Real Par) ;




protected:





private:





};







#endif // _TopOpeBRepDS_InterferenceTool_HeaderFile
