#include "Terreno.h"

//Construtores
Terreno::Terreno() {
	setTipoImovel(3); // Ver Imovel.h para ver especificações do parâmetro
};


//Funções set
void Terreno::setTerreno() {
	cout << "Digite a area do terreno: "; cin >> area;
	cout << "De a descricao detalhada do terreno: " << endl; cin >> descricaoTerreno;
}
void Terreno::setArea(double Area) {
	area = Area;
}

void Terreno::setDescricaoTerreno(string desc_terreno) {
	descricaoTerreno = desc_terreno;
}


//Funções get
double Terreno::getArea() {
	return area;
}

string Terreno::getDescricaoTerreno() {
	return descricaoTerreno;
}

void Terreno::toStringTerreno() {
	toStringImovel();
	cout << "Area do terreno: " << area << endl;
	cout << "Descricao do terreno: " << descricaoTerreno << endl;
	toStringEndereco();
}

string Terreno::ToSTRING3() {
	stringstream terr;

	terr << getTipoImovel() << endl << getTituloAnuncio() << endl << getArea() << endl << getDescricaoTerreno() << endl
		<< getPreco() << endl << getRua() << getNumero() << endl << getBairro() << endl << getCep() << endl
		<< getCidade() << endl;

	return terr.str();
}


ofstream& operator<<(ofstream& output, const Terreno& ter) {
	output << ter;

	return output;
}
