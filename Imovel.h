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

	//Fun��es para setar variaveis e uma para setar todos de uma s� vez
	void setTipoImovel(int tipo_imovel);

	void setTipoOferta(int tipo_DeOferta);

	void setTituloAnuncio(string titulo_anuncio);

	void setPreco(double PRECO);

	//void setEndereco(Endereco ender);


	//Fun��es get para recuperar informa��es dos objetos de forma individual e um para recuperar tudo de uma s� vez
	int getTipoImovel();

	int getTipoOferta();

	string getTituloAnuncio();

	double getPreco();

	Endereco getEndereco();

	void toStringImovel();
	/* Sobre cadastroImovel: Setar as vari�veis do Im�vel, cuidado,pois ainda � necess�rio setar as vari�veis espec�ficas de cada tipo de im�vel*/


};
