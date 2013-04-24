// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_Tools_HeaderFile
#define _IntTools_Tools_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopAbs_State_HeaderFile
#include <TopAbs_State.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
class TopoDS_Vertex;
class TopoDS_Wire;
class TopoDS_Face;
class gp_Pnt2d;
class TopoDS_Edge;
class IntTools_CommonPrt;
class gp_Pnt;
class IntTools_Curve;
class IntTools_SequenceOfCurves;
class gp_Dir;
class Geom_Curve;



//!  The class contains handy static functions <br>
//!  dealing with the geometry and topology. <br>
class IntTools_Tools  {
public:

  DEFINE_STANDARD_ALLOC

  
//! Computes distance between vertex V1 and vertex V2, <br>
//! if the distance is less than sum of vertex tolerances <br>
//! returns zero, <br>
//! otherwise returns negative value <br>
//! <br>
  Standard_EXPORT   static  Standard_Integer ComputeVV(const TopoDS_Vertex& V1,const TopoDS_Vertex& V2) ;
  
//! Returns True if wire aW contains edges <br>
//! with INTERNAL orientation <br>
//! <br>
  Standard_EXPORT   static  Standard_Boolean HasInternalEdge(const TopoDS_Wire& aW) ;
  
//! Build a face based on surface of given face aF <br>
//! and bounded by wire aW <br>
//! <br>
  Standard_EXPORT   static  void MakeFaceFromWireAndFace(const TopoDS_Wire& aW,const TopoDS_Face& aF,TopoDS_Face& aFNew) ;
  
//! <br>
//! <br>
  Standard_EXPORT   static  TopAbs_State ClassifyPointByFace(const TopoDS_Face& aF,const gp_Pnt2d& P) ;
  
//! Computes square distance between a point on the edge E <br>
//! corresponded to parameter t and vertices of edge E. <br>
//! Returns True if this distance is less than square <br>
//! tolerance of vertex, otherwise returns false. <br>
//! <br>
  Standard_EXPORT   static  Standard_Boolean IsVertex(const TopoDS_Edge& E,const Standard_Real t) ;
  
//! Returns True if square distance between vertex V <br>
//! and a point on the edge E corresponded to parameter t <br>
//! is less than square tolerance of V <br>
//! <br>
  Standard_EXPORT   static  Standard_Boolean IsVertex(const TopoDS_Edge& E,const TopoDS_Vertex& V,const Standard_Real t) ;
  
//! Returns True if IsVertx for middle parameter of fist range <br>
//! and first edge returns True <br>
//! and if IsVertex for middle parameter of second range and <br>
//! second range returns True, <br>
//! otherwise returns False <br>
//! <br>
  Standard_EXPORT   static  Standard_Boolean IsVertex(const IntTools_CommonPrt& aCmnPrt) ;
  
//! Gets boundary of parameters of E1 and E2. <br>
//! Computes 3d points on each corresponded to average parameters. <br>
//! Returns True if distance between computed points is less than <br>
//! sum of edge tolerance, otherwise returns False. <br>
//! <br>
  Standard_EXPORT   static  Standard_Boolean IsMiddlePointsEqual(const TopoDS_Edge& E1,const TopoDS_Edge& E2) ;
  
//! Returns True if the distance between point aP and <br>
//! vertex aV is less or equal to sum of aTolPV and <br>
//! vertex tolerance, otherwise returns False <br>
//! <br>
  Standard_EXPORT   static  Standard_Boolean IsVertex(const gp_Pnt& aP,const Standard_Real aTolPV,const TopoDS_Vertex& aV) ;
  
//! Returns some value between aFirst and aLast <br>
//! <br>
  Standard_EXPORT   static  Standard_Real IntermediatePoint(const Standard_Real aFirst,const Standard_Real aLast) ;
  
//! Split aC by average parameter if aC is closed in 3D. <br>
//! Returns positive value if splitting has been done, <br>
//! otherwise returns zero. <br>
//! <br>
  Standard_EXPORT   static  Standard_Integer SplitCurve(const IntTools_Curve& aC,IntTools_SequenceOfCurves& aS) ;
  
//! Puts curves from aSIn to aSOut except those curves that <br>
//! are coincide with first curve from aSIn. <br>
//! <br>
  Standard_EXPORT   static  void RejectLines(const IntTools_SequenceOfCurves& aSIn,IntTools_SequenceOfCurves& aSOut) ;
  
//! Returns True if D1 and D2 coinside <br>
//! <br>
  Standard_EXPORT   static  Standard_Boolean IsDirsCoinside(const gp_Dir& D1,const gp_Dir& D2) ;
  
//! Returns True if D1 and D2 coinside with given tolerance <br>
//! <br>
  Standard_EXPORT   static  Standard_Boolean IsDirsCoinside(const gp_Dir& D1,const gp_Dir& D2,const Standard_Real aTol) ;
  
//! Returns True if aC is BoundedCurve from Geom and <br>
//! the distance between first point <br>
//! of the curve aC and last point <br>
//! is less than 1.e-12 <br>
//! <br>
  Standard_EXPORT   static  Standard_Boolean IsClosed(const Handle(Geom_Curve)& aC) ;
  
//! Returns adaptive tolerance for given aTolBase <br>
//! if aC is trimmed curve and basis curve is parabola, <br>
//! otherwise returns value of aTolBase <br>
//! <br>
  Standard_EXPORT   static  Standard_Real CurveTolerance(const Handle(Geom_Curve)& aC,const Standard_Real aTolBase) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
