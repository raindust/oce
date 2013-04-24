// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PrsMgr_PresentableObject_HeaderFile
#define _PrsMgr_PresentableObject_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_PrsMgr_PresentableObject_HeaderFile
#include <Handle_PrsMgr_PresentableObject.hxx>
#endif

#ifndef _PrsMgr_Presentations_HeaderFile
#include <PrsMgr_Presentations.hxx>
#endif
#ifndef _PrsMgr_TypeOfPresentation3d_HeaderFile
#include <PrsMgr_TypeOfPresentation3d.hxx>
#endif
#ifndef _TopLoc_Location_HeaderFile
#include <TopLoc_Location.hxx>
#endif
#ifndef _Graphic3d_CTransPersStruct_HeaderFile
#include <Graphic3d_CTransPersStruct.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Graphic3d_Structure_HeaderFile
#include <Handle_Graphic3d_Structure.hxx>
#endif
#ifndef _Handle_Graphic3d_DataStructureManager_HeaderFile
#include <Handle_Graphic3d_DataStructureManager.hxx>
#endif
#ifndef _PrsMgr_Presentation3d_HeaderFile
#include <PrsMgr_Presentation3d.hxx>
#endif
#ifndef _Handle_Geom_Transformation_HeaderFile
#include <Handle_Geom_Transformation.hxx>
#endif
#ifndef _Handle_PrsMgr_PresentationManager3d_HeaderFile
#include <Handle_PrsMgr_PresentationManager3d.hxx>
#endif
#ifndef _Handle_Prs3d_Presentation_HeaderFile
#include <Handle_Prs3d_Presentation.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Prs3d_Projector_HeaderFile
#include <Handle_Prs3d_Projector.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_PrsMgr_PresentationManager_HeaderFile
#include <Handle_PrsMgr_PresentationManager.hxx>
#endif
#ifndef _Handle_PrsMgr_Presentation_HeaderFile
#include <Handle_PrsMgr_Presentation.hxx>
#endif
#ifndef _Graphic3d_TransModeFlags_HeaderFile
#include <Graphic3d_TransModeFlags.hxx>
#endif
class Standard_NotImplemented;
class PrsMgr_PresentationManager;
class Graphic3d_Structure;
class Graphic3d_DataStructureManager;
class Geom_Transformation;
class PrsMgr_PresentationManager3d;
class Prs3d_Presentation;
class Prs3d_Projector;
class PrsMgr_Presentation;
class PrsMgr_Presentations;
class gp_Pnt;
class TColStd_ListOfInteger;
class TopLoc_Location;


//! A framework to supply the Graphic3d <br>
//! structure of the object to be presented. On the first <br>
//! display request, this structure is created by calling the <br>
//! appropriate algorithm and retaining this frameworkfor <br>
//! further display. <br>
//! This abstract framework is inherited in Application <br>
//! Interactive Services (AIS), notably in: <br>
//! -   AIS_InteractiveObject <br>
//! -   AIS_ConnectedInteractive <br>
//! -   AIS_MultipleConnectedInteractive <br>
//! -   AIS_Shape <br>
//!   Consequently, 3D presentation should be handled by <br>
//! the relevant daughter classes and their member <br>
//! functions in AIS. This is particularly true in the <br>
//! creation of new interactive objects. <br>
class PrsMgr_PresentableObject : public MMgt_TShared {

public:

