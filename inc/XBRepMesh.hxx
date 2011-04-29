// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XBRepMesh_HeaderFile
#define _XBRepMesh_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _BRepMesh_PDiscretRoot_HeaderFile
#include <BRepMesh_PDiscretRoot.hxx>
#endif
class TopoDS_Shape;



class XBRepMesh  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   static  Standard_Integer Discret(const TopoDS_Shape& theShape,const Standard_Real theDeflection,const Standard_Real theAngle,BRepMesh_PDiscretRoot& theAlgo) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif