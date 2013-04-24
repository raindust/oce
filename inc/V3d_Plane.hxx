// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _V3d_Plane_HeaderFile
#define _V3d_Plane_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_V3d_Plane_HeaderFile
#include <Handle_V3d_Plane.hxx>
#endif

#ifndef _Handle_Visual3d_ClipPlane_HeaderFile
#include <Handle_Visual3d_ClipPlane.hxx>
#endif
#ifndef _Handle_Graphic3d_Structure_HeaderFile
#include <Handle_Graphic3d_Structure.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _V3d_View_HeaderFile
#include <V3d_View.hxx>
#endif
#ifndef _Handle_V3d_Plane_HeaderFile
#include <Handle_V3d_Plane.hxx>
#endif
#ifndef _Quantity_Parameter_HeaderFile
#include <Quantity_Parameter.hxx>
#endif
#ifndef _Handle_V3d_View_HeaderFile
#include <Handle_V3d_View.hxx>
#endif
#ifndef _Quantity_Color_HeaderFile
#include <Quantity_Color.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Visual3d_ClipPlane;
class Graphic3d_Structure;
class V3d_BadValue;
class V3d_View;


//! Defines the services of Plane type objects. Only <br>
//!	    the creation and editing of the functions is dealt <br>
//!	    with here. <br>
//! Warning: The representation of the clipping plane must be <br>
//!	    calculated by the application by means of Graphic3d. <br>
//!	    Editing of this representation must be coherent with <br>
//!	    respect to the position of the plane. <br>
class V3d_Plane : public MMgt_TShared {

public:

  //! Creates a clipping plane using the equation : <br>
//!          <A>*X + <B>*Y + <C>*Z + <D> = 0.0 <br>//!  Warning! raises BadValue from V3d <br>
//!          if the norm of the plane is NULL. <br>
  Standard_EXPORT   V3d_Plane(const Quantity_Parameter A = 0.0,const Quantity_Parameter B = 0.0,const Quantity_Parameter C = 1.0,const Quantity_Parameter D = 0.0);
  //! Modifies the plane equation. <br>//!  Warning! raises BadValue from V3d <br>
//!          if the norm of the plane is NULL. <br>
//!	If the norm of the plane is NULL. <br>
  Standard_EXPORT     void SetPlane(const Quantity_Parameter A,const Quantity_Parameter B,const Quantity_Parameter C,const Quantity_Parameter D) ;
  //! Display the plane representation <br>
//!          in the choosen view. <br>
  Standard_EXPORT   virtual  void Display(const Handle(V3d_View)& aView,const Quantity_Color& aColor = Quantity_NOC_GRAY) ;
  //! Erase the plane representation. <br>
  Standard_EXPORT     void Erase() ;
  //! Returns the parameters of the plane . <br>
  Standard_EXPORT     void Plane(Quantity_Parameter& A,Quantity_Parameter& B,Quantity_Parameter& C,Quantity_Parameter& D) const;
  //! Returns TRUE when the plane representation is displayed <br>
  Standard_EXPORT     Standard_Boolean IsDisplayed() const;


friend   //! Activate all the clipping planes defined in <br>
//!          this view. <br>//!      If No More Plane can be activated in MyView . <br>
  Standard_EXPORT   void V3d_View::SetPlaneOn() ;
friend   //! Activates the clipping plane in this view. <br>//!      If No More Plane can be activated in MyView . <br>
  Standard_EXPORT   void V3d_View::SetPlaneOn(const Handle(V3d_Plane)& MyPlane) ;
friend   //! Deactivate all clipping planes defined <br>
//!          in this view. <br>
  Standard_EXPORT   void V3d_View::SetPlaneOff() ;
friend   //! Desactivates the clipping plane defined <br>
//!          in this view. <br>
  Standard_EXPORT   void V3d_View::SetPlaneOff(const Handle(V3d_Plane)& MyPlane) ;


  DEFINE_STANDARD_RTTI(V3d_Plane)

protected:


Handle_Graphic3d_Structure MyGraphicStructure;


private: 

  //! Returns the associated plane from Visual3d. <br>
  Standard_EXPORT     Handle_Visual3d_ClipPlane Plane() const;
  //! Updates the the plane representation. <br>
  Standard_EXPORT     void Update() ;

Handle_Visual3d_ClipPlane MyPlane;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
