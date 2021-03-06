// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_IndexedMapOfOrientedShape_HeaderFile
#define _TopTools_IndexedMapOfOrientedShape_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_TopTools_IndexedMapNodeOfIndexedMapOfOrientedShape.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
class Standard_DomainError;
class Standard_OutOfRange;
class TopoDS_Shape;
class TopTools_OrientedShapeMapHasher;
class TopTools_IndexedMapNodeOfIndexedMapOfOrientedShape;



class TopTools_IndexedMapOfOrientedShape  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopTools_IndexedMapOfOrientedShape(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT TopTools_IndexedMapOfOrientedShape(const TopTools_IndexedMapOfOrientedShape& Other);
  
  Standard_EXPORT   TopTools_IndexedMapOfOrientedShape& Assign (const TopTools_IndexedMapOfOrientedShape& Other) ;
  TopTools_IndexedMapOfOrientedShape& operator = (const TopTools_IndexedMapOfOrientedShape& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TopTools_IndexedMapOfOrientedShape()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Integer Add (const TopoDS_Shape& K) ;
  
  Standard_EXPORT   void Substitute (const Standard_Integer I, const TopoDS_Shape& K) ;
  
  Standard_EXPORT   void RemoveLast() ;
  
  Standard_EXPORT   Standard_Boolean Contains (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT  const  TopoDS_Shape& FindKey (const Standard_Integer I)  const;
 const  TopoDS_Shape& operator () (const Standard_Integer I)  const
{
  return FindKey(I);
}
  
  Standard_EXPORT   Standard_Integer FindIndex (const TopoDS_Shape& K)  const;




protected:





private:





};







#endif // _TopTools_IndexedMapOfOrientedShape_HeaderFile
