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

	//Fun��es set para atributos de forma individual
	void setCasa(); // A fun��o setCasa seta APENAS os atributos de Casa de uma s� vez

	void setnumPav(int num_pav);

	void setnumQuartos(int num_quartos);

	void setAreaTerreno(double area_terreno);

	void setAreaConstruida(double area_construida);



	//Fun��es get para recuperar informa��es de forma individual e um para recuperar tudo
	int getnumPav();

	int getnumQuartos();

	double getAreaTerreno();

	double getAreaConstruida();

	void toStringCasa();

	string ToSTRING1();
};
