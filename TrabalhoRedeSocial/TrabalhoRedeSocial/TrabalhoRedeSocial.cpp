// TrabalhoRedeSocial.cpp :Defines the entry point for Dionmax the console application.
//

#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <iostream>
#include <istream>

#include "SuporteEscrita.h"
#include "Modelo.h"
#include "Criacao_usuario.h"
#include "Autenticacao_usuario.h"

using namespace std;

void encerrar_programa(bool &programa_executando)
{
	encerramento_escrito();
	programa_executando = false;

}

void menu(Usuarios *usuario, int &quantidade_usuarios)
{
	bool programa_executando = true;
	char login_user[100];

	apresentacao_escrito();
	menu_opcoes();

	quebra_de_linha();

	do
	{
		menu_login_criar();
		switch (selecionar_escolha(3))
		{
		case 1:
			solicitar_nome_login_escrito();
			cin.getline(login_user, 100);
			//if (buscar_usuario_login(usuario, quantidade_usuarios, login_user) != NAO_ACHADO)
			
				break;
		case 2:
			criar_novo_usuario(usuario, quantidade_usuarios);
			break;
		case 3:
			encerrar_programa(programa_executando);
		default:
			break;
		}
	} while (programa_executando);
}

void teste()
{
	char nome1[100] = "aaaaa",
		nome2[100] = "bbbbb";

	cout <<size(nome2);

	bool a = true;

	for (int i = 100; i > -1 && a == true; i--)
	{
		if (nome1[i] != nome2[i])
			a = false;

		cout << i << endl;
	}

	if (!a)
		cout << "sale";
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	Usuarios *usuario;

	int quantidade_usuarios = 0;

	usuario = new Usuarios[quantidade_usuarios];

	menu(usuario, quantidade_usuarios);

	//teste();

	cin.get();
	return 0;
}
