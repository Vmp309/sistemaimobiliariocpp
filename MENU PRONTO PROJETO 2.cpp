#include <iostream>
#include <string>

using namespace std;

int main (){
    int opcao1, opcao2, opcao3, opcao4, indice, x=1;
    double valor;
    string titulo, cidade, bairro;

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
        if(opcao1==1){
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
                    cin >> titulo; ///IMPORTANTE DESTACAR QUE NAO DEVE SER CONFUNDIDO MAIUSCULAS DE MINUSCULAS, DEVEM SER TIDAS COMO IGUAIS
                    cout << titulo; ///IMPORTANTE DESTACAR QUE SO ESTA CAPTURANDO A PRIMEIRA PALAVRA DA STRING
                    ///Completa com o que for preciso para a classe funcionar
                }
                if(opcao3==2){
                    ///Fazer busca por cidade;
                    cout << "\t\tDIGITE O NOME DA CIDADE: " << endl;
                    cin >> cidade; ///IMPORTANTE DESTACAR QUE NAO DEVE SER CONFUNDIDO MAIUSCULAS DE MINUSCULAS, DEVEM SER TIDAS COMO IGUAIS
                    cout << cidade; ///IMPORTANTE DESTACAR QUE SO ESTA CAPTURANDO A PRIMEIRA PALAVRA DA STRING
                    ///Completa com o que for preciso para a classe funcionar
                }
                if(opcao3==3){
                    ///Fazer busca por bairro;
                    cout << "\t\tDIGITE O NOME DO BAIRRO: " << endl;
                    cin >> bairro; ///IMPORTANTE DESTACAR QUE NAO DEVE SER CONFUNDIDO MAIUSCULAS DE MINUSCULAS, DEVEM SER TIDAS COMO IGUAIS
                    cout << bairro; ///IMPORTANTE DESTACAR QUE SO ESTA CAPTURANDO A PRIMEIRA PALAVRA DA STRING
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
        if(opcao1==2){
            ///chama a classe responsavel pelo cadastro
            ///como deve ser cadastrado apenas um imovel por mes, vou por a opcao para escolha do tipo de imovel, e em seguida, por as informações.
            cout << "QUE TIPO DE IMOVEL DESEJA CADASTRAR?" << endl;
            cout << "\t\t\t1. CASA" << endl;
            cout << "\t\t\t2. APARTAMENTO" << endl;
            cout << "\t\t\t3. TERRENO" << endl;
            cin >> opcao2;
                if(opcao2==1){
                    ///comeca a pedir as informações para o cadastro da CASA
                }
                if(opcao2==2){
                    ///comeca a pedir as informações para o cadastro do APARTAMENTO
                }
                if(opcao2==3){
                    ///comeca a pedir as informações para o cadastro do TERRENO
                }
        }
        if(opcao1==3){
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
                    cin >> titulo;   ///IMPORTANTE DESTACAR QUE NAO DEVE SER CONFUNDIDO MAIUSCULAS DE MINUSCULAS, DEVEM SER TIDAS COMO IGUAIS
                    cout << titulo; ///IMPORTANTE DESTACAR QUE SO ESTA MEMORIZANDO A PRIMEIRA PALAVRA DA STRING
                    ///AQUI FAZ A BUSCA USANDO O TITULO, E NAO O INDICE;
                    ///Completa com o que for preciso para a classe funcionar
                }
                if(opcao3==2){
                    ///Fazer busca por cidade;
                    cout << "\t\tDIGITE O NOME DA CIDADE: " << endl;
                    cin >> cidade;   ///IMPORTANTE DESTACAR QUE NAO DEVE SER CONFUNDIDO MAIUSCULAS DE MINUSCULAS, DEVEM SER TIDAS COMO IGUAIS
                    cout << cidade; ///IMPORTANTE DESTACAR QUE SO ESTA MEMORIZANDO A PRIMEIRA PALAVRA DA STRING
                    ///AQUI FAZ A BUSCA USANDO O NOME DA CIDADE, E NAO O INDICE;
                    ///Completa com o que for preciso para a classe funcionar
                }
                if(opcao3==3){
                    ///Fazer busca por bairro;
                    cout << "\t\tDIGITE O NOME DO BAIRRO: " << endl;
                    cin >> bairro;   ///IMPORTANTE DESTACAR QUE NAO DEVE SER CONFUNDIDO MAIUSCULAS DE MINUSCULAS, DEVEM SER TIDAS COMO IGUAIS
                    cout << bairro; ///IMPORTANTE DESTACAR QUE SO ESTA MEMORIZANDO A PRIMEIRA PALAVRA DA STRING
                    ///AQUI FAZ A BUSCA USANDO O NOME DO BAIRRO, E NAO O INDICE
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
        if(opcao1==4){
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
                    cin >> titulo;   ///IMPORTANTE DESTACAR QUE NAO DEVE SER CONFUNDIDO MAIUSCULAS DE MINUSCULAS, DEVEM SER TIDAS COMO IGUAIS
                    cout << titulo; ///IMPORTANTE DESTACAR QUE SO ESTA MEMORIZANDO A PRIMEIRA PALAVRA DA STRING
                    ///AQUI FAZ A BUSCA USANDO O TITULO, E NAO O INDICE;
                    ///PUXA A CLASSE E FAZ A EDICAO;
                    ///Completa com o que for preciso para a classe funcionar
                }
                if(opcao3==2){
                    ///Fazer busca por cidade;
                    cout << "\t\tDIGITE O NOME DA CIDADE: " << endl;
                    cin >> cidade;   ///IMPORTANTE DESTACAR QUE NAO DEVE SER CONFUNDIDO MAIUSCULAS DE MINUSCULAS, DEVEM SER TIDAS COMO IGUAIS
                    cout << cidade; ///IMPORTANTE DESTACAR QUE SO ESTA MEMORIZANDO A PRIMEIRA PALAVRA DA STRING
                    ///AQUI FAZ A BUSCA USANDO O NOME DA CIDADE, E NAO O INDICE;
                    ///PUXA A CLASSE E FAZ A EDICAO
                    ///Completa com o que for preciso para a classe funcionar
                }
                if(opcao3==3){
                    ///Fazer busca por bairro;
                    cout << "\t\tDIGITE O NOME DO BAIRRO: " << endl;
                    cin >> bairro;   ///IMPORTANTE DESTACAR QUE NAO DEVE SER CONFUNDIDO MAIUSCULAS DE MINUSCULAS, DEVEM SER TIDAS COMO IGUAIS
                    cout << bairro; ///IMPORTANTE DESTACAR QUE SO ESTA MEMORIZANDO A PRIMEIRA PALAVRA DA STRING
                    ///AQUI FAZ A BUSCA USANDO O NOME DO BAIRRO, E NAO O INDICE
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
    }
    return 0;
}

