#pragma once
#include "Imovel.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"
#include <bits/stdc++.h>
#include <string.h>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>


///A função de ler arquivo é ler as strings de "listadeImoveis.txt" e por em vetores de string, separando em lista de imóveis, lista de casas,
///apartamentos e terreno, estas strings , por sua vez, serão transformadas em valores e setadas para os atributos dos objetos

vector <std::string> listaDeImoveis;
vector <std::string> listaDeCasas;
vector <std::string> listaDeApartamentos;
vector <std::string> listaDeTerrenos;
vector <Casa> listaObjCasas;
vector <Apartamento> listaObjApartamentos;
vector <Terreno> listaObjTerrenos;

void lerArquivo() {

	string tdi_str, str_tituloAnuncio, str_numero_pav, str_num_quartos, str_areaDo_terreno, str_area_construida, str_tipo_oferta,
		str_preco, str_rua, str_numeroDaCasa, str_bairro, str_cep, str_cidade, str_num_vagas, str_areaApartamento, str_valorCondominio,
		str_posicao, str_descricao_terreno;

	int tdi, int_num_pav, int_num_quartos, int_tipo_oferta, int_numeroDaCasa, int_num_vagas;

	tdi = int_num_pav = int_num_quartos = int_tipo_oferta = int_numeroDaCasa = 0;


	double doub_area_terreno, doub_area_construida, doub_preco, doub_valorCondominio, doub_areaApartamento;
	char* pointer;

	std::ifstream arquivo("listaDeImoveis.txt", ios::in);

	while (!arquivo.eof()) {

		getline(arquivo, tdi_str);
		istringstream(tdi_str) >> tdi;

		if (tdi == 1) {

			Casa cs = Casa();
			getline(arquivo, str_tituloAnuncio);
			listaDeImoveis.push_back(str_tituloAnuncio);
			listaDeCasas.push_back(str_tituloAnuncio);
			cs.setTituloAnuncio(str_tituloAnuncio);


			getline(arquivo, str_numero_pav);
			istringstream(str_numero_pav) >> int_num_pav;
			cs.setnumPav(int_num_pav);


			getline(arquivo, str_num_quartos);
			listaDeImoveis.push_back(str_num_quartos);
			listaDeCasas.push_back(str_num_quartos);
			istringstream(str_num_quartos) >> int_num_quartos;
			cs.setnumQuartos(int_num_quartos);


			getline(arquivo, str_areaDo_terreno);
			listaDeImoveis.push_back(str_areaDo_terreno);
			listaDeCasas.push_back(str_areaDo_terreno);
			doub_area_terreno = strtod(str_areaDo_terreno.c_str(), &pointer);
			cs.setAreaTerreno(doub_area_terreno);


			getline(arquivo, str_area_construida);
			listaDeImoveis.push_back(str_area_construida);
			listaDeCasas.push_back(str_area_construida);
			doub_area_construida = strtod(str_area_construida.c_str(), &pointer);
			cs.setAreaConstruida(doub_area_construida);


			getline(arquivo, str_tipo_oferta);
			listaDeImoveis.push_back(str_tipo_oferta);
			listaDeCasas.push_back(str_tipo_oferta);
			istringstream(str_tipo_oferta) >> int_tipo_oferta;
			cs.setTipoOferta(int_tipo_oferta);


			getline(arquivo, str_preco);
			listaDeImoveis.push_back(str_preco);
			listaDeCasas.push_back(str_preco);
			doub_preco = strtod(str_preco.c_str(), &pointer);
			cs.setPreco(doub_preco);


			getline(arquivo, str_rua);
			listaDeImoveis.push_back(str_rua);
			listaDeCasas.push_back(str_rua);
			cs.setRua(str_rua);

			getline(arquivo, str_numeroDaCasa);
			listaDeImoveis.push_back(str_numeroDaCasa);
			listaDeCasas.push_back(str_numeroDaCasa);
			istringstream(str_numeroDaCasa) >> int_numeroDaCasa;
			cs.setNumero(int_numeroDaCasa);


			getline(arquivo, str_bairro);
			listaDeImoveis.push_back(str_bairro);
			listaDeCasas.push_back(str_bairro);
			cs.setBairro(str_bairro);


			getline(arquivo, str_cep);
			listaDeImoveis.push_back(str_cep);
			listaDeCasas.push_back(str_cep);
			cs.setCep(str_cep);


			getline(arquivo, str_cidade);
			listaDeImoveis.push_back(str_cidade);
			listaDeCasas.push_back(str_cidade);
			cs.setCidade(str_cidade);

			listaObjCasas.push_back(cs);
			//cs.toStringCasa();

		}

		else if (tdi == 2) {
			Apartamento apt = Apartamento();

			getline(arquivo, str_tituloAnuncio);
			listaDeImoveis.push_back(str_tituloAnuncio);
			listaDeApartamentos.push_back(str_tituloAnuncio);
			apt.setTituloAnuncio(str_tituloAnuncio);


			getline(arquivo, str_num_quartos);
			listaDeImoveis.push_back(str_num_quartos);
			listaDeApartamentos.push_back(str_num_quartos);
			istringstream(str_num_quartos) >> int_num_quartos;
			apt.setnumQuartos(int_num_quartos);


			getline(arquivo, str_num_vagas);
			listaDeImoveis.push_back(str_num_vagas);
			listaDeApartamentos.push_back(str_num_vagas);
			istringstream(str_num_quartos) >> int_num_vagas;
			apt.setnumVagas(int_num_vagas);


			getline(arquivo, str_areaApartamento);
			listaDeImoveis.push_back(str_areaApartamento);
			listaDeApartamentos.push_back(str_areaApartamento);
			doub_areaApartamento = strtod(str_areaApartamento.c_str(), &pointer);
			apt.setArea(doub_areaApartamento);


			getline(arquivo, str_valorCondominio);
			listaDeImoveis.push_back(str_valorCondominio);
			listaDeApartamentos.push_back(str_valorCondominio);
			doub_valorCondominio = strtod(str_valorCondominio.c_str(), &pointer);
			apt.setValorCondominio(doub_valorCondominio);


			getline(arquivo, str_posicao);
			listaDeImoveis.push_back(str_posicao);
			listaDeApartamentos.push_back(str_posicao);
			apt.setPosicao(str_posicao);


			getline(arquivo, str_tipo_oferta);
			listaDeImoveis.push_back(str_tipo_oferta);
			listaDeApartamentos.push_back(str_tipo_oferta);
			istringstream(str_tipo_oferta) >> int_tipo_oferta;
			apt.setTipoOferta(int_tipo_oferta);


			getline(arquivo, str_preco);
			listaDeImoveis.push_back(str_preco);
			listaDeApartamentos.push_back(str_preco);
			doub_preco = strtod(str_preco.c_str(), &pointer);
			apt.setPreco(doub_preco);


			getline(arquivo, str_rua);
			listaDeImoveis.push_back(str_rua);
			listaDeApartamentos.push_back(str_rua);
			apt.setRua(str_rua);


			getline(arquivo, str_numeroDaCasa);
			listaDeImoveis.push_back(str_numeroDaCasa);
			listaDeApartamentos.push_back(str_numeroDaCasa);
			istringstream(str_numeroDaCasa) >> int_numeroDaCasa;
			apt.setNumero(int_numeroDaCasa);


			getline(arquivo, str_bairro);
			listaDeImoveis.push_back(str_bairro);
			listaDeApartamentos.push_back(str_bairro);
			apt.setBairro(str_bairro);


			getline(arquivo, str_cep);
			listaDeImoveis.push_back(str_cep);
			listaDeApartamentos.push_back(str_cep);
			apt.setCep(str_cep);

			getline(arquivo, str_cidade);
			listaDeImoveis.push_back(str_cidade);
			listaDeApartamentos.push_back(str_cidade);
			apt.setCidade(str_cidade);

			listaObjApartamentos.push_back(apt);
			//apt.toStringApartamento();
		}

		else if (tdi == 3) {

		Terreno te = Terreno();

			getline(arquivo, str_tituloAnuncio);
			listaDeImoveis.push_back(str_tituloAnuncio);
			listaDeTerrenos.push_back(str_tituloAnuncio);
			te.setTituloAnuncio(str_tituloAnuncio);


			getline(arquivo, str_areaDo_terreno);
			listaDeImoveis.push_back(str_areaDo_terreno);
			listaDeTerrenos.push_back(str_areaDo_terreno);
			doub_area_terreno = strtod(str_areaDo_terreno.c_str(), &pointer);
			te.setArea(doub_area_terreno);


			getline(arquivo, str_descricao_terreno);
			listaDeImoveis.push_back(str_descricao_terreno);
			listaDeTerrenos.push_back(str_descricao_terreno);
			te.setDescricaoTerreno(str_descricao_terreno);


			getline(arquivo, str_tipo_oferta);
			listaDeImoveis.push_back(str_tipo_oferta);
			listaDeTerrenos.push_back(str_tipo_oferta);
			istringstream(str_tipo_oferta) >> int_tipo_oferta;
			te.setTipoOferta(int_tipo_oferta);

			getline(arquivo, str_preco);
			listaDeImoveis.push_back(str_preco);
			listaDeTerrenos.push_back(str_preco);
			doub_preco = strtod(str_preco.c_str(), &pointer);
			te.setPreco(doub_preco);

			getline(arquivo, str_rua);
			listaDeImoveis.push_back(str_rua);
			listaDeTerrenos.push_back(str_rua);
			te.setRua(str_rua);

			getline(arquivo, str_numeroDaCasa);
			listaDeImoveis.push_back(str_numeroDaCasa);
			listaDeTerrenos.push_back(str_numeroDaCasa);
			istringstream(str_numeroDaCasa) >> int_numeroDaCasa;
			te.setNumero(int_numeroDaCasa);

			getline(arquivo, str_bairro);
			listaDeImoveis.push_back(str_bairro);
			listaDeTerrenos.push_back(str_bairro);
			te.setBairro(str_bairro);

			getline(arquivo, str_cep);
			listaDeImoveis.push_back(str_cep);
			listaDeTerrenos.push_back(str_cep);
			te.setCep(str_cep);

			getline(arquivo, str_cidade);
			listaDeImoveis.push_back(str_cidade);
			listaDeTerrenos.push_back(str_cidade);
			te.setCidade(str_cidade);
			listaObjTerrenos.push_back(te);

			//te.toStringTerrreno();
		}
	}
}

