// 01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;

template<typename T>
void escrever(T algo)
{
	cout << algo << endl;
}

//void receber_valores(int valor_um, bool valor_dois)
//{
//	int *ponteiro_int = valor_um;
//	bool *ponteiro_bool;
//
//	//*ponteiro_int = valor_um;
//	*ponteiro_bool = valor_dois;
//
//	escrever("Valor inteiro: ");
//	escrever(*ponteiro_int);
//	escrever(&ponteiro_int);
//	escrever("Valor booleano: ");
//	escrever(*ponteiro_bool);
//	escrever(&ponteiro_bool);
//}

int main()
{
	int valor_um = 5;
	bool valor_dois = true;

	int *ponteiro_int;
	bool *ponteiro_bool;

	ponteiro_int = &valor_um;
	ponteiro_bool = &valor_dois;

	escrever("Valor inteiro: ");
	escrever(*ponteiro_int);
	escrever(&ponteiro_int);
	escrever("Valor booleano: ");
	escrever(*ponteiro_bool);
	escrever(&ponteiro_bool);

	cin.get();

	return 0;
}

