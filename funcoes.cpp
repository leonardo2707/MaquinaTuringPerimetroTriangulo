#include "tabela_acoes.cpp"
#include <iostream>
#include <string.h>

using namespace std;

#define ESTADOS 9
#define SIMBOLOS 3

void trabalharMaquina(string fita)
{
	fita = fita + "___";
	cout <<  "A FITA É ESTA = " << fita << endl;

	int estadoAtual = 0;
	char simboloAtual = '>';
	int tamanho = fita.size();


	int i = 0;
	for(i = 0; i < fita.size(); i++)
	{
		cout << "[" << fita[i] << "]" << endl;
	}
	
	dado_tabela dado;
	//se a maquina ficar no estado -1 ela deve parar pois é o estado de parada
	while(estadoAtual != -1)
	{

		dado = tabelaAcao1(simboloAtual, estadoAtual);
		cout << dado.escrever_simbolo << " " << dado.prox_estado << " " << dado.direcao << endl;
		estadoAtual = dado.prox_estado;
	}

	cout << "Maquina parada" << endl;

}



