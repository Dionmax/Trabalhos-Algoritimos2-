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

template<typename T>
struct Array
{
	T *objeto;

	int tamanho;
};

int main()
{
	Array <string>Nomes;


	cin.get();
	cin.get();
    return 0;
}

