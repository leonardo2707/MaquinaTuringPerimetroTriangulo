#include <iostream>
#define ESTADOS 9
#define SIMBOLOS 3

using namespace std;

struct dado_tabela
{
	
	char escrever_simbolo;
	int prox_estado;
	char direcao;
	
};

/*
simbolo 0 = inicial
simbolo 1 = X
simbolo 2 = _
*/

//dado [ESTADOS][SIMBOLOS]
dado_tabela tabelaAcao1(char simboloAtual, int estadoAtual)
{
	dado_tabela dado;

	dado.escrever_simbolo = 'X';
	dado.prox_estado = -1;
	dado.direcao = 'D';

	return dado;
	//no caso aqui vai ficar o que deve acontencer em cada simbolo ou regra especifica, se ele não entrar em nenhum a maquina para

}




