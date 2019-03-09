#include "pch.h"
#include "Addition.h"
#include <iostream>


Addition::Addition(Expression *e,Expression *i):ArithmeticExpression(e,i)

{


}

int Addition ::getValue()
{
	return e->getValue() + i->getValue();

}

string Addition::stringify() {
    

	
	
	return  this->e->stringify()+"+"+this->i->stringify();

	
}

