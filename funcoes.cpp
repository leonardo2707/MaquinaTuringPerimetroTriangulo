#include "tabela_acoes.cpp"
#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

#define ESTADOS 9
#define SIMBOLOS 3

void verFitaPosicao(string fita, int posicao);
void verFita(string fita);
string caixaAlta(string fita);
void trabalharMaquina01(string fita);
void trabalharMaquina02(string fita);


//função que vai executar a maquina de turing com a tabela de ação 1
void trabalharMaquina01(string fita)
{
	fita = fita + "___";
	int estadoAtual = 0;
	char simboloAtual = '>';
	int tamanho = fita.size();
	int i = 0;
	dado_tabela dado;

	verFita(fita);
	//se a maquina ficar no estado -1 ela deve parar pois é o estado de parada
	while(estadoAtual != -1)
	{
		
		simboloAtual = fita[i];
		cout << "estado atual: " << estadoAtual << endl;
		dado = tabelaAcao1(simboloAtual, estadoAtual);

		estadoAtual = dado.prox_estado;
		fita[i] = dado.escrever_simbolo;
		verFitaPosicao(fita, i);

		if(dado.direcao == 'D')
		{
			i++;
		}else
		{
			i--;
		}

		if(i < 0 || i > tamanho)
		{
			cout << "erro na maquina, cabeçote esta fora da fita" << endl;
			estadoAtual = -1;
		}
	}

	cout << endl << "Maquina parada" << endl;
	cout << "A fita foi finalizada desta maneira:" << endl << endl;
	verFita(fita);
	cout << endl << "Voltando ao menu da fita" << endl << endl;

}


//função que vai executar a maquina de turing com a tabela de ação 2
void trabalharMaquina02(string fita)
{
	fita = fita + "___";
	int estadoAtual = 0;
	char simboloAtual = '>';
	int tamanho = fita.size();
	int i = 0;
	dado_tabela dado;

	verFita(fita);
	//se a maquina ficar no estado -1 ela deve parar pois é o estado de parada
	while(estadoAtual != -1)
	{
		
		simboloAtual = fita[i];
		cout << "estado atual: " << estadoAtual << endl;
		dado = tabelaAcao2(simboloAtual, estadoAtual);

		estadoAtual = dado.prox_estado;
		fita[i] = dado.escrever_simbolo;
		verFitaPosicao(fita, i);

		if(dado.direcao == 'D')
		{
			i++;
		}else
		{
			i--;
		}

		if(i < 0 || i > tamanho)
		{
			cout << "erro na maquina, cabeçote esta fora da fita" << endl;
			estadoAtual = -1;
		}
	}

	cout << endl << "Maquina parada" << endl;
	cout << "A fita foi finalizada desta maneira:" << endl << endl;
	verFita(fita);
	cout << endl << "Voltando ao menu da fita" << endl << endl;

}




//mostrar a fita e em que posição o sistema se encontra
void verFitaPosicao(string fita, int posicao)
{
	for(int i = 0; i < fita.size(); i++)
	{
		if(posicao == i)
		{
			cout << "[" << fita[i] << "*] ";

		}else
		{
			cout << "[" << fita[i] << "] ";
		}
	   
	}
	cout <<  endl << endl;
}


//mostrar a fita
void verFita(string fita)
{
	for(int i = 0; i < fita.size(); i++)
	{
			cout << "[" << fita[i] << "] ";
	}
	cout <<  endl << endl;
}

//transforma a fita em letras maiuscula
string caixaAlta(string fita)
{
	for(int i = 0; i < fita.size(); i++)
	{
		fita[i] = toupper(fita[i]);
	}

	return fita;
}



