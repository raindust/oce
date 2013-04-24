// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESGraph_NominalSize_HeaderFile
#define _IGESGraph_NominalSize_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESGraph_NominalSize_HeaderFile
#include <Handle_IGESGraph_NominalSize.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TCollection_HAsciiString;


//! defines IGESNominalSize, Type <406> Form <13> <br>
//!          in package IGESGraph <br>
//! <br>
//!          Specifies a value, a name, and optionally a <br>
//!          reference to an engineering standard <br>
class IGESGraph_NominalSize : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESGraph_NominalSize();
  //! This method is used to set the fields of the class <br>
//!           NominalSize <br>
//!      - nbProps           : Number of property values (2 or 3) <br>
//!      - aNominalSizeValue : NominalSize Value <br>
//!      - aNominalSizeName  : NominalSize Name <br>
//!      - aStandardName     : Name of relevant engineering standard <br>
  Standard_EXPORT     void Init(const Standard_Integer nbProps,const Standard_Real aNominalSizeValue,const Handle(TCollection_HAsciiString)& aNominalSizeName,const Handle(TCollection_HAsciiString)& aStandardName) ;
  //! returns the number of property values in <me> <br>
  Standard_EXPORT     Standard_Integer NbPropertyValues() const;
  //! returns the value of <me> <br>
  Standard_EXPORT     Standard_Real NominalSizeValue() const;
  //! returns the name of <me> <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString NominalSizeName() const;
  //! returns True if an engineering Standard is defined for <me> <br>
//! else, returns False <br>
  Standard_EXPORT     Standard_Boolean HasStandardName() const;
  //! returns the name of the relevant engineering standard of <me> <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString StandardName() const;




  DEFINE_STANDARD_RTTI(IGESGraph_NominalSize)

protected:




private: 


Standard_Integer theNbPropertyValues;
Standard_Real theNominalSizeValue;
Handle_TCollection_HAsciiString theNominalSizeName;
Handle_TCollection_HAsciiString theStandardName;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
