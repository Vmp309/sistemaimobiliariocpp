#pragma once
#include "Imovel.h"
class Casa : public Imovel
{
	//Sobrecarga de operador <<
	friend ofstream& operator<<(ofstream&, const Casa &cs);

	//Sobrecarga de operador >>
	friend istream& operator>>(istream& is, const Casa& cs);

private:
	int numeroPavimentos;
	int numeroQuartos;
	double areaTerreno;
	double areaConstruida;

public:
	//Construtores
	Casa();

	//Funções set para atributos de forma individual
	void setCasa(); // A função setCasa seta APENAS os atributos de Casa de uma só vez

	void setnumPav(int num_pav);

	void setnumQuartos(int num_quartos);

	void setAreaTerreno(double area_terreno);

	void setAreaConstruida(double area_construida);



	//Funções get para recuperar informações de forma individual e um para recuperar tudo
	int getnumPav();

	int getnumQuartos();

	double getAreaTerreno();

	double getAreaConstruida();

	void toStringCasa();

	string ToSTRING1();
};
