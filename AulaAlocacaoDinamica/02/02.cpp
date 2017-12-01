// 02.cpp : Defines the entry point for the console application.
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

void preencher_array(int array[], int tamanho)
{
	for (int indice = 0; indice < tamanho; indice++)
		cin >> array[indice];
}

void criar_array(int tamanho)
{
	int *array = new int[tamanho];

	preencher_array(array,tamanho);
}

int main()
{
	criar_array(4);

	cout << "Fim";

	cin.get();
	cin.get();
    return 0;
}

