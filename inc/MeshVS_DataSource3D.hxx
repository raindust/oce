// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_DataSource3D_HeaderFile
#define _MeshVS_DataSource3D_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_MeshVS_DataSource3D.hxx>

#include <MeshVS_DataMapOfHArray1OfSequenceOfInteger.hxx>
#include <MeshVS_DataSource.hxx>
#include <Handle_MeshVS_HArray1OfSequenceOfInteger.hxx>
#include <Standard_Integer.hxx>
class MeshVS_HArray1OfSequenceOfInteger;



class MeshVS_DataSource3D : public MeshVS_DataSource
{

public:

  
  Standard_EXPORT   Handle(MeshVS_HArray1OfSequenceOfInteger) GetPrismTopology (const Standard_Integer BasePoints)  const;
  
  Standard_EXPORT   Handle(MeshVS_HArray1OfSequenceOfInteger) GetPyramidTopology (const Standard_Integer BasePoints)  const;
  
  Standard_EXPORT static   Handle(MeshVS_HArray1OfSequenceOfInteger) CreatePrismTopology (const Standard_Integer BasePoints) ;
  
  Standard_EXPORT static   Handle(MeshVS_HArray1OfSequenceOfInteger) CreatePyramidTopology (const Standard_Integer BasePoints) ;




  DEFINE_STANDARD_RTTI(MeshVS_DataSource3D)

protected:




private: 


  MeshVS_DataMapOfHArray1OfSequenceOfInteger myPrismTopos;
  MeshVS_DataMapOfHArray1OfSequenceOfInteger myPyramidTopos;


};







#endif // _MeshVS_DataSource3D_HeaderFile
