// TareaLabProgramacion3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "Number.h"
#include "Addition.h"
#include "Division.h"
#include "Multiplication.h"

using namespace std;

string split(string entrada, string operador)
{
	size_t pos = entrada.find(operador);
	string Izquierda = entrada.substr(0, pos);
	string Derecha = entrada.substr(pos + 1, entrada.length());
	//cout << Izquierda;
	//cout << "\n" << Derecha;
	return Derecha;
		
}

string trim(string s)
{
	string offspring;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != ' ')
		{
			offspring += s[i];
		}
	}

	return offspring;

}

int main()
{
	
	//Number x(1);
	//Number y(2);
	//Number z(3);
	//Multiplication f(&y, &z);

	//Addition g(&x, &f);

	//cout << g.getValue() << endl;

	//cout << split("1+2-3", "-");

	//std::string s = "1-2+3";
	//std::string delimiter = "+";

	//size_t pos = 0;
	//std::string token;
	//while ((pos = s.find(delimiter)) != std::string::npos) {
	//	token = s.substr(0, pos);
	//	std::cout << token << std::endl;
	//	s.erase(0, pos + delimiter.length());
	//}
	//string token2 = s;
	//cout << token2;



	/*string entrada = "1+2-3+4+5+6*7-8-7-6";
	string resultado = split(entrada, "+");
	cout << resultado;*/
	/*
	cout << "Ingrese la expression : ";
	string a;
	 
	getline(cin, a);
	
	
	Expression * prueba = Expression::fromString(trim(a));
	cout << prueba->getValue();
	//Expression e = Expression.fromString("ewrweq");



	*/
	
	Expression as;
	cout << "*** Calculadora Extrema ***"<<endl;
	
	

		as.motomoto();


		
	



}





