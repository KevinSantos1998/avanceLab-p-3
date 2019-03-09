#pragma once
#include "ArithmeticExpression.h"
#include "Number.h"
#include "Expression.h"
class Addition:public ArithmeticExpression
{

	
public:
	
	Addition(Expression *,Expression *);
	int getValue() override;
    string stringify()override;
};