  //! Returns information on whether the object accepts display in HLR mode or not. <br>
  Standard_EXPORT     PrsMgr_TypeOfPresentation3d TypeOfPresentation3d() const;
  //!  Sets up Transform Persistence Mode for this object. <br>
//! This function used to lock in object position, rotation and / or zooming relative to camera position. <br>
//! Object will be drawn in the origin setted by APoint parameter (except Graphic3d_TMF_TriedronPers flag <br>
//! - see description later). aFlag should be: <br>
//! -   Graphic3d_TMF_None - no persistence attributes (reset); <br>
//! -   Graphic3d_TMF_PanPers - object doesn't move; <br>
//! -   Graphic3d_TMF_ZoomPers - object doesn't resize; <br>
//! -   Graphic3d_TMF_RotatePers - object doesn't rotate; <br>
//! -   Graphic3d_TMF_FullPers - pan, zoom and rotate transform persistence; <br>
//! -   Graphic3d_TMF_TriedronPers - object behaves like trihedron; <br>
//! -   combination (Graphic3d_TMF_PanPers | Graphic3d_TMF_ZoomPers); <br>
//! -   combination (Graphic3d_TMF_PanPers | Graphic3d_TMF_RotatePers); <br>
//! -   combination (Graphic3d_TMF_ZoomPers | Graphic3d_TMF_RotatePers). <br>
//! If Graphic3d_TMF_TriedronPers persistence mode selected APoint coordinates X and Y means: <br>
//! -   X = 0.0, Y = 0.0 - center of view window; <br>
//! -   X > 0.0, Y > 0.0 - right upper corner of view window; <br>
//! -   X > 0.0, Y < 0.0 - right lower corner of view window; <br>
//! -   X < 0.0, Y > 0.0 - left  upper corner of view window; <br>
//! -   X < 0.0, Y < 0.0 - left  lower corner of view window. <br>
//! And Z coordinate defines the gap from border of view window (except center position). <br>
  Standard_EXPORT   virtual  void SetTransformPersistence(const Graphic3d_TransModeFlags& aFlag,const gp_Pnt& APoint) ;
  //!  Calls previous method  with  point  (0,0,0) <br>
  Standard_EXPORT     void SetTransformPersistence(const Graphic3d_TransModeFlags& aFlag) ;
  //!  Gets  Transform  Persistence Mode  for  this  object <br>
  Standard_EXPORT     Graphic3d_TransModeFlags GetTransformPersistenceMode() const;
  //!  Gets  point  of  transform  persistence for  this  object <br>
  Standard_EXPORT     gp_Pnt GetTransformPersistencePoint() const;
  
  Standard_EXPORT     void SetTypeOfPresentation(const PrsMgr_TypeOfPresentation3d aType) ;
  //! flags the Prs of mode <AMode> to be Updated. <br>
//!          the Update will be done when needed. <br>
  Standard_EXPORT     void SetToUpdate(const Standard_Integer aMode) ;
  //! flags all the Presentations to be Updated. <br>
  Standard_EXPORT     void SetToUpdate() ;
  //! gives the list of modes which are flagged "to be updated". <br>
  Standard_EXPORT     void ToBeUpdated(TColStd_ListOfInteger& ListOfMode) const;
  
  Standard_EXPORT   virtual  void SetLocation(const TopLoc_Location& aLoc) ;
  
  Standard_EXPORT     Standard_Boolean HasLocation() const;
  
       const TopLoc_Location& Location() const;
  
  Standard_EXPORT   virtual  void ResetLocation() ;
  
  Standard_EXPORT   virtual  void UpdateLocation() ;
  
  Standard_EXPORT   virtual  void UpdateLocation(const Handle(Prs3d_Presentation)& P) ;
  //! Set Z layer ID and update all presentations of <br>
//! the presentable object. The layer can be set only for displayed object. <br>
//! If all object presentations are removed, the layer ID will be set to <br>
//! default value when computing presentation. The layers mechanism allows <br>
//! drawing objects in higher layers in overlay of objects in lower layers. <br>
  Standard_EXPORT   virtual  void SetZLayer(const Handle(PrsMgr_PresentationManager)& thePrsMgr,const Standard_Integer theLayerId) ;
  //! Get ID of Z layer. If no presentations of object is displayed, <br>
//! and layer ID is unavailable, the -1 value is returned. <br>
  Standard_EXPORT     Standard_Integer GetZLayer(const Handle(PrsMgr_PresentationManager)& thePrsMgr) const;


friend class PrsMgr_PresentationManager;
friend   
  Standard_EXPORT   Handle_Graphic3d_Structure PrsMgr_Presentation3d::Compute(const Handle(Graphic3d_DataStructureManager)& aProjector) ;
friend   
  Standard_EXPORT   void PrsMgr_Presentation3d::Compute(const Handle(Graphic3d_DataStructureManager)& aProjector,const Handle(Graphic3d_Structure)& aGivenStruct) ;
friend   
  Standard_EXPORT   Handle_Graphic3d_Structure PrsMgr_Presentation3d::Compute(const Handle(Graphic3d_DataStructureManager)& aProjector,const Handle(Geom_Transformation)& TheTrsf) ;
friend   
  Standard_EXPORT   void PrsMgr_Presentation3d::Compute(const Handle(Graphic3d_DataStructureManager)& aProjector,const Handle(Geom_Transformation)& TheTrsf,const Handle(Graphic3d_Structure)& aGivenStruct) ;


