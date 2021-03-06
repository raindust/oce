// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRAppli_ReflectLines_HeaderFile
#define _HLRAppli_ReflectLines_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <HLRAlgo_Projector.hxx>
#include <TopoDS_Shape.hxx>
#include <Standard_Real.hxx>
class TopoDS_Shape;


//! This class builds reflect lines on a shape
//! according to the axes of view defined by user.
//! Reflect lines are represented by edges in 3d.
class HLRAppli_ReflectLines 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Constructor
  Standard_EXPORT HLRAppli_ReflectLines(const TopoDS_Shape& aShape);
  
  //! Sets the normal to the plane of visualisation,
  //! the coordinates of the view point and
  //! the coordinates of the vertical direction vector.
  Standard_EXPORT   void SetAxes (const Standard_Real Nx, const Standard_Real Ny, const Standard_Real Nz, const Standard_Real XAt, const Standard_Real YAt, const Standard_Real ZAt, const Standard_Real XUp, const Standard_Real YUp, const Standard_Real ZUp) ;
  
  Standard_EXPORT   void Perform() ;
  
  //! returns resulting compound of reflect lines
  //! represented by edges in 3d
  Standard_EXPORT   TopoDS_Shape GetResult()  const;




protected:





private:



  HLRAlgo_Projector myProjector;
  TopoDS_Shape myShape;
  TopoDS_Shape myCompound;


};







#endif // _HLRAppli_ReflectLines_HeaderFile
