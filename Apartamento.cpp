#include "Apartamento.h"

//Construtor(es)
Apartamento::Apartamento() {
	setTipoImovel(2); // Ver Imovel.h para ver especificações do parâmetro
};


//Funções set
void Apartamento::setApartamento() {
	cout << "Digite o numero de quartos: "; cin >> numeroQuartos;
	cout << "Digite o numero de vagas na garagem: "; cin >> numeroVagas;
	cout << "Digite a area do apartamento: "; cin >> area;
	cout << "Digite o valor do condominio: "; cin >> valorCondominio;
	cout << "Digite a posicao do apartamento com relacao ao sol: " << endl; cin >> posicao;
}

void Apartamento::setnumQuartos(int num_quartos) {
	numeroQuartos = num_quartos;
}

void Apartamento::setnumVagas(int num_vagas) {
	numeroVagas = num_vagas;
}

void Apartamento::setArea(double Area) {
	area = Area;
}

void Apartamento::setValorCondominio(double valor_condominio) {
	valorCondominio = valor_condominio;
}

void Apartamento::setPosicao(string pos) {
	posicao = pos;
}


// Funções get
int Apartamento::getnumQuartos() {
	return numeroQuartos;
}

int Apartamento::getnumVagas() {
	return numeroVagas;
}

double Apartamento::getArea() {
	return area;
}

double Apartamento::getValorCondominio() {
	return valorCondominio;
}

string Apartamento::getPosicao() {
	return posicao;
}

void Apartamento::toStringApartamento() {
	toStringImovel();
	cout << "Numero de quartos: " << numeroQuartos << endl;
	cout << "Numero de vagas na garagem: " << numeroVagas << endl;
	cout << "Area: " << area << endl;
	cout << "Valor do Condominio: " << valorCondominio << endl;
	cout << "Posicao em relacao ao sol: " << posicao << endl;
	toStringEndereco();
}

string Apartamento::ToSTRING2() {
	stringstream apt;

	apt << getTipoImovel() << endl << getTituloAnuncio() << endl << getnumQuartos() << endl << getnumVagas() << endl
		<< getArea() << endl << getValorCondominio() << endl << getPosicao() << endl << getTipoOferta() << endl
		<< getPreco() << endl << getRua() << endl << getNumero() << endl << getBairro() << endl << getCep() << endl
		<< getCidade() << endl;

	return apt.str();
}


ofstream& operator<<(ofstream& output, const Apartamento& apt) {
	output << apt;

	return output;
}
