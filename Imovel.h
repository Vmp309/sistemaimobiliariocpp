#pragma once
#include <string>
#include <sstream>
#include "Endereco.h"

using namespace std;

class Imovel : public Endereco
{
protected:
	int tipoImovel; // 1--> Casa; 2--> Apartamento; 3--> Terrreno;
	int tipoOferta; // 1--> Venda; 2--> Aluguel
	string tituloAnuncio;
	double preco;
	Endereco endereco;


public:
	//Construtores
	Imovel();
	Imovel(int tipoImovel);

	//Funções para setar variaveis e uma para setar todos de uma só vez
	void setTipoImovel(int tipo_imovel);

	void setTipoOferta(int tipo_DeOferta);

	void setTituloAnuncio(string titulo_anuncio);

	void setPreco(double PRECO);

	//void setEndereco(Endereco ender);


	//Funções get para recuperar informações dos objetos de forma individual e um para recuperar tudo de uma só vez
	int getTipoImovel();

	int getTipoOferta();

	string getTituloAnuncio();

	double getPreco();

	Endereco getEndereco();

	void toStringImovel();
	/* Sobre cadastroImovel: Setar as variáveis do Imóvel, cuidado,pois ainda é necessário setar as variáveis específicas de cada tipo de imóvel*/


};
