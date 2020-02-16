
#include "Endereco.h"
// Construtores
Endereco::Endereco() {};

Endereco::Endereco(int num, string street, string bairr, string CEP, string city) {
	numero = num;
	rua = street;
	bairro = bairr;
	cep = CEP;
	Cidade = city;
}

// Funções set
void Endereco::setEndereco() {
	cout << "Digite o nome da rua: " << endl; cin >> rua;
	cout << "Digite o numero do imovel: " << endl; cin >> numero;
	cout << "Digite o nome do bairro: " << endl; cin >> bairro;
	cout << "Digite o CEP do local: " << endl;  cin >> cep;
	cout << "Digite o nome da cidade: " << endl; cin >> Cidade;
}

void Endereco::setNumero(int num) {
	numero = num;
}

void Endereco::setRua(string street) {
	rua = street;
}

void Endereco::setBairro(string bairr) {
	bairro = bairr;
}

void Endereco::setCep(string CEP) {
	cep = CEP;
}

void Endereco::setCidade(string city) {
	Cidade = city;
}


//Funções get
int Endereco::getNumero() {
	return numero;
}

string Endereco::getRua() {
	return rua;
}

string Endereco::getBairro() {
	return bairro;
}

string Endereco::getCep() {
	return cep;
}

string Endereco::getCidade() {
	return Cidade;
}

/*void Endereco::getEndereco2() {
	cout << rua << "\n" << numero << "\n" << bairro << "\n" << cep << "\n" << cidade << endl;
}*/

void Endereco::toStringEndereco() {
	cout << "Endereco: " << rua << ", " << numero << ", " << bairro << "; " << cep << "; " << Cidade << endl;
}
