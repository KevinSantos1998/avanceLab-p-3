#include "pch.h"
#include "Substraction.h"
#include <iostream>
#include "Number.h"

Substraction::Substraction(Expression *e, Expression *i):ArithmeticExpression(e,i)
{

}

int Substraction::getValue()
{
	return e->getValue() - i->getValue();
}
string Substraction::stringify() {
	

	

	return  this->e->stringify() + "-" + this->i->stringify();
}