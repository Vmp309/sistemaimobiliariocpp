#pragma once
#include <fstream>
#include <iostream>
#include <string>

using namespace std;


class Endereco
{
private:
	int numero;
	string rua;
	string bairro;
	string cep;
	string Cidade;

public:
	// Construtores
	Endereco();
	Endereco(int num, string street, string bairr, string CEP, string city);


	//Funções para setar individualmente cada atributo
	void setEndereco();// A função setEndereco seta todos os atributos de endereço de uma vez só

	void setNumero(int num);

	void setRua(string street);

	void setBairro(string bairr);

	void setCep(string CEP);

	void setCidade(string city);


	//Funções get para recuperar o atributos individualmente e um para recuperar todo
	int getNumero();

	string getRua();

	string getBairro();

	string getCep();

	string getCidade();

	//void getEndereco2();

	void toStringEndereco();
};