  DEFINE_STANDARD_RTTI(PrsMgr_PresentableObject)

protected:

  
  Standard_EXPORT   PrsMgr_PresentableObject(const PrsMgr_TypeOfPresentation3d aTypeOfPresentation3d = PrsMgr_TOP_AllView);
  //! Calculates the 3D view aPresentation and its <br>
//! updates. The latter are managed by aPresentationManager. <br>
//! aPresentableObject has the display mode aMode; <br>
//! this has the default value of 0, that is, the wireframe display mode. <br>
  Standard_EXPORT   virtual  void Compute(const Handle(PrsMgr_PresentationManager3d)& aPresentationManager,const Handle(Prs3d_Presentation)& aPresentation,const Standard_Integer aMode = 0) ;
  //! Calculates the 3D view aPresentation and its <br>
//! updates. The latter are managed by <br>
//! aPresentationManager. Each of the views in the <br>
//! viewer and every modification such as rotation, for <br>
//! example, entails recalculation. <br>
//! It must be redefined to implement hidden line removal <br>
//! for the object. The user never calls this method <br>
//! himself. This is done via the InteractiveContext object <br>
//! and is dependent on the point of view from which the <br>
//! object is displayed. <br>
  Standard_EXPORT   virtual  void Compute(const Handle(Prs3d_Projector)& aProjector,const Handle(Prs3d_Presentation)& aPresentation) ;
  //! Calculates the 3D view aPresentation and its <br>
//! updates. The latter are managed by <br>
//! aPresentationManager. A point of view is provided <br>
//! by the projector aProjector, and the geometric <br>
//! transformation which has transformed associated <br>
//! presentable objects is specified by aTrsf. <br>
//! This function is to be used in case where a hidden <br>
//! line removal display cannot be calculated <br>
//! automatically. This occurs   when associated <br>
//! presentable objects have been transformed <br>
//! geometrically, but not translated. <br>
//! Warning <br>
//! The transformation aTrsf must be applied to the <br>
//! object before computation. <br>
  Standard_EXPORT   virtual  void Compute(const Handle(Prs3d_Projector)& aProjector,const Handle(Geom_Transformation)& aTrsf,const Handle(Prs3d_Presentation)& aPresentation) ;
  //! recomputes all presentations of the object. <br>
  Standard_EXPORT     void Update(const Standard_Boolean AllModes = Standard_False) ;
  //! Recomputes the presentation in the given mode. <br>
//!          If ClearOther is true, other presentation will be cleared. <br>
  Standard_EXPORT     void Update(const Standard_Integer aMode,const Standard_Boolean ClearOther) ;
  //! High-level interface for controlling polygon offsets <br>
  Standard_EXPORT   virtual  void Fill(const Handle(PrsMgr_PresentationManager)& aPresentationManager,const Handle(PrsMgr_Presentation)& aPresentation,const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT     PrsMgr_Presentations& Presentations() ;

PrsMgr_Presentations myPresentations;
PrsMgr_TypeOfPresentation3d myTypeOfPresentation3d;
TopLoc_Location myLocation;


private: 


Graphic3d_CTransPersStruct myTransformPersistence;


};


#include <PrsMgr_PresentableObject.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
