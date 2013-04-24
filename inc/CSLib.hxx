// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _CSLib_HeaderFile
#define _CSLib_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _CSLib_DerivativeStatus_HeaderFile
#include <CSLib_DerivativeStatus.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _CSLib_NormalStatus_HeaderFile
#include <CSLib_NormalStatus.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class gp_Vec;
class gp_Dir;
class TColgp_Array2OfVec;
class CSLib_Class2d;
class CSLib_NormalPolyDef;


//!  This package implements functions for basis geometric <br>
//!  computation on curves and surfaces. <br>
//!  The tolerance criterions used in this package are <br>
//!  Resolution from package gp and RealEpsilon from class <br>
//!  Real of package Standard. <br>
class CSLib  {
public:

  DEFINE_STANDARD_ALLOC

  
//!  The following functions computes the normal to a surface <br>
//! inherits FunctionWithDerivative from math <br>
//! <br>
//!  Computes the normal direction of a surface as the cross product <br>
//!  between D1U and D1V. <br>
//!  If D1U has null length or D1V has null length or D1U and D1V are <br>
//!  parallel the normal is undefined. <br>
//!  To check that D1U and D1V are colinear the sinus of the angle <br>
//!  between D1U and D1V is computed and compared with SinTol. <br>
//!  The normal is computed if Status == Done else the Status gives the <br>
//!  reason why the computation has failed. <br>
  Standard_EXPORT   static  void Normal(const gp_Vec& D1U,const gp_Vec& D1V,const Standard_Real SinTol,CSLib_DerivativeStatus& Status,gp_Dir& Normal) ;
  
//!  If there is a singularity on the surface  the previous method <br>
//!  cannot compute the local normal. <br>
//!  This method computes an approched normal direction of a surface. <br>
//!  It does a limited development and needs the second derivatives <br>
//!  on the surface as input data. <br>
//!  It computes the normal as follow : <br>
//!  N(u, v) = D1U ^ D1V <br>
//!  N(u0+du,v0+dv) = N0 + DN/du(u0,v0) * du + DN/dv(u0,v0) * dv + Eps <br>
//!  with Eps->0 so we can have the equivalence N ~ dN/du + dN/dv. <br>
//!  DNu = ||DN/du|| and DNv = ||DN/dv|| <br>
//! <br>
//!  . if DNu IsNull (DNu <= Resolution from gp) the answer Done = True <br>
//!    the normal direction is given by DN/dv <br>
//!  . if DNv IsNull (DNv <= Resolution from gp) the answer Done = True <br>
//!    the normal direction is given by DN/du <br>
//!  . if the two directions DN/du and DN/dv are parallel Done = True <br>
//!    the normal direction is given either by DN/du or DN/dv. <br>
//!    To check that the two directions are colinear the sinus of the <br>
//!    angle between these directions is computed and compared with <br>
//!    SinTol. <br>
//!  . if DNu/DNv or DNv/DNu is lower or equal than Real Epsilon <br>
//!    Done = False, the normal is undefined <br>
//!  . if DNu IsNull and DNv is Null Done = False, there is an <br>
//!    indetermination and we should do a limited developpement at <br>
//!    order 2 (it means that we cannot omit Eps). <br>
//!  . if DNu Is not Null and DNv Is not Null Done = False, there are <br>
//!    an infinity of normals at the considered point on the surface. <br>
  Standard_EXPORT   static  void Normal(const gp_Vec& D1U,const gp_Vec& D1V,const gp_Vec& D2U,const gp_Vec& D2V,const gp_Vec& D2UV,const Standard_Real SinTol,Standard_Boolean& Done,CSLib_NormalStatus& Status,gp_Dir& Normal) ;
  
//!  Computes the normal direction of a surface as the cross product <br>
//!  between D1U and D1V. <br>
//! <br>
  Standard_EXPORT   static  void Normal(const gp_Vec& D1U,const gp_Vec& D1V,const Standard_Real MagTol,CSLib_NormalStatus& Status,gp_Dir& Normal) ;
  //!   find the first  order k0  of deriviative of NUV <br>
//!  where: foreach order < k0  all the derivatives of NUV  are <br>
//!  null all the derivatives of NUV corresponding to the order <br>
//!  k0 are collinear and have the same sens. <br>
//!  In this case, normal at U,V is unique. <br>
  Standard_EXPORT   static  void Normal(const Standard_Integer MaxOrder,const TColgp_Array2OfVec& DerNUV,const Standard_Real MagTol,const Standard_Real U,const Standard_Real V,const Standard_Real Umin,const Standard_Real Umax,const Standard_Real Vmin,const Standard_Real Vmax,CSLib_NormalStatus& Status,gp_Dir& Normal,Standard_Integer& OrderU,Standard_Integer& OrderV) ;
  //! -- Computes the derivative  of order Nu in the -- <br>
//!         direction U and Nv in the direction V of the not -- <br>
//!         normalized  normal vector at  the point  P(U,V) The <br>
//!         array DerSurf contain the derivative (i,j) of the surface <br>
//!         for i=0,Nu+1 ; j=0,Nv+1 <br>
  Standard_EXPORT   static  gp_Vec DNNUV(const Standard_Integer Nu,const Standard_Integer Nv,const TColgp_Array2OfVec& DerSurf) ;
  //! Computes the derivatives of order Nu in the direction Nu <br>
//!           and Nv in the direction Nv of the not normalized vector <br>
//!           N(u,v) = dS1/du * dS2/dv (cases where we use an osculating surface) <br>
//!           DerSurf1 are the derivatives of S1 <br>
  Standard_EXPORT   static  gp_Vec DNNUV(const Standard_Integer Nu,const Standard_Integer Nv,const TColgp_Array2OfVec& DerSurf1,const TColgp_Array2OfVec& DerSurf2) ;
  //! -- Computes the derivative  of order Nu in the -- <br>
//!         direction   U and  Nv in the  direction  V  of the <br>
//!         normalized normal vector  at the point P(U,V) array <br>
//!         DerNUV contain the  derivative  (i+Iduref,j+Idvref) <br>
//!         of D1U ^ D1V for i=0,Nu  ; j=0,Nv Iduref and Idvref <br>
//!         correspond to a derivative  of D1U ^ D1V  which can <br>
//!         be used to compute the normalized normal vector. <br>
//!         In the regular cases , Iduref=Idvref=0. <br>
  Standard_EXPORT   static  gp_Vec DNNormal(const Standard_Integer Nu,const Standard_Integer Nv,const TColgp_Array2OfVec& DerNUV,const Standard_Integer Iduref = 0,const Standard_Integer Idvref = 0) ;





protected:





private:




friend class CSLib_Class2d;
friend class CSLib_NormalPolyDef;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
