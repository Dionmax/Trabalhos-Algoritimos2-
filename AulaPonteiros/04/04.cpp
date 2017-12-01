// 04.cpp : Defines the entry point for the console application.
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

void somador(int *numero, int incremento)
{
	*numero += incremento;
}

int main()
{
	int valor = 5;

	int *ponteiro_inteiro;

	ponteiro_inteiro = &valor;

	somador(ponteiro_inteiro, 2);

	escrever(valor);

	cin.get();
    return 0;
}

