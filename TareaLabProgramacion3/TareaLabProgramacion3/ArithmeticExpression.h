#pragma once
#include "Expression.h"
#include <string>

class ArithmeticExpression:public Expression
{
public:
	
 	ArithmeticExpression();
	ArithmeticExpression(Expression * , Expression *);

	Expression *e;
	Expression *i;

	int getValue() override;

	string stringify();
};

