#pragma once

#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <iostream>

#include "Modelo.h"

const int IDADE_MINIMA = 18;

using namespace std;

bool validar_idade(int idade)
{
	bool verificador = false;

	if (idade >= IDADE_MINIMA)
		verificador = true;

	return verificador;
}

int entrada_idade()
{
	int idade;

	do
	{
		solicitar_idade_escrito();
		cin >> idade;

		if (!validar_idade(idade))
			mensagem_menor_de_idade();

	} while (!validar_idade(idade));

	return idade;
}

void entrada_senha(char *senha_nova)
{
	char senha[100];
	char confirmacao[100];

	do
	{
		solicitar_senha_escrito();
		cin.getline(senha, 100);

		confirmacao_senha_escrito();
		cin.getline(confirmacao, 100);

		if (!verificar_igualdade(senha, confirmacao))
			mensagem_senhas_diferentes_escrito();

	} while (!verificar_igualdade(senha, confirmacao));

	copiar_array(senha, senha_nova, 100);
}

void pedir_infomacoes_usuarios(Usuarios *usuario, int numero_usuario)
{
	solicitar_nome_login_escrito();
	cin.getline(usuario[numero_usuario].nome_login, 100);

	quebra_de_linha();

	cout << usuario[numero_usuario].nome_login << endl;

	//entrada_senha(usuario[numero_usuario].senha);

	quebra_de_linha();

	solicitar_nome_exibicao_escrito();
	//cin.getline(usuario[numero_usuario].nome_completo, 100);

	quebra_de_linha();

	///usuario[numero_usuario].idade = entrada_idade();

	solicitar_sexo_escrito();
	//cin >> usuario[numero_usuario].genero;
}

void criar_novo_usuario(Usuarios *usuario, int &quantidade_usuarios)
{
	Usuarios *array_aux;

	array_aux = new Usuarios[quantidade_usuarios];

	copiar_array(usuario, array_aux, quantidade_usuarios);

	quantidade_usuarios += 1;

	usuario = new Usuarios[quantidade_usuarios];

	copiar_array(array_aux, usuario, quantidade_usuarios - 1);

	pedir_infomacoes_usuarios(usuario, quantidade_usuarios - 1);
}

