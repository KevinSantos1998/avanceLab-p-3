#include "pch.h"
#include "Division.h"
#include <iostream>
#include "Number.h"


Division::Division(Expression *e,Expression *i):ArithmeticExpression(e,i)
{

}


int Division::getValue()
{
	return e->getValue() / i->getValue();
}
string Division::stringify() {
	

	

	return  "(" + this->e->stringify() + "/" + this->i->stringify() + ")";
}
