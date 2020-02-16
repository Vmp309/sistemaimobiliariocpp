#pragma once
#include "Imovel.h"
class Terreno : public Imovel
{

	//Sobrecarga de operador <<
	friend ofstream& operator<<(std::ofstream&, const Terreno& ter);

	//Sobrecarga de operador >>
	friend istream& operator>>(istream& is, const Terreno& ter);

private:
	double area;
	string descricaoTerreno;

public:
	//Construtor
	Terreno();


	//Funções set para cada atributo de forma individual e um para os dois
	void setTerreno();

	void setArea(double Area);

	void setDescricaoTerreno(string desc_terreno);


	//Funções get para cada atributo de forma individual
	double getArea();

	string getDescricaoTerreno();

	void toStringTerrreno();

	string ToSTRING3();
};
