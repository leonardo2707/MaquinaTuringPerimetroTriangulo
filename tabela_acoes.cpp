#include <iostream>
#define ESTADOS 9
#define SIMBOLOS 3

using namespace std;

struct dado_tabela
{
	int ativo = 1;
	char escrever_simbolo;
	int prox_estado;
	char direcao;
	char parada = 'N';
	
};

/*
simbolo 0 = inicial
simbolo 1 = X
simbolo 2 = _
*/

//dado [ESTADOS][SIMBOLOS]
void tabela1(dado_tabela tabela[ESTADOS][SIMBOLOS])
{
	struct dado_tabela dado;

	int j = 0;
	for(int i = 0; i <= ESTADOS; i++)
	{
		for(j = 0; j <= SIMBOLOS; j++)
		{
			
			dado.ativo = '0';
			tabela[i][j] = dado;
		}
		j=0;
	}


	dado.escrever_simbolo = '>';
	dado.prox_estado = 1;
	dado.direcao = 'D';
	dado.ativo = '1';
	//tabela[0][>]
	tabela[0][0] = dado;

	dado.prox_estado = 1;
	dado.escrever_simbolo = 'X';
	dado.direcao = 'D';
	dado.ativo = '1';
	//tabela[1][X]
	tabela[1][1] = dado;

	dado.prox_estado = 2;
	dado.escrever_simbolo = 'X';
	dado.direcao = 'D';
	dado.ativo = '1';
	//tabela[1][_]
	tabela[1][2] = dado;

	dado.prox_estado = 2;
	dado.escrever_simbolo = 'X';
	dado.direcao = 'D';
	dado.ativo = '1';
	//tabela[2][X]
	tabela[2][1] = dado;

	dado.prox_estado = 3;
	dado.escrever_simbolo = 'X';
	dado.direcao = 'D';
	dado.ativo = '1';
	//tabela[2][_]
	tabela[2][2] = dado;

	dado.prox_estado = 3;
	dado.escrever_simbolo = 'X';
	dado.direcao = 'D';
	dado.ativo = '1';
	//tabela[3][X]
	tabela[3][1] = dado;

	dado.prox_estado = 4;
	dado.escrever_simbolo = '_';
	dado.direcao = 'D';
	dado.ativo = '1';
	//tabela[3][_]
	tabela[3][2];

	//tabela[4][_]
	dado.ativo = '1';
	dado.prox_estado = 0;
	tabela[4][2].parada = 'S';

	//aqui é para teste e ver se inseriu os dados certinho
	cout << "chegou aqui" << endl;
	j = 0;
	for(int i = 0; i <= ESTADOS; i++)
	{
		for(j = 0; j <= SIMBOLOS; j++)
		{
			
			if(tabela[i][j].ativo != '0')
			{
				cout << "[" << i << "] [" << j << "] ativo = " << tabela[i][j].ativo << endl;
				//cout << tabela[i][j].prox_estado << ", " << tabela[i][j].escrever_simbolo << ", " << tabela[i][j].direcao << endl;
			}else
			{
				cout << "[" << i << "] [" << j << "] " << endl;
			}
		}
		j=0;
	}


}




