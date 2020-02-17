#include "Imovel.h"
// Construtores
Imovel::Imovel() {};
Imovel::Imovel(int tipo_imovel) {};


//Funções set para cadastro e edição

void Imovel::setTipoImovel(int tipo_imovel) {
	tipoImovel = tipo_imovel;
};

void Imovel::setTipoOferta(int tipo_DeOferta) {
	tipoOferta = tipo_DeOferta;
};

void Imovel::setTituloAnuncio(string titulo_anuncio) {
	tituloAnuncio = titulo_anuncio;
};

void Imovel::setPreco(double PRECO) {
	preco = PRECO;
}

/*void Imovel::setEndereco(Endereco ender) {
	endereco = ender;
};*/


//Funções get para operações do menu e de listagem
int Imovel::getTipoImovel() {
	return tipoImovel;
}

int Imovel::getTipoOferta() {
	return tipoOferta;
}

string Imovel::getTituloAnuncio() {
	return tituloAnuncio;
}

double Imovel::getPreco() {
	return preco;
}

Endereco Imovel::getEndereco() {
	return endereco;
}

void Imovel::toStringImovel() {
	switch (tipoImovel) {
	case 1:
		cout << "Casa ";
		break;
	case 2:
		cout << "Apartamento ";
		break;

	case 3:
		cout << "Terreno ";
		break;

	default:
		break;
	}

	switch (tipoOferta)
	{
	case 1:
		cout << "a venda" << endl;
		break;

	case 2:
		cout << "para alugar" << endl;
		break;
	default:
		break;
	}

	cout << "Preco: $" << preco << endl;

};
