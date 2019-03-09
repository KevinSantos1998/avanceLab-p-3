#include "pch.h"
#include "Multiplication.h"
#include <iostream>
#include "Number.h"


Multiplication::Multiplication(Expression *e,Expression *i):ArithmeticExpression(e,i)
{

}


int Multiplication::getValue()
{
	return e->getValue()*i->getValue();
}
string Multiplication::stringify() {
	

	
	return  "(" + this->e->stringify() + "*" + this->i->stringify() + ")";
}