void ListarTodosImoveis() {
	string tdi_str, str_tituloAnuncio, str_numero_pav, str_num_quartos, str_areaDo_terreno, str_area_construida, str_tipo_oferta,
		str_preco, str_rua, str_numeroDaCasa, str_bairro, str_cep, str_cidade, str_num_vagas, str_areaApartamento, str_valorCondominio,
		str_posicao, str_descricao_terreno;

	int tdi, int_num_pav, int_num_quartos, int_tipo_oferta, int_numeroDaCasa, int_num_vagas;

	tdi = int_num_pav = int_num_quartos = int_tipo_oferta = int_numeroDaCasa = 0;


	double doub_area_terreno, doub_area_construida, doub_preco, doub_valorCondominio, doub_areaApartamento;
	char* pointer;

	std::ifstream arquivo("listaDeImoveis.txt", ios::in);

	while (!arquivo.eof()) {

		getline(arquivo, tdi_str);
		istringstream(tdi_str) >> tdi;

		if (tdi == 1) {

			Casa cs = Casa();
			getline(arquivo, str_tituloAnuncio);
			cs.setTituloAnuncio(str_tituloAnuncio);


			getline(arquivo, str_numero_pav);
			istringstream(str_numero_pav) >> int_num_pav;
			cs.setnumPav(int_num_pav);


			getline(arquivo, str_num_quartos);
			istringstream(str_num_quartos) >> int_num_quartos;
			cs.setnumQuartos(int_num_quartos);


			getline(arquivo, str_areaDo_terreno);
			doub_area_terreno = strtod(str_areaDo_terreno.c_str(), &pointer);
			cs.setAreaTerreno(doub_area_terreno);


			getline(arquivo, str_area_construida);
			doub_area_construida = strtod(str_area_construida.c_str(), &pointer);
			cs.setAreaConstruida(doub_area_construida);


			getline(arquivo, str_tipo_oferta);
			istringstream(str_tipo_oferta) >> int_tipo_oferta;
			cs.setTipoOferta(int_tipo_oferta);


			getline(arquivo, str_preco);
			doub_preco = strtod(str_preco.c_str(), &pointer);
			cs.setPreco(doub_preco);


			getline(arquivo, str_rua);
			cs.setRua(str_rua);

			getline(arquivo, str_numeroDaCasa);
			istringstream(str_numeroDaCasa) >> int_numeroDaCasa;
			cs.setNumero(int_numeroDaCasa);


			getline(arquivo, str_bairro);
			cs.setBairro(str_bairro);


			getline(arquivo, str_cep);
			cs.setCep(str_cep);


			getline(arquivo, str_cidade);
			cs.setCidade(str_cidade);

			cs.toStringCasa();

		}

		else if (tdi == 2) {
			Apartamento apt = Apartamento();

			getline(arquivo, str_tituloAnuncio);
			apt.setTituloAnuncio(str_tituloAnuncio);


			getline(arquivo, str_num_quartos);
			istringstream(str_num_quartos) >> int_num_quartos;
			apt.setnumQuartos(int_num_quartos);


			getline(arquivo, str_num_vagas);
			istringstream(str_num_quartos) >> int_num_vagas;
			apt.setnumVagas(int_num_vagas);


			getline(arquivo, str_areaApartamento);
			doub_areaApartamento = strtod(str_areaApartamento.c_str(), &pointer);
			apt.setArea(doub_areaApartamento);


			getline(arquivo, str_valorCondominio);
			doub_valorCondominio = strtod(str_valorCondominio.c_str(), &pointer);
			apt.setValorCondominio(doub_valorCondominio);


			getline(arquivo, str_posicao);
			apt.setPosicao(str_posicao);


			getline(arquivo, str_tipo_oferta);
			istringstream(str_tipo_oferta) >> int_tipo_oferta;
			apt.setTipoOferta(int_tipo_oferta);


			getline(arquivo, str_preco);
			doub_preco = strtod(str_preco.c_str(), &pointer);
			apt.setPreco(doub_preco);


			getline(arquivo, str_rua);
			apt.setRua(str_rua);


			getline(arquivo, str_numeroDaCasa);
			istringstream(str_numeroDaCasa) >> int_numeroDaCasa;
			apt.setNumero(int_numeroDaCasa);


			getline(arquivo, str_bairro);
			apt.setBairro(str_bairro);


			getline(arquivo, str_cep);
			apt.setCep(str_cep);

			getline(arquivo, str_cidade);
			apt.setCidade(str_cidade);

			apt.toStringApartamento();
		}

		else if (tdi == 3) {

			Terreno te = Terreno();

			getline(arquivo, str_tituloAnuncio);
			te.setTituloAnuncio(str_tituloAnuncio);


			getline(arquivo, str_areaDo_terreno);
			doub_area_terreno = strtod(str_areaDo_terreno.c_str(), &pointer);
			te.setArea(doub_area_terreno);


			getline(arquivo, str_descricao_terreno);
			te.setDescricaoTerreno(str_descricao_terreno);


			getline(arquivo, str_tipo_oferta);
			istringstream(str_tipo_oferta) >> int_tipo_oferta;
			te.setTipoOferta(int_tipo_oferta);

			getline(arquivo, str_preco);
			doub_preco = strtod(str_preco.c_str(), &pointer);
			te.setPreco(doub_preco);

			getline(arquivo, str_rua);
			te.setRua(str_rua);

			getline(arquivo, str_numeroDaCasa);
			istringstream(str_numeroDaCasa) >> int_numeroDaCasa;
			te.setNumero(int_numeroDaCasa);

			getline(arquivo, str_bairro);
			te.setBairro(str_bairro);

			getline(arquivo, str_cep);
			te.setCep(str_cep);

			getline(arquivo, str_cidade);
			te.setCidade(str_cidade);

			te.toStringTerreno();
		}
	}
}

