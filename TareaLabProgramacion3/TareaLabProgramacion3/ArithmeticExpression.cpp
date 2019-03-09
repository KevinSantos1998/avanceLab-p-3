#include "pch.h"
#include "ArithmeticExpression.h"
#include <iostream>
#include "Addition.h"

int ArithmeticExpression::getValue()
{
	return 0;
}

ArithmeticExpression::ArithmeticExpression(){

}

ArithmeticExpression::ArithmeticExpression(Expression *E, Expression *I)
{
	this->e = E;
	this->i = I;

}


string ArithmeticExpression::stringify() {

	Addition x(e, i);

	
	return x.stringify();


}

