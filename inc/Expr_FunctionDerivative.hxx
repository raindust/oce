// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Expr_FunctionDerivative_HeaderFile
#define _Expr_FunctionDerivative_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Expr_FunctionDerivative.hxx>

#include <Handle_Expr_GeneralFunction.hxx>
#include <Handle_Expr_GeneralExpression.hxx>
#include <Handle_Expr_NamedUnknown.hxx>
#include <Standard_Integer.hxx>
#include <Expr_GeneralFunction.hxx>
#include <Standard_Real.hxx>
#include <Standard_Boolean.hxx>
class Expr_GeneralFunction;
class Expr_GeneralExpression;
class Expr_NamedUnknown;
class Standard_OutOfRange;
class Standard_DimensionMismatch;
class Standard_NumericError;
class Expr_NotEvaluable;
class Expr_NamedFunction;
class Expr_Array1OfNamedUnknown;
class TColStd_Array1OfReal;
class TCollection_AsciiString;



class Expr_FunctionDerivative : public Expr_GeneralFunction
{

public:

  
  //! Creates a FunctionDerivative of degree <deg> relative
  //! to the <withX> variable.
  //! Raises OutOfRange if <deg> lower or equal to zero.
  Standard_EXPORT Expr_FunctionDerivative(const Handle(Expr_GeneralFunction)& func, const Handle(Expr_NamedUnknown)& withX, const Standard_Integer deg);
  
  //! Returns the number of variables of <me>.
  Standard_EXPORT   Standard_Integer NbOfVariables()  const;
  
  //! Returns the variable denoted by <index> in <me>.
  //! Raises OutOfRange if <index> greater than
  //! NbOfVariables of <me>.
  Standard_EXPORT   Handle(Expr_NamedUnknown) Variable (const Standard_Integer index)  const;
  
  //! Computes the value of <me> with the given variables.
  //! Raises DimensionMismatch if Length(vars) is different from
  //! Length(values).
  Standard_EXPORT   Standard_Real Evaluate (const Expr_Array1OfNamedUnknown& vars, const TColStd_Array1OfReal& values)  const;
  
  //! Returns a copy of <me> with the same form.
  Standard_EXPORT   Handle(Expr_GeneralFunction) Copy()  const;
  
  //! Returns Derivative of <me> for variable <var>.
  Standard_EXPORT   Handle(Expr_GeneralFunction) Derivative (const Handle(Expr_NamedUnknown)& var)  const;
  
  //! Returns Derivative of <me> for variable <var> with
  //! degree <deg>.
  Standard_EXPORT   Handle(Expr_GeneralFunction) Derivative (const Handle(Expr_NamedUnknown)& var, const Standard_Integer deg)  const;
  
  //! Tests if <me> and <func> are similar functions (same
  //! name and same used expression).
  Standard_EXPORT   Standard_Boolean IsIdentical (const Handle(Expr_GeneralFunction)& func)  const;
  
  //! Tests if <me> is linear on variable on range <index>
  Standard_EXPORT   Standard_Boolean IsLinearOnVariable (const Standard_Integer index)  const;
  
  //! Returns the function of which <me> is the derivative.
  Standard_EXPORT   Handle(Expr_GeneralFunction) Function()  const;
  
  //! Returns the degree of derivation of <me>.
  Standard_EXPORT   Standard_Integer Degree()  const;
  
  //! Returns the derivation variable of <me>.
  Standard_EXPORT   Handle(Expr_NamedUnknown) DerivVariable()  const;
  
  Standard_EXPORT   TCollection_AsciiString GetStringName()  const;
  
  Standard_EXPORT   Handle(Expr_GeneralExpression) Expression()  const;
  
  Standard_EXPORT   void UpdateExpression() ;


friend class Expr_NamedFunction;


  DEFINE_STANDARD_RTTI(Expr_FunctionDerivative)

protected:




private: 


  Handle(Expr_GeneralFunction) myFunction;
  Handle(Expr_GeneralExpression) myExp;
  Handle(Expr_NamedUnknown) myDerivate;
  Standard_Integer myDegree;


};







#endif // _Expr_FunctionDerivative_HeaderFile
