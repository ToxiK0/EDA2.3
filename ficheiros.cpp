#include <iostream>
#include <fstream>
#include <string>
#include "ficheiros.h"

using namespace std;

int numLinhas(string caminhoFicheiro) { // função para contar linhas dos ficheiros
	int numLinhas = 0;
	ifstream ficheiro;
	string linha = "";
	ficheiro.open(caminhoFicheiro, ios::in);
	if (ficheiro.is_open()) {
		while (getline(ficheiro, linha)) {
			numLinhas = numLinhas + 1;
		}
	}
	ficheiro.close();
	return numLinhas;
}

void carregaArrays(string* vetor, string caminhoFicheiro) { // preenchimento dos arrays com os dados dos ficheiros
	ifstream ficheiro;
	int i = 0;
	string linha = "";
	ficheiro.open(caminhoFicheiro, ios::in); // ios - ficheiro só de leirura

	if (ficheiro.is_open()) {
		while (getline(ficheiro, linha)) {
			vetor[i] = linha;
			i++;
		}

	}
	ficheiro.close();
}