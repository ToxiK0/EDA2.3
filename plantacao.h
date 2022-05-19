#pragma once
#include <iostream>
#include <string>

using namespace std;

struct nodeProduto {
	string nome;
	string area;
	string fornecedor;
	int tempoRega; // Aleatorio entre 1 e 5
	float resistencia;  //os tempos são contados em ciclos e a resistencia entre 0,2 e 0,8.
	nodeProduto* seguinte; //Produto Seguinte
};

struct nodeHorta {
	char identificador;
	string responsavel;
	string area;
	int capacidade;
	nodeProduto* produtosHead; //Início da Lista Ligada.
	nodeHorta* seguinte; //Horta Seguinte
};
