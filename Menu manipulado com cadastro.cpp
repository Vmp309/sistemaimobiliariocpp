#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"
#include <vector>

#define TAM_G 100;
#define TAM_M 50;

using namespace std;

int main (){

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

        cout << "\n\t\tSEJA BEM VINDO AO SYSTEM LOC 2.0!" << endl;
        cout << "\t\tESCOLHA A OPCAO DESEJADA: " << endl;
        cout << "\t\t\t 1. CONSULTAR" << endl;

        ///dentro da consulta deve haver uma LISTAGEM. Dentro dessa listagem, devem haver as opções:
        ///listar todos os imoveis disponiveis (independe de titulo, bairro etc)
        ///listar todos disponiveis DE ACORDO com o tipo correspondente (casa, ap ou terreno)
        ///listar todos disponiveis de acordo com a categoria (aluguel ou venda)
        ///listar todos os imoveis de acordo com suas especifidades (titulo, bairro, etc)

        ///IMPORTANTE:::: TODAS AS BUSCAS DEVEM IGNORAR LETRAS MAISCULAS OU MINUSCULAS, ACEITANDO TAMBEM O INICIO DE UMA STRING
        /**COMO ARTICULAR ISSO DENTRO DO PROGRAMA?**/
        ///REUTILIZAR A BUSCA NA EDIÇÃO E REMOÇÃO///

        cout << "\t\t\t 2. CADASTRAR" << endl;

        ///o cadastro deve ser de 1 imovel por vez

        cout << "\t\t\t 3. DELETAR" << endl;

        ///para ser feito a remocao, eh preciso que seja feita uma busca do imovel primeiro
        ///a logica usada para o usuario selecionar o imovel que ele vai querer deletar vai ser com um indice (exceto para a pesquisa diferenciada)

        cout << "\t\t\t 4. MODIFICAR" << endl;

        ///para ser feito a modificacao, eh preciso que seja feita a busca do imovel primeiro
        ///a logica usada para o usuario selecionar o imovel que ele vai querer modificar vai ser com um indice (exceto para a pesquisa diferenciada)

        cin >> opcao1;
        if(opcao1==1){ ///consulta
            ///chama a classe responsavel pela consulta
            ///segue abaixo os if para as subclasses dentro de consulta
            cout << "\t\tESCOLHA A OPCAO DESEJADA: " << endl;
            cout << "\t\t\t1. LISTAR TODOS OS IMOVEIS DISPONIVEIS" << endl;
            cout << "\t\t\t2. ESCOLHER O TIPO DO IMOVEL" << endl;
            cout << "\t\t\t3. LISTAR POR CATEGORIA DO IMOVEL" << endl;
            cout << "\t\t\t4. REALIZAR UMA BUSCA DIFERENCIADA" << endl;
            cin >> opcao2;
            if(opcao2==1){
                ///poe a listagem de todos os imoveis cadastrados no programa;
            }
            if(opcao2==2){
                cout << "\t\tESCOLHA O TIPO DE IMOVEL VOCE DESEJA BUSCAR: " << endl;
                cout << "\t\t\t1. CASA" << endl;
                cout << "\t\t\t2. APARTAMENTO" << endl;
                cout << "\t\t\t3. TERRENO" << endl;
                cin >> opcao3;
                if(opcao3==1){
                    ///buscar   CASAS
                }
                if(opcao3==2){
                    ///buscar   APARTAMENTOS
                }
                if(opcao3==3){
                    ///buscar   TERRENO
                }
            }
            if(opcao2==3){
                cout << "\t\tDESEJA LISTAR IMOVEIS PARA ALUGUEL OU VENDA?" << endl;
                cout << "\t\tESCOLHA UMA OPCAO:" << endl;
                cout << "\t\t\t1. ALUGAR" << endl;
                cout << "\t\t\t2. VENDER" << endl;
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
                cout << "\t\tESCOLHA DE QUE FORMA VOCE QUER BUSCAR UM IMOVEL" << endl;
                cout << "\t\t\t1. POR TITULO" << endl;
                cout << "\t\t\t2. POR CIDADE" << endl;
                cout << "\t\t\t3. POR BAIRRO" << endl;
                cout << "\t\t\t4. POR VALOR" << endl;
                cin >> opcao3;
                if(opcao3==1){
                    ///Fazer busca por titulo;
                    cout << "\t\tDIGITE O TITULO: " << endl;
                    getline(cin, titulo);
                    getline(cin, titulo);
                    transform(titulo.begin(), titulo.end(), titulo.begin(), ::tolower);
                    cout << titulo << endl;
                    ///Completa com o que for preciso para a classe funcionar
                }
                if(opcao3==2){
                    ///Fazer busca por cidade;
                    cout << "\t\tDIGITE A CIDADE: " << endl;
                    getline(cin, cidade);
                    getline(cin, cidade);
                    transform(cidade.begin(), cidade.end(), cidade.begin(), ::tolower);
                    cout << cidade << endl;
                    ///Completa com o que for preciso para a classe funcionar
                }
                if(opcao3==3){
                    ///Fazer busca por bairro;
                    cout << "\t\tDIGITE O BAIRRO: " << endl;
                    getline(cin, bairro);
                    getline(cin, bairro);
                    transform(bairro.begin(), bairro.end(), bairro.begin(), ::tolower);
                    cout << bairro << endl;
                    ///Completa com o que for preciso para a classe funcionar
                }
                if(opcao3==4){
                    cout << "\t\tDESEJA FAZER POR MENOR OU MAIOR VALOR?" << endl;
                    cout << "\t\t\t1. MAIOR" << endl;
                    cout << "\t\t\t2. MENOR" << endl;
                    cin >> opcao4;
                    if(opcao4==1){
                        ///busca por maior valor digitado;
                        cout << "\t\tDIGITE O VALOR: " << endl;
                        cin >> valor;
                        ///Realiza a busca puxando da classe
                    }
                    if(opcao4==2){
                        ///busca por menor valor digitado;
                        cout << "\t\tDIGITE O VALOR: " << endl;
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

            cout << "QUE TIPO DE IMOVEL DESEJA CADASTRAR?" << endl;
            cout << "\t\t\t1. CASA" << endl;
            cout << "\t\t\t2. APARTAMENTO" << endl;
            cout << "\t\t\t3. TERRENO" << endl;
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
                    ca.setAreaContruida(areaConstruida);

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

            cout << "\t\tESCOLHA A OPCAO DESEJADA PARA CONSULTAR O IMOVEL QUE VOCE DESEJA DELETAR: " << endl;
            cout << "\t\t\t1. LISTAR TODOS OS IMOVEIS DISPONIVEIS" << endl;
            cout << "\t\t\t2. ESCOLHER O TIPO DO IMOVEL" << endl;
            cout << "\t\t\t3. LISTAR POR CATEGORIA DO IMOVEL" << endl;
            cout << "\t\t\t4. REALIZAR UMA BUSCA DIFERENCIADA" << endl;
            cin >> opcao2;
            if(opcao2==1){
                ///poe a listagem de todos os imoveis cadastrados no programa;
                ///DEVE SER PERGUNTADO AO USUARIO QUAL O INDICE DO IMOVEL QUE ELE VAI QUERER REMOVER.
                cout << "\t\tDIGITE O INDICE DO IMOVEL, QUE EH SEU NUMERO DE IDENTIFICACAO, QUE VOCE QUER REMOVER: " << endl;
                cin >> indice;
                ///A PARTIR DESSE INDICE, PUXA A CLASSE E FAZ A REMOÇÃO;
            }
            if(opcao2==2){
                cout << "\t\tESCOLHA O TIPO DE IMOVEL VOCE DESEJA BUSCAR PARA REMOCAO: " << endl;
                cout << "\t\t\t1. CASA" << endl;
                cout << "\t\t\t2. APARTAMENTO" << endl;
                cout << "\t\t\t3. TERRENO" << endl;
                cin >> opcao3;
                if(opcao3==1){
                    ///buscar e listar CASAS
                    ///DEVE SER PERGUNTADO AO USUARIO QUAL O INDICE DO IMOVEL QUE ELE VAI QUERER REMOVER.
                cout << "\t\tDIGITE O INDICE DO IMOVEL, QUE EH SEU NUMERO DE IDENTIFICACAO, QUE VOCE QUER REMOVER: " << endl;
                cin >> indice;
                ///A PARTIR DESSE INDICE, PUXA A CLASSE E FAZ A REMOÇÃO;
                }
                if(opcao3==2){
                    ///buscar e listar APARTAMENTOS
                    ///DEVE SER PERGUNTADO AO USUARIO QUAL O INDICE DO IMOVEL QUE ELE VAI QUERER REMOVER.
                cout << "\t\tDIGITE O INDICE DO IMOVEL, QUE EH SEU NUMERO DE IDENTIFICACAO, QUE VOCE QUER REMOVER: " << endl;
                cin >> indice;
                ///A PARTIR DESSE INDICE, PUXA A CLASSE E FAZ A REMOÇÃO;
                }
                if(opcao3==3){
                    ///buscar e listar TERRENOS
                    ///DEVE SER PERGUNTADO AO USUARIO QUAL O INDICE DO IMOVEL QUE ELE VAI QUERER REMOVER.
                cout << "\t\tDIGITE O INDICE DO IMOVEL, QUE EH SEU NUMERO DE IDENTIFICACAO, QUE VOCE QUER REMOVER: " << endl;
                cin >> indice;
                ///A PARTIR DESSE INDICE, PUXA A CLASSE E FAZ A REMOÇÃO;
                }
            }
            if(opcao2==3){
                cout << "\t\tDESEJA LISTAR IMOVEIS PARA ALUGUEL OU VENDA PARA A REMOCAO?" << endl;
                cout << "\t\tESCOLHA UMA OPCAO:" << endl;
                cout << "\t\t\t1. ALUGAR" << endl;
                cout << "\t\t\t2. VENDER" << endl;
                cin >> opcao3;
                if(opcao3==1){
                    ///listar todos os imoveis para aluguel;
                    ///DEVE SER PERGUNTADO AO USUARIO QUAL O INDICE DO IMOVEL QUE ELE VAI QUERER REMOVER.
                cout << "\t\tDIGITE O INDICE DO IMOVEL, QUE EH SEU NUMERO DE IDENTIFICACAO, QUE VOCE QUER REMOVER: " << endl;
                cin >> indice;
                ///A PARTIR DESSE INDICE, PUXA A CLASSE E FAZ A REMOÇÃO;
                }
                if(opcao3==2){
                    ///listar todos os imoveis para venda;
                    ///DEVE SER PERGUNTADO AO USUARIO QUAL O INDICE DO IMOVEL QUE ELE VAI QUERER REMOVER.
                cout << "\t\tDIGITE O INDICE DO IMOVEL, QUE EH SEU NUMERO DE IDENTIFICACAO, QUE VOCE QUER REMOVER: " << endl;
                cin >> indice;
                ///A PARTIR DESSE INDICE, PUXA A CLASSE E FAZ A REMOÇÃO;
                }
            }
            if(opcao2==4){
                ///busca por BAIRRO, CIDADE, TITULO, VALOR MAIOR OU MENOR;
                cout << "\t\tESCOLHA DE QUE FORMA VOCE QUER BUSCAR UM IMOVEL PARA REMOCAO" << endl;
                cout << "\t\t\t1. POR TITULO" << endl;
                cout << "\t\t\t2. POR CIDADE" << endl;
                cout << "\t\t\t3. POR BAIRRO" << endl;
                cout << "\t\t\t4. POR VALOR" << endl;
                cin >> opcao3;
                if(opcao3==1){
                    ///Fazer busca por titulo;
                    cout << "\t\tDIGITE O TITULO: " << endl;
                    getline(cin, titulo);
                    getline(cin, titulo);
                    transform(titulo.begin(), titulo.end(), titulo.begin(), ::tolower);
                    cout << titulo << endl;
                    ///Completa com o que for preciso para a classe funcionar
                }
                if(opcao3==2){
                    ///Fazer busca por cidade;
                    cout << "\t\tDIGITE O NOME DA CIDADE: " << endl;
                    getline(cin, cidade);
                    getline(cin, cidade);
                    transform(cidade.begin(), cidade.end(), cidade.begin(), ::tolower);
                    cout << cidade << endl;
                    ///Completa com o que for preciso para a classe funcionar
                }
                if(opcao3==3){
                    ///Fazer busca por bairro;
                    cout << "\t\tDIGITE O NOME DO BAIRRO: " << endl;
                    getline(cin, bairro);
                    getline(cin, bairro);
                    transform(bairro.begin(), bairro.end(), bairro.begin(), ::tolower);
                    cout << bairro << endl;
                    ///Completa com o que for preciso para a classe funcionar
                }
                if(opcao3==4){
                    cout << "\t\tDESEJA FAZER A BUSCA PARA REMOCAO POR MENOR OU MAIOR VALOR?" << endl;
                    cout << "\t\t\t1. MAIOR" << endl;
                    cout << "\t\t\t2. MENOR" << endl;
                    cin >> opcao4;
                    if(opcao4==1){
                        ///busca por maior valor digitado;
                        cout << "\t\tDIGITE O VALOR: " << endl;
                        cin >> valor;
                        ///Realiza a busca e exibicao puxando da classe
                        ///AQUI FAZ A BUSCA USANDO O NUMERO DO MAIOR VALOR QUE O USUARIO DIGITAR, E NAO O INDICE
                    }
                    if(opcao4==2){
                        ///busca por menor valor digitado;
                        cout << "\t\tDIGITE O VALOR: " << endl;
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

            cout << "\t\tESCOLHA A OPCAO DESEJADA PARA CONSULTAR O IMOVEL QUE VOCE DESEJA MODIFICAR: " << endl;
            cout << "\t\t\t1. LISTAR TODOS OS IMOVEIS DISPONIVEIS" << endl;
            cout << "\t\t\t2. ESCOLHER O TIPO DO IMOVEL" << endl;
            cout << "\t\t\t3. LISTAR POR CATEGORIA DO IMOVEL" << endl;
            cout << "\t\t\t4. REALIZAR UMA BUSCA DIFERENCIADA" << endl;
            cin >> opcao2;
            if(opcao2==1){
                ///poe a listagem de todos os imoveis cadastrados no programa;
                ///DEVE SER PERGUNTADO AO USUARIO QUAL O INDICE DO IMOVEL QUE ELE VAI QUERER MODIFICAR.
                cout << "\t\tDIGITE O INDICE DO IMOVEL, QUE EH SEU NUMERO DE IDENTIFICACAO, QUE VOCE QUER MODIFICAR: " << endl;
                cin >> indice;
                ///A PARTIR DESSE INDICE, PUXA A CLASSE E FAZ A EDICAO;
                /**COMO?**/
            }
            if(opcao2==2){
                cout << "\t\tESCOLHA O TIPO DE IMOVEL VOCE DESEJA BUSCAR PARA MODIFICACAO: " << endl;
                cout << "\t\t\t1. CASA" << endl;
                cout << "\t\t\t2. APARTAMENTO" << endl;
                cout << "\t\t\t3. TERRENO" << endl;
                cin >> opcao3;
                if(opcao3==1){
                    ///buscar e listar CASAS
                    ///DEVE SER PERGUNTADO AO USUARIO QUAL O INDICE DO IMOVEL QUE ELE VAI QUERER MODIFICAR.
                cout << "\t\tDIGITE O INDICE DO IMOVEL, QUE EH SEU NUMERO DE IDENTIFICACAO, QUE VOCE QUER MODIFICAR: " << endl;
                cin >> indice;
                ///A PARTIR DESSE INDICE, PUXA A CLASSE E FAZ A EDICAO;

                }
                if(opcao3==2){
                    ///buscar e listar APARTAMENTOS
                    ///DEVE SER PERGUNTADO AO USUARIO QUAL O INDICE DO IMOVEL QUE ELE VAI QUERER MODIDICAR.
                cout << "\t\tDIGITE O INDICE DO IMOVEL, QUE EH SEU NUMERO DE IDENTIFICACAO, QUE VOCE QUER MODIDICAR: " << endl;
                cin >> indice;
                ///A PARTIR DESSE INDICE, PUXA A CLASSE E FAZ A EDIÇÃO;
                }
                if(opcao3==3){
                    ///buscar e listar TERRENOS
                    ///DEVE SER PERGUNTADO AO USUARIO QUAL O INDICE DO IMOVEL QUE ELE VAI QUERER MODIDICAR.
                cout << "\t\tDIGITE O INDICE DO IMOVEL, QUE EH SEU NUMERO DE IDENTIFICACAO, QUE VOCE QUER MODIDICAR: " << endl;
                cin >> indice;
                ///A PARTIR DESSE INDICE, PUXA A CLASSE E FAZ A EDIÇÃO;
                }
            }
            if(opcao2==3){
                cout << "\t\tDESEJA LISTAR IMOVEIS PARA ALUGUEL OU VENDA PARA A MODIFICACAO?" << endl;
                cout << "\t\tESCOLHA UMA OPCAO:" << endl;
                cout << "\t\t\t1. ALUGAR" << endl;
                cout << "\t\t\t2. VENDER" << endl;
                cin >> opcao3;
                if(opcao3==1){
                    ///listar todos os imoveis para aluguel;
                    ///DEVE SER PERGUNTADO AO USUARIO QUAL O INDICE DO IMOVEL QUE ELE VAI QUERER MODIDICAR.
                cout << "\t\tDIGITE O INDICE DO IMOVEL, QUE EH SEU NUMERO DE IDENTIFICACAO, QUE VOCE QUER MODIDICAR: " << endl;
                cin >> indice;
                ///A PARTIR DESSE INDICE, PUXA A CLASSE E FAZ A EDIÇÃO;
                }
                if(opcao3==2){
                    ///listar todos os imoveis para venda;
                    ///DEVE SER PERGUNTADO AO USUARIO QUAL O INDICE DO IMOVEL QUE ELE VAI QUERER MODIDICAR.
                cout << "\t\tDIGITE O INDICE DO IMOVEL, QUE EH SEU NUMERO DE IDENTIFICACAO, QUE VOCE QUER MODIDICAR: " << endl;
                cin >> indice;
                ///A PARTIR DESSE INDICE, PUXA A CLASSE E FAZ A EDIÇÃO;
                }
            }
            if(opcao2==4){
                ///busca por BAIRRO, CIDADE, TITULO, VALOR MAIOR OU MENOR;
                cout << "\t\tESCOLHA DE QUE FORMA VOCE QUER BUSCAR UM IMOVEL PARA MODIDICAR" << endl;
                cout << "\t\t\t1. POR TITULO" << endl;
                cout << "\t\t\t2. POR CIDADE" << endl;
                cout << "\t\t\t3. POR BAIRRO" << endl;
                cout << "\t\t\t4. POR VALOR" << endl;
                cin >> opcao3;
                if(opcao3==1){
                    ///Fazer busca por titulo;
                    cout << "\t\tDIGITE O TITULO: " << endl;
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
                    cout << "\t\tDIGITE O NOME DA CIDADE: " << endl;
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
                    cout << "\t\tDIGITE O NOME DO BAIRRO: " << endl;
                    getline(cin, bairro);
                    getline(cin, bairro);
                    transform(bairro.begin(), bairro.end(), bairro.begin(), ::tolower);
                    cout << bairro << endl;
                    ///AQUI FAZ A BUSCA USANDO O BAIRRO DA CIDADE, E NAO O INDICE;
                    ///PUXA A CLASSE E FAZ A EDICAO
                    ///Completa com o que for preciso para a classe funcionar
                }
                if(opcao3==4){
                    cout << "\t\tDESEJA FAZER A BUSCA PARA MODIFICACAO POR MENOR OU MAIOR VALOR?" << endl;
                    cout << "\t\t\t1. MAIOR" << endl;
                    cout << "\t\t\t2. MENOR" << endl;
                    cin >> opcao4;
                    if(opcao4==1){
                        ///busca por maior valor digitado;
                        cout << "\t\tDIGITE O VALOR: " << endl;
                        cin >> valor;
                        ///Realiza a busca e exibicao puxando da classe
                        ///AQUI FAZ A BUSCA USANDO O NUMERO DO MAIOR VALOR QUE O USUARIO DIGITAR, E NAO O INDICE
                        ///PUXA A CLASSE E FAZ A EDICAO
                    }
                    if(opcao4==2){
                        ///busca por menor valor digitado;
                        cout << "\t\tDIGITE O VALOR: " << endl;
                        cin >> valor;
                        ///Realiza a busca e exibicao puxando da classe
                        ///AQUI FAZ A BUSCA USANDO O NUMERO DO MENOR VALOR QUE O USUARIO DIGITAR, E NAO O INDICE
                        ///PUXA A CLASSE E FAZ A EDICAO
                    }
                }
            }
        }

        cout << "\t\t\tDESEJA CONTINUAR NO PROGRAMA E VOLTAR PARA O MENU INICIAL?" << endl;
        cout << "\t\t1. SIM" << endl;
        cout << "\t\t2. NAO" << endl;
        cin >> x;

        arquivo.close();
    }
    return 0;
}