void ListarCasas() {
	for (int i = 0; i < listaObjCasas.size(); i++) {
		cout << "[" << i << "]" << endl;// Esse i printará o index para a escolha da casa
		listaObjCasas[i].toStringCasa();
	}
}

void ListarApartamentos() {
	for (int i = 0; i < listaObjApartamentos.size(); i++) {
		cout << "[" << i << "]" << endl;// Esse i printará o index para a escolha do apartamento
		listaObjApartamentos[i].toStringApartamento();
	}
}

void ListarTerrenos() {
	for (int i = 0; i < listaObjTerrenos.size(); i++) {
		cout << "[" << i << "]" << endl;// Esse i printará o index para a escolha do terreno
		listaObjTerrenos[i].toStringTerreno();
	}
}


void BuscaPorTitulo() {
	string tdi_str, str_tituloAnuncio, str_numero_pav, str_num_quartos, str_areaDo_terreno, str_area_construida, str_tipo_oferta,
		str_preco, str_rua, str_numeroDaCasa, str_bairro, str_cep, str_cidade, str_num_vagas, str_areaApartamento, str_valorCondominio,
		str_posicao, str_descricao_terreno;

	int tdi, int_num_pav, int_num_quartos, int_tipo_oferta, int_numeroDaCasa, int_num_vagas;

	tdi = int_num_pav = int_num_quartos = int_tipo_oferta = int_numeroDaCasa = 0;


	double doub_area_terreno, doub_area_construida, doub_preco, doub_valorCondominio, doub_areaApartamento;
	char* pointer;



	string str_tituloInput;
	getline(cin, str_tituloInput);

	char* cstr1 = new char(str_tituloInput.length() + 1);
	std::strcpy(cstr1, str_tituloInput.c_str());

	for (int i = 0; i < listaDeImoveis.size() - 1; i++) {
		if (listaDeImoveis[i] == "1") {
			//Checando se o titulo do usuário é semalhante ao de algum título da lista
			char* cstr2 = new char(listaDeImoveis[i + 1].length() + 1);
			std::strcpy(cstr2, listaDeImoveis[i + 1].c_str());

			if (strncmp(strlwr(cstr1), strlwr(cstr2), strlen(cstr1)) == 0) {
				
				for (int j = 0; j < 13; j++) {
					listaBuscaTitulo.push_back(listaDeImoveis[i + j]);
				}
				
			};
			i += 13;
		}

		if (listaDeImoveis[i] == "2") {
			char* cstr2 = new char(listaDeImoveis[i + 1].length() + 1);
			std::strcpy(cstr2, listaDeImoveis[i + 1].c_str());

			if (strncmp(strlwr(cstr1), strlwr(cstr2), strlen(cstr1))) {
				for (int j = 0; j < 14; j++) {
					listaBuscaTitulo.push_back(listaDeImoveis[i + j]);
				}
			}
			i += 14;
		}

		if (listaDeImoveis[i] == "3") {
			char* cstr2 = new char(listaDeImoveis[i + 1].length() + 1);
			std::strcpy(cstr2, listaDeImoveis[i + 1].c_str());

			if (strncmp(strlwr(cstr1), strlwr(cstr2), strlen(cstr1))) {
				for (int j = 0; j < 10; j++) {
					listaBuscaTitulo.push_back(listaDeImoveis[i + j]);
				}
			}
			i += 10;
		}
	}


	///LEITURA DO VETOR DE STRINGS PARA LISTAGEM DE IMOVEIS POR TITULO
	for (int a = 0; a < listaBuscaTitulo.size(); a++) {
		if (listaBuscaTitulo[a] == "1") {
			Casa ca = Casa();
			ca.setTituloAnuncio(listaDeImoveis[a + 1]);

			istringstream(listaDeImoveis[a + 2]) >> int_num_pav;
			ca.setnumPav(int_num_pav);

			istringstream(listaDeImoveis[a + 3]) >> int_num_quartos;
			ca.setnumQuartos(int_num_quartos);

			doub_area_terreno = strtod(listaDeImoveis[a + 4].c_str(), &pointer);
			ca.setAreaTerreno(doub_area_terreno);

			doub_area_construida = strtod(listaDeImoveis[a + 5].c_str(), &pointer);
			ca.setAreaConstruida(doub_area_construida);

			istringstream(listaDeImoveis[a + 6]) >> int_tipo_oferta;
			ca.setTipoOferta(int_tipo_oferta);

			doub_preco = strtod(listaDeImoveis[a + 7].c_str(), &pointer);
			ca.setPreco(doub_preco);

			ca.setRua(listaDeImoveis[a + 8]);

			istringstream(listaDeImoveis[a + 9]) >> int_numeroDaCasa;
			ca.setNumero(int_numeroDaCasa);

			ca.setBairro(listaDeImoveis[a + 10]);

			ca.setCep(listaDeImoveis[a + 11]);

			ca.setCidade(listaDeImoveis[a + 12]);

			cout << "[" << a << "]" << endl;

			ca.toStringCasa();

			a += 13;
		}

		if (listaDeImoveis[a] == "2") {
			Apartamento apt = Apartamento();

			apt.setTituloAnuncio(listaDeImoveis[a + 1]);

			istringstream(listaDeImoveis[a + 2]) >> int_num_quartos;
			apt.setnumQuartos(int_num_quartos);

			istringstream(listaDeImoveis[a + 3]) >> int_num_vagas;
			apt.setnumVagas(int_num_vagas);

			doub_areaApartamento = strtod(listaDeImoveis[a + 4].c_str(), &pointer);
			apt.setArea(doub_areaApartamento);

			doub_valorCondominio = strtod(listaDeImoveis[a + 5].c_str(), &pointer);
			apt.setValorCondominio(doub_valorCondominio);

			apt.setPosicao(listaDeImoveis[a + 6]);

			istringstream(listaDeImoveis[a + 7]) >> int_tipo_oferta;
			apt.setTipoOferta(int_tipo_oferta);

			doub_preco = strtod(listaDeImoveis[a + 8].c_str(), &pointer);
			apt.setPreco(doub_preco);

			apt.setRua(listaDeImoveis[a + 9]);

			istringstream(listaDeImoveis[a + 10]) >> int_numeroDaCasa;
			apt.setNumero(int_numeroDaCasa);

			apt.setBairro(listaDeImoveis[a + 11]);

			apt.setCep(listaDeImoveis[a + 12]);

			apt.setCidade(listaDeImoveis[a + 13]);

			cout << "[" << a << "]" << endl;
			apt.toStringApartamento();

			a += 14;
		}

		if (listaDeImoveis[a] == "3") {
			Terreno te = Terreno();

			te.setTituloAnuncio(listaDeImoveis[a + 1]);

			doub_area_terreno = strtod(listaDeImoveis[a + 2].c_str(), &pointer);
			te.setArea(doub_area_terreno);

			te.setDescricaoTerreno(listaDeImoveis[a + 3]);

			doub_preco = strtod(listaDeImoveis[a + 4].c_str(), &pointer);
			te.setPreco(doub_preco);
			
			te.setRua(listaDeImoveis[a + 5]);

			istringstream(listaDeImoveis[a + 6]) >> int_numeroDaCasa;
			te.setNumero(int_numeroDaCasa);

			te.setBairro(listaDeImoveis[a + 7]);

			te.setCep(listaDeImoveis[a + 8]);

			te.setCidade(listaDeImoveis[a + 9]);

			cout << "[" << a << "]" << endl;

			te.toStringTerreno();
			
			a += 10;
		}
	}
}
