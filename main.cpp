#include <iostream>
#include "ficheiros.h"

using namespace std;

int main() {
	//pedra
	srand(time(NULL));// "seed" para fun��o random
	locale::global(locale(""));

	//cria��o dos arrays com os dados dos ficheiros1
	string* areas = new string[numLinhas("areas.txt")];
	string* produtos = new string[numLinhas("produtos.txt")];
	string* fornecedores = new string[numLinhas("fornecedores.txt")];
	carregaArrays(areas, "areas.txt");
	carregaArrays(produtos, "produtos.txt");
	carregaArrays(fornecedores, "fornecedores.txt");



	//Auxiliares funcionamento do Menu
	bool sair = false;
	bool voltar = false;
	char opcao;

	//contador de ciclos
	int ciclos = 0;

	do {


		//apresenta��o do menu
		cout << " (s)eguinte ********** (g)est�o **********  sai(r) " << endl << " Selecione a sua op��o: ";
		cin >> opcao;
		cout << endl;
		switch (opcao)
		{

		case 's': //execu��o do funcionamento da planta��o


			break;
		case 'g': //Menu de gest�o
			do {
				cout << "********* BEM-VINDO GESTOR *********" << endl;
				cout << endl << "(1).Colher Produto" << endl;
				cout << "(2).Atualizar tempo de rega" << endl;
				cout << "(3).Gravar Planta��o" << endl;
				cout << "(4).Carregar Planta��o" << endl;
				cout << "(5).Imprimir Produtos Colhidos" << endl;
				cout << "(6).Criar nova �rea" << endl;
				cout << "(7).Alterar �rea" << endl;
				cout << "(0).Voltar" << endl;
				cout << "Selecione uma op��o: ";
				cin >> opcao;
				cout << endl;
				switch (opcao)
				{

				case'1': //Colher Produto

					break;

				case'2': //.Atualizar tempo de rega

					break;

				case'3': //Gravar Planta��o

					break;

				case'4': //Carregar Planta��o

					break;

				case'5': //Imprimir Produtos Colhidos

					break;

				case'6': //Criar Nova Area

					break;
				case'7'://Alterar Area

					break;

				case '0': //Voltar
					voltar = true;
					break;

					{
				default:cout << "Escolha uma op��o v�lida!\n";
					}

				}
			} while (!voltar);
			voltar = false;
			break;

		case 'r': //fechar o programa
			sair = true;
			break;


		default:cout << "Escolha uma op��o v�lida!\n";


		}

	} while (!sair);


	return 0;
}