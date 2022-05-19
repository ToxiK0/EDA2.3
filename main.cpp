#include <iostream>
#include "ficheiros.h"

using namespace std;

int main() {
	//pedra
	srand(time(NULL));// "seed" para função random
	locale::global(locale(""));

	//criação dos arrays com os dados dos ficheiros1
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


		//apresentação do menu
		cout << " (s)eguinte ********** (g)estão **********  sai(r) " << endl << " Selecione a sua opção: ";
		cin >> opcao;
		cout << endl;
		switch (opcao)
		{

		case 's': //execução do funcionamento da plantação


			break;
		case 'g': //Menu de gestão
			do {
				cout << "********* BEM-VINDO GESTOR *********" << endl;
				cout << endl << "(1).Colher Produto" << endl;
				cout << "(2).Atualizar tempo de rega" << endl;
				cout << "(3).Gravar Plantação" << endl;
				cout << "(4).Carregar Plantação" << endl;
				cout << "(5).Imprimir Produtos Colhidos" << endl;
				cout << "(6).Criar nova área" << endl;
				cout << "(7).Alterar área" << endl;
				cout << "(0).Voltar" << endl;
				cout << "Selecione uma opção: ";
				cin >> opcao;
				cout << endl;
				switch (opcao)
				{

				case'1': //Colher Produto

					break;

				case'2': //.Atualizar tempo de rega

					break;

				case'3': //Gravar Plantação

					break;

				case'4': //Carregar Plantação

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
				default:cout << "Escolha uma opção válida!\n";
					}

				}
			} while (!voltar);
			voltar = false;
			break;

		case 'r': //fechar o programa
			sair = true;
			break;


		default:cout << "Escolha uma opção válida!\n";


		}

	} while (!sair);


	return 0;
}