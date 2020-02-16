#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"
#include "archiveManagement.h"

#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <bits/stdc++.h>

#define TAM_G 100;
#define TAM_M 50;

using namespace std;

int main (){

    system("color F0");

    fstream arquivo;

	arquivo.open("listaDeImoveis.txt", ios::ate | ios::in | ios::out | ios::app);

	//Verificando se o arquivo foi aberto
	if (!arquivo.is_open()) {
		cout << "OPS! Houve um problema e o programa não pode ser aberto\n";
		arquivo.close();
		return 0;
	}

    int opcao1, opcao2, opcao3, opcao4, indice, x=1;
    double valor;
    string titulo, cidade, bairro, str;

    while(x==1){

        cout << "SEJA BEM VINDO AO APCARTER!" << endl;
        cout << "Escolha a opcao desejada: " << endl;
        cout << "\t1. Consultar" << endl;

        ///dentro da consulta deve haver uma LISTAGEM. Dentro dessa listagem, devem haver as opções:
        ///listar todos os imoveis disponiveis (independe de titulo, bairro etc)
        ///listar todos disponiveis DE ACORDO com o tipo correspondente (casa, ap ou terreno)
        ///listar todos disponiveis de acordo com a categoria (aluguel ou venda)
        ///listar todos os imoveis de acordo com suas especifidades (titulo, bairro, etc)

        ///IMPORTANTE:::: TODAS AS BUSCAS DEVEM IGNORAR LETRAS MAISCULAS OU MINUSCULAS, ACEITANDO TAMBEM O INICIO DE UMA STRING
        /**COMO ARTICULAR ISSO DENTRO DO PROGRAMA?**/
        ///REUTILIZAR A BUSCA NA EDIÇÃO E REMOÇÃO///

        cout << "\t2. Cadastrar" << endl;

        ///o cadastro deve ser de 1 imovel por vez

        cout << "\t3. Deletar" << endl;

        ///para ser feito a remocao, eh preciso que seja feita uma busca do imovel primeiro
        ///a logica usada para o usuario selecionar o imovel que ele vai querer deletar vai ser com um indice (exceto para a pesquisa diferenciada)

        cout << "\t4. Modificar" << endl;

        ///para ser feito a modificacao, eh preciso que seja feita a busca do imovel primeiro
        ///a logica usada para o usuario selecionar o imovel que ele vai querer modificar vai ser com um indice (exceto para a pesquisa diferenciada)

        cin >> opcao1;

        if(opcao1==1){ ///consulta
            ///chama a classe responsavel pela consulta
            ///segue abaixo os if para as subclasses dentro de consulta
            cout << "Escolha a opcao desejada " << endl;
            cout << "\t1. Listar todos os imoveis disponiveis" << endl;
            cout << "\t2. Escolher o tipo de imovel" << endl;
            cout << "\t3. Listar por categoria de imovel" << endl;
            cout << "\t4. Realizar uma busca diferente" << endl;
            cin >> opcao2;
            cout << opcao2;
            if(opcao2==1){
                ///poe a listagem de todos os imoveis cadastrados no programa;

                ListarTodosImoveis();
            }
            if(opcao2==2){
                cout << "Escolha o tipo de imovel que deseja buscar " << endl;
                cout << "\t1. Casa" << endl;
                cout << "\t2. Apartamento" << endl;
                cout << "\t3. Terreno" << endl;
                cout << "\n\nAAAAAAAAAAAAAAAAAAAAAAAAA\n\n" ;
                /*if(opcao3==1){
                    ///buscar   CASAS
                    ListarCasas();
                }
                if(opcao3==2){
                    ///buscar   APARTAMENTOS
                    ListarApartamentos();
                }
                if(opcao3==3){
                    ///buscar   TERRENO
                    ListarTerrenos();
                }*/
            }

            if(opcao2==3){
                cout << "Deseja listar imoveis para alugar ou vender?" << endl;
                cout << "\t1. Alugar" << endl;
                cout << "\t2. Vender" << endl;
                cin >> opcao3;
                if(opcao3==1){
                    ///listar todos os imoveis para aluguel;
                }
                if(opcao3==2){
                    ///listar todos os imoveis para venda;
                }
            }
            if(opcao2==4){
                ///busca por BAIRRO, CIDADE, TITULO, VALOR MAIOR OU MENOR;
                cout << "Eescolha de que forma voce quer buscar o imovel" << endl;
                cout << "\t1. Por titulo" << endl;
                cout << "\t2. Por cidade" << endl;
                cout << "\t3. Por bairro" << endl;
                cout << "\t4. Por valor" << endl;
                cin >> opcao3;
                cout << opcao3 << endl;

                if(opcao3==1){
                    ///Fazer busca por titulo;
                    cout << "Digite o titulo: " << endl;
                    getline(cin, titulo);
                    getline(cin, titulo);
                    transform(titulo.begin(), titulo.end(), titulo.begin(), ::tolower);
                    cout << titulo << endl;
                    ///Completa com o que for preciso para a classe funcionar
                }
                if(opcao3==2){
                    ///Fazer busca por cidade;
                    cout << "Digite a cidade: " << endl;
                    getline(cin, cidade);
                    getline(cin, cidade);
                    transform(cidade.begin(), cidade.end(), cidade.begin(), ::tolower);
                    cout << cidade << endl;
                    ///Completa com o que for preciso para a classe funcionar
                }
                if(opcao3==3){
                    ///Fazer busca por bairro;
                    cout << "Digite o bairro: " << endl;
                    getline(cin, bairro);
                    getline(cin, bairro);
                    transform(bairro.begin(), bairro.end(), bairro.begin(), ::tolower);
                    cout << bairro << endl;
                    ///Completa com o que for preciso para a classe funcionar
                }
                if(opcao3==4){
                    cout << "\tDeseja fazer a busca por menor ou maior valor?" << endl;
                    cout << "\t1. Maior" << endl;
                    cout << "\t2. Menor" << endl;
                    cin >> opcao4;
                    if(opcao4==1){
                        ///busca por maior valor digitado;
                        cout << "Digite o valor" << endl;
                        cin >> valor;
                        ///Realiza a busca puxando da classe
                    }
                    if(opcao4==2){
                        ///busca por menor valor digitado;
                        cout << "Digite o valor " << endl;
                        cin >> valor;
                        ///Realiza a busca puxando da classe
                    }

                }
            }
        }
        if(opcao1==2){ ///cadastro
            ///como deve ser cadastrado apenas um imovel por ves, vou por a opcao para escolha do tipo de imovel, e em seguida, por as informações.

            string titulo_Anuncio, street, hood, cep, cidade;
            int tipoDeOferta = 0, numeroEnder = 0;
            double preco = 0;

            cout << "Que tipo de imovel deseja cadastrar?" << endl;
            cout << "\t1. Casa" << endl;
            cout << "\t2. Apartamento" << endl;
            cout << "\t3. Terreno" << endl;
            cin >> opcao2;
                if(opcao2==1){

                    ///comeca a pedir as informações para o cadastro da CASA
                    int numeroDeQuartos = 0, numeroDePavimentos = 0;
                    double areaDoTerreno = 0, areaConstruida = 0;

                    Casa ca = Casa();
                    cout << "Digite o titulo anuncio: " << endl;
                    cin.ignore();
                    getline(cin, titulo_Anuncio);
                    ca.setTituloAnuncio(titulo_Anuncio);

                    cout << "Digite o numero de pavimentos: " << endl;
                    cin >> numeroDePavimentos;
                    ca.setnumPav(numeroDePavimentos);

                    cout << "Digite o numero de quartos: " << endl;
                    cin >> numeroDeQuartos;
                    ca.setnumQuartos(numeroDeQuartos);

                    cout << "Digite a area do terreno: " << endl;
                    cin >> areaDoTerreno;
                    ca.setAreaTerreno(areaDoTerreno);

                    cout << "Digite a area construida: " << endl;
                    cin >> areaConstruida;
                    ca.setAreaConstruida(areaConstruida);

                    cout << "Qual o tipo de oferta? " << endl << "[1]Para vender" << endl << "[2]Para alugar" << endl;
                    cin >> tipoDeOferta;

                    if (tipoDeOferta != 1 && tipoDeOferta != 2) {
                        cout << "Opcao invalida!" << endl;
                        //Break; --> para quando o loop de menu for implementado
                    }
                    ca.setTipoOferta(tipoDeOferta);

                    cout << "Digite o preco: " << endl;
                    cin >> preco;
                    ca.setPreco(preco);

                    cout << "Digite o nome da rua: " << endl;
                    cin.ignore();
                    getline(cin, street);
                    ca.setRua(street);

                    cout << "Digite o numero do imovel: " << endl;
                    cin >> numeroEnder;
                    ca.setNumero(numeroEnder);

                    cout << "Digite o nome do bairro: " << endl;
                    cin.ignore();
                    getline(cin, hood);
                    ca.setBairro(hood);

                    cout << "Digite o CEP do local: " << endl;
                    getline(cin, cep);
                    ca.setCep(cep);

                    cout << "Digite o nome da cidade: " << endl;
                    getline(cin, cidade);
                    ca.setCidade(cidade);

                    arquivo << ca.getTipoImovel() << endl << ca.getTituloAnuncio() << endl << ca.getnumPav() << endl << ca.getnumQuartos() << endl
                        << ca.getAreaTerreno() << endl << ca.getAreaConstruida() << endl << ca.getTipoOferta() << endl << ca.getPreco() << endl
                        << ca.getRua() << endl << ca.getNumero() << endl << ca.getBairro() << endl << ca.getCep() << endl << ca.getCidade() << endl;

                }
                if(opcao2==2){
                    ///comeca a pedir as informações para o cadastro do APARTAMENTO

                    Apartamento ap = Apartamento();
                    int numeroDeQuartos = 0, numeroDeVagas = 0;
                    double areaDoAp = 0, valorDoCondominio = 0;
                    string Posicao;

                    cout << "Digite o titulo anuncio: " << endl;
                    cin.ignore();
                    getline(cin, titulo_Anuncio);
                    ap.setTituloAnuncio(titulo_Anuncio);

                    cout << "Digite o numero de quartos: " << endl;
                    cin >> numeroDeQuartos;
                    ap.setnumQuartos(numeroDeQuartos);

                    cout << "Digite o numero de vagas na garagem: " << endl;
                    cin >> numeroDeVagas;
                    ap.setnumVagas(numeroDeVagas);

                    cout << "Digite a area do apartamento: " << endl;
                    cin >> areaDoAp;
                    ap.setArea(areaDoAp);

                    cout << "Digite a posicao do apartamento com relacao ao sol: " << endl;
                    cin.ignore();
                    getline(cin, Posicao);
                    ap.setPosicao(Posicao);

                    cout << "Digite o valor do condominio: " << endl;
                    cin >> valorDoCondominio;
                    ap.setValorCondominio(valorDoCondominio);

                    cout << "Qual o tipo de oferta? " << endl << "[1]Para vender" << endl << "[2]Para alugar" << endl;
                    cin >> tipoDeOferta;

                    if (tipoDeOferta != 1 && tipoDeOferta != 2) {
                        cout << "Opcao invalida!" << endl;
                        //Break; --> para quando o loop de menu for implementado
                    }
                    ap.setTipoOferta(tipoDeOferta);


                    cout << "Digite o preco: " << endl;
                    cin >> preco;
                    ap.setPreco(preco);

                    cout << "Digite o nome da rua: " << endl;
                    cin.ignore();
                    getline(cin, street);
                    ap.setRua(street);

                    cout << "Digite o numero do imovel: " << endl;
                    cin >> numeroEnder;
                    ap.setNumero(numeroEnder);

                    cout << "Digite o nome do bairro: " << endl;
                    cin.ignore();
                    getline(cin, hood);
                    ap.setBairro(hood);

                    cout << "Digite o CEP do local: " << endl;
                    getline(cin, cep);
                    ap.setCep(cep);

                    cout << "Digite o nome da cidade: " << endl;
                    getline(cin, cidade);
                    ap.setCidade(cidade);

                    arquivo << ap.getTipoImovel() << endl << ap.getTituloAnuncio() << endl << ap.getnumQuartos() << endl << ap.getnumVagas() << endl
                        << ap.getArea() << endl << ap.getValorCondominio() << endl << ap.getPosicao() << endl << ap.getTipoOferta() << endl
                        << ap.getPreco() << endl << ap.getRua() << endl << ap.getNumero() << endl << ap.getBairro() << endl << ap.getCep() << endl
                        << ap.getCidade() << endl;

                }
                if(opcao2==3){
                    ///comeca a pedir as informações para o cadastro do TERRENO

                    double areaterreno = 0;
                    string descricao;
                    Terreno te = Terreno();

                    cout << "Digite o titulo anuncio: " << endl;
                    cin.ignore();
                    getline(cin, titulo_Anuncio);
                    te.setTituloAnuncio(titulo_Anuncio);

                    cout << "Digite a area do terreno: " << endl;
                    cin >> areaterreno;
                    te.setArea(areaterreno);

                    cout << "De a descricao detalhada do terreno: " << endl;
                    cin.ignore();
                    getline(cin, descricao);
                    te.setDescricaoTerreno(descricao);

                    cout << "Qual o tipo de oferta? " << endl << "[1]Para vender" << endl << "[2]Para alugar" << endl;
                    cin >> tipoDeOferta;

                    if (tipoDeOferta != 1 && tipoDeOferta != 2) {
                        cout << "Opcao invalida!" << endl;
                        //Break; --> para quando o loop de menu for implementado
                    }
                    te.setTipoOferta(tipoDeOferta);


                    cout << "Digite o preco: " << endl;
                    cin >> preco;
                    te.setPreco(preco);


                    cout << "Digite o nome da rua: " << endl;
                    cin.ignore();
                    getline(cin, street);
                    te.setRua(street);

                    cout << "Digite o numero do imovel: " << endl;
                    cin >> numeroEnder;
                    te.setNumero(numeroEnder);

                    cout << "Digite o nome do bairro: " << endl;
                    cin.ignore();
                    getline(cin, hood);
                    te.setBairro(hood);

                    cout << "Digite o CEP do local: " << endl;
                    getline(cin, cep);
                    te.setCep(cep);

                    cout << "Digite o nome da cidade: " << endl;
                    getline(cin, cidade);
                    te.setCidade(cidade);

                    arquivo << te.getTipoImovel() << endl << te.getTituloAnuncio() << endl << te.getArea() << endl << te.getDescricaoTerreno() << endl
                        << te.getPreco() << endl << te.getRua() << te.getNumero() << endl << te.getBairro() << endl << te.getCep() << endl
                        << te.getCidade() << endl;

                }
        }
        if(opcao1==3){ ///delete
            ///chama a classe responsavel por deletar
            ///chama a classe responsavel pela consulta, porque para realizar a remoção terá de ser feito uma busca. Segue o mesmo feito na opção de apenas consulta
            ///segue abaixo os if para as subclasses dentro de consulta
            ///ASSIM QUE A LISTA FOR EXIBIDA, CADA IMOVEL DEVE TER UM INDICE (SEU NUMERO DE IDENTIFICACAO) PARA QUE O USUARIO ESCOLHA E DELETE
            /**COMO VAI SER FEITO A REMOCAO DO ARQUIVO?**/

            cout << "Eescolha a opcao deseja para consultar o imovel para remocao " << endl;
            cout << "\t1. Listar todos os imoveis disponiveis" << endl;
            cout << "\t2. Escolher o tipo de imovel" << endl;
            cout << "\t3. Listar por categoria de imovel" << endl;
            cout << "\t4. Realizar uma buscar diferente" << endl;
            cin >> opcao2;
            if(opcao2==1){
                ///poe a listagem de todos os imoveis cadastrados no programa;
                ///DEVE SER PERGUNTADO AO USUARIO QUAL O INDICE DO IMOVEL QUE ELE VAI QUERER REMOVER.

                  string tdi_str, str_tituloAnuncio, str_numero_pav, str_num_quartos, str_areaDo_terreno, str_area_construida, str_tipo_oferta,
                        str_preco, str_rua, str_numeroDaCasa, str_bairro, str_cep, str_cidade;

                        int tdi, int_num_pav, int_num_quartos, int_tipo_oferta, int_numeroDaCasa;

                        tdi = int_num_pav = int_num_quartos = int_tipo_oferta = int_numeroDaCasa = 0;


                        double doub_area_terreno, doub_area_construida, doub_preco;
                        char *pointer;

                         std::ifstream arquivo("listaDeImoveis.txt", ios::in);

                        while (!arquivo.eof()) {

                            getline(arquivo, tdi_str);
                            istringstream(tdi_str) >> tdi;

                            cout << tdi << endl;
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
                                //delete pointer;

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
                        }

                cout << "Digite o indice do imovel desejado para remocao" << endl;
                cin >> indice;
                ///A PARTIR DESSE INDICE, PUXA A CLASSE E FAZ A REMOÇÃO;
            }
            if(opcao2==2){
                cout << "Escolha o tipo de imovel que voce deseja buscar para remocao " << endl;
                cout << "\t1. Casa" << endl;
                cout << "\t2. Apartamento" << endl;
                cout << "\t3. Terreno" << endl;
                cin >> opcao3;
                if(opcao3==1){
                    ///buscar e listar CASAS
                    ///DEVE SER PERGUNTADO AO USUARIO QUAL O INDICE DO IMOVEL QUE ELE VAI QUERER REMOVER.
                cout << "Digite o indice do imovel desejado para remocao" << endl;
                cin >> indice;
                ///A PARTIR DESSE INDICE, PUXA A CLASSE E FAZ A REMOÇÃO;
                }
                if(opcao3==2){
                    ///buscar e listar APARTAMENTOS
                    ///DEVE SER PERGUNTADO AO USUARIO QUAL O INDICE DO IMOVEL QUE ELE VAI QUERER REMOVER.
                cout << "Digite o indice do imovel desejado para remocao " << endl;
                cin >> indice;
                ///A PARTIR DESSE INDICE, PUXA A CLASSE E FAZ A REMOÇÃO;
                }
                if(opcao3==3){
                    ///buscar e listar TERRENOS
                    ///DEVE SER PERGUNTADO AO USUARIO QUAL O INDICE DO IMOVEL QUE ELE VAI QUERER REMOVER.
                cout << "Digite o indice do imovel desejado para remocao " << endl;
                cin >> indice;
                ///A PARTIR DESSE INDICE, PUXA A CLASSE E FAZ A REMOÇÃO;
                }
            }
            if(opcao2==3){
                cout << "Deseja listar imoveis que estao para alugar ou vender?" << endl;
                cout << "\t1. Alugar" << endl;
                cout << "\t2. Vender" << endl;
                cin >> opcao3;
                if(opcao3==1){
                    ///listar todos os imoveis para aluguel;
                    ///DEVE SER PERGUNTADO AO USUARIO QUAL O INDICE DO IMOVEL QUE ELE VAI QUERER REMOVER.
                cout << "Digite o indice do imovel desejado para remocao " << endl;
                cin >> indice;
                ///A PARTIR DESSE INDICE, PUXA A CLASSE E FAZ A REMOÇÃO;
                }
                if(opcao3==2){
                    ///listar todos os imoveis para venda;
                    ///DEVE SER PERGUNTADO AO USUARIO QUAL O INDICE DO IMOVEL QUE ELE VAI QUERER REMOVER.
                cout << "Digite o indice do imovel desejado para remocao " << endl;
                cin >> indice;
                ///A PARTIR DESSE INDICE, PUXA A CLASSE E FAZ A REMOÇÃO;
                }
            }
            if(opcao2==4){
                ///busca por BAIRRO, CIDADE, TITULO, VALOR MAIOR OU MENOR;
                cout << "Digite o indice do imovel desejado para modificacao" << endl;
                cout << "\t1. Por titulo" << endl;
                cout << "\t2. Por cidade" << endl;
                cout << "\t3. Por bairro" << endl;
                cout << "\t4. Por valor" << endl;
                cin >> opcao3;
                if(opcao3==1){
                    ///Fazer busca por titulo;
                    cout << "Digite o titulo " << endl;
                    getline(cin, titulo);
                    getline(cin, titulo);
                    transform(titulo.begin(), titulo.end(), titulo.begin(), ::tolower);
                    cout << titulo << endl;
                    ///Completa com o que for preciso para a classe funcionar
                }
                if(opcao3==2){
                    ///Fazer busca por cidade;
                    cout << "Digite o nome da cidade " << endl;
                    getline(cin, cidade);
                    getline(cin, cidade);
                    transform(cidade.begin(), cidade.end(), cidade.begin(), ::tolower);
                    cout << cidade << endl;
                    ///Completa com o que for preciso para a classe funcionar
                }
                if(opcao3==3){
                    ///Fazer busca por bairro;
                    cout << "Digite o nome do bairro " << endl;
                    getline(cin, bairro);
                    getline(cin, bairro);
                    transform(bairro.begin(), bairro.end(), bairro.begin(), ::tolower);
                    cout << bairro << endl;
                    ///Completa com o que for preciso para a classe funcionar
                }
                if(opcao3==4){
                    cout << "Dseja fazer a busca para remocao por menor ou maior valor?" << endl;
                    cout << "\t1. Maior" << endl;
                    cout << "\t2. Menor" << endl;
                    cin >> opcao4;
                    if(opcao4==1){
                        ///busca por maior valor digitado;
                        cout << "Digite o valor" << endl;
                        cin >> valor;
                        ///Realiza a busca e exibicao puxando da classe
                        ///AQUI FAZ A BUSCA USANDO O NUMERO DO MAIOR VALOR QUE O USUARIO DIGITAR, E NAO O INDICE
                    }
                    if(opcao4==2){
                        ///busca por menor valor digitado;
                        cout << "Digite o valor: " << endl;
                        cin >> valor;
                        ///Realiza a busca e exibicao puxando da classe
                        ///AQUI FAZ A BUSCA USANDO O NUMERO DO MENOR VALOR QUE O USUARIO DIGITAR, E NAO O INDICE
                    }
                }
            }
        }
        if(opcao1==4){ ///edicao
            ///chama a classe responsavel pela modificação
            ///como foi pedido no arquivo, é preciso que faça a busca para poder fazer a edicao.
            ///seguindo a mesma linha de raciocino para a opcao de delete::::
            ///chama a classe responsavel pela consulta, porque para realizar a edição terá de ser feito uma busca.
            ///segue abaixo os if para as subclasses dentro de consulta, e apos disso, espaços para os comandos de edicao
            ///ASSIM QUE A LISTA FOR EXIBIDA, CADA IMOVEL DEVE TER UM INDICE (SEU NUMERO DE IDENTIFICACAO) PARA QUE O USUARIO ESCOLHA E MODIFIQUE
            /**COMO VAI SER FEITO A EDICAO DO ARQUIVO?**/

            cout << "Digite o indice do imovel desejado para modificacao" << endl;
            cout << "\t1. Listar todos os imoveis" << endl; /// a listagem ja esta funcionando para todos os imoveis
            cout << "\t2. Escolhe o tipo de imovel" << endl;
            cout << "\t3. Listar por categoria de imovel" << endl;
            cout << "\t4. Realizar uma busca diferente" << endl;
            cin >> opcao2;
            if(opcao2==1){
                ///poe a listagem de todos os imoveis cadastrados no programa;
                ///DEVE SER PERGUNTADO AO USUARIO QUAL O INDICE DO IMOVEL QUE ELE VAI QUERER MODIFICAR.


                                string tdi_str, str_tituloAnuncio, str_numero_pav, str_num_quartos, str_areaDo_terreno, str_area_construida, str_tipo_oferta,
                        str_preco, str_rua, str_numeroDaCasa, str_bairro, str_cep, str_cidade;

                        int tdi, int_num_pav, int_num_quartos, int_tipo_oferta, int_numeroDaCasa;

                        tdi = int_num_pav = int_num_quartos = int_tipo_oferta = int_numeroDaCasa = 0;


                        double doub_area_terreno, doub_area_construida, doub_preco;
                        char *pointer;

                         std::ifstream arquivo("listaDeImoveis.txt", ios::in);

                        while (!arquivo.eof()) {

                            getline(arquivo, tdi_str);
                            istringstream(tdi_str) >> tdi;

                            cout << tdi << endl;
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
                                //delete pointer;

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
                        }

                cout << "Digite o indice do imovel desejado para modificacao" << endl;
                cin >> indice;
                cout << indice << endl;

                ///A PARTIR DESSE INDICE, PUXA A CLASSE E FAZ A EDICAO;
                /**COMO?**/
            }
            if(opcao2==2){
                cout << "Escolha o tipo de movel para a busca " << endl;
                cout << "\t1. Casa" << endl;
                cout << "\t2. Apartamento" << endl;
                cout << "\t3. Terreno" << endl;
                cin >> opcao3;
                if(opcao3==1){
                    ///buscar e listar CASAS
                    ///DEVE SER PERGUNTADO AO USUARIO QUAL O INDICE DO IMOVEL QUE ELE VAI QUERER MODIFICAR.
                cout << "Digite o indice do imovel desejado para modificacao " << endl;
                cin >> indice;
                ///A PARTIR DESSE INDICE, PUXA A CLASSE E FAZ A EDICAO;

                }
                if(opcao3==2){
                    ///buscar e listar APARTAMENTOS
                    ///DEVE SER PERGUNTADO AO USUARIO QUAL O INDICE DO IMOVEL QUE ELE VAI QUERER MODIDICAR.
                cout << "Digite o indice do imovel desejado para modificacao" << endl;
                cin >> indice;
                ///A PARTIR DESSE INDICE, PUXA A CLASSE E FAZ A EDIÇÃO;
                }
                if(opcao3==3){
                    ///buscar e listar TERRENOS
                    ///DEVE SER PERGUNTADO AO USUARIO QUAL O INDICE DO IMOVEL QUE ELE VAI QUERER MODIDICAR.
                cout << "Digite o indice do imovel desejado para modificacao " << endl;
                cin >> indice;
                ///A PARTIR DESSE INDICE, PUXA A CLASSE E FAZ A EDIÇÃO;
                }
            }
            if(opcao2==3){
                cout << "Deseja listar imoveis que estao cadastrados para aluguel ou venda?" << endl;
                cout << "\t1. Aluguel" << endl;
                cout << "\t2. Venda" << endl;
                cin >> opcao3;
                if(opcao3==1){
                    ///listar todos os imoveis para aluguel;
                    ///DEVE SER PERGUNTADO AO USUARIO QUAL O INDICE DO IMOVEL QUE ELE VAI QUERER MODIDICAR.
                cout << "Digite o indice do imovel desejado para modificacao" << endl;
                cin >> indice;
                ///A PARTIR DESSE INDICE, PUXA A CLASSE E FAZ A EDIÇÃO;
                }
                if(opcao3==2){
                    ///listar todos os imoveis para venda;
                    ///DEVE SER PERGUNTADO AO USUARIO QUAL O INDICE DO IMOVEL QUE ELE VAI QUERER MODIDICAR.
                cout << "Digite o indice do imovel desejado para modificacao" << endl;
                cin >> indice;
                ///A PARTIR DESSE INDICE, PUXA A CLASSE E FAZ A EDIÇÃO;
                }
            }
            if(opcao2==4){
                ///busca por BAIRRO, CIDADE, TITULO, VALOR MAIOR OU MENOR;
                cout << "Escolha de forma voce quer buscar um imovel para modificar" << endl;
                cout << "\t1. Por titulo" << endl;
                cout << "\t2. Por cidade" << endl;
                cout << "\t3. Por bairro" << endl;
                cout << "\t4. Por valor" << endl;
                cin >> opcao3;
                if(opcao3==1){
                    ///Fazer busca por titulo;
                    cout << "Digite o titulo " << endl;
                    getline(cin, titulo);
                    getline(cin, titulo);
                    transform(titulo.begin(), titulo.end(), titulo.begin(), ::tolower);
                    cout << titulo << endl;
                    ///AQUI FAZ A BUSCA USANDO O TITULO, E NAO O INDICE;
                    ///PUXA A CLASSE E FAZ A EDICAO;
                    ///Completa com o que for preciso para a classe funcionar
                }
                if(opcao3==2){
                    ///Fazer busca por cidade;
                    cout << "Digite o nome da cidade" << endl;
                    getline(cin, cidade);
                    getline(cin, cidade);
                    transform(cidade.begin(), cidade.end(), cidade.begin(), ::tolower);
                    cout << cidade << endl;
                    ///AQUI FAZ A BUSCA USANDO O NOME DA CIDADE, E NAO O INDICE;
                    ///PUXA A CLASSE E FAZ A EDICAO
                    ///Completa com o que for preciso para a classe funcionar
                }
                if(opcao3==3){
                    ///Fazer busca por bairro;
                    cout << "Digite o nome do bairro " << endl;
                    getline(cin, bairro);
                    getline(cin, bairro);
                    transform(bairro.begin(), bairro.end(), bairro.begin(), ::tolower);
                    cout << bairro << endl;
                    ///AQUI FAZ A BUSCA USANDO O BAIRRO DA CIDADE, E NAO O INDICE;
                    ///PUXA A CLASSE E FAZ A EDICAO
                    ///Completa com o que for preciso para a classe funcionar
                }
                if(opcao3==4){
                    cout << "Deseja buscar para modificar por maior ou menor valor?" << endl;
                    cout << "\t1. Maior" << endl;
                    cout << "\t2. Menor" << endl;
                    cin >> opcao4;
                    if(opcao4==1){
                        ///busca por maior valor digitado;
                        cout << "Digite o valor " << endl;
                        cin >> valor;
                        ///Realiza a busca e exibicao puxando da classe
                        ///AQUI FAZ A BUSCA USANDO O NUMERO DO MAIOR VALOR QUE O USUARIO DIGITAR, E NAO O INDICE
                        ///PUXA A CLASSE E FAZ A EDICAO
                    }
                    if(opcao4==2){
                        ///busca por menor valor digitado;
                        cout << "Digite o valor " << endl;
                        cin >> valor;
                        ///Realiza a busca e exibicao puxando da classe
                        ///AQUI FAZ A BUSCA USANDO O NUMERO DO MENOR VALOR QUE O USUARIO DIGITAR, E NAO O INDICE
                        ///PUXA A CLASSE E FAZ A EDICAO
                    }
                }
            }
        }

        if (opcao1 != 2) {
		 //A leitura do arquivo resulta no armazenamento de strings em um vetor string que logo dps será lido e transformado em atributos
		 //de objetos
		 lerArquivo();
        }
        cout << "Deseja continuar no programa e voltar para o menu inicial?" << endl;
        cout << "1. Sim" << endl;
        cout << "2. Nao" << endl;
        cin >> x;

    }

    arquivo.close();

    return 0;
}
