#include <iostream>

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


	if(estadoAtual == 0 && simboloAtual == '>')
	{
		dado.prox_estado = 1;
		dado.escrever_simbolo = '>';
		dado.direcao = 'D';

		return dado;
	}

	if(estadoAtual == 1 && simboloAtual == 'X')
	{
		dado.prox_estado = 1;
		dado.escrever_simbolo = 'X';
		dado.direcao = 'D';
		return dado;
	}

	if(estadoAtual == 1 && simboloAtual == '_')
	{
		dado.prox_estado = 2;
		dado.escrever_simbolo = 'X';
		dado.direcao = 'D';
		return dado;
	}

	if(estadoAtual == 2 && simboloAtual == 'X')
	{
		dado.prox_estado = 2;
		dado.escrever_simbolo = 'X';
		dado.direcao = 'D';
		return dado;
	}

	if(estadoAtual == 2 && simboloAtual == '_')
	{
		dado.prox_estado = 3;
		dado.escrever_simbolo = 'X';
		dado.direcao = 'D';
		return dado;
	}

	if(estadoAtual == 3 && simboloAtual == 'X')
	{
		dado.prox_estado = 3;
		dado.escrever_simbolo = 'X';
		dado.direcao = 'D';
		return dado;
	}

	if(estadoAtual == 3 && simboloAtual == '_')
	{
		dado.prox_estado = 4;
		dado.escrever_simbolo = '_';
		dado.direcao = 'E';
		return dado;
	}

	if(estadoAtual == 4 && simboloAtual == 'X')
	{
		dado.prox_estado = 5;
		dado.escrever_simbolo = '_';
		dado.direcao = 'E';
		return dado;
	}

	if(estadoAtual == 5 && simboloAtual == 'X')
	{
		dado.prox_estado = 6;
		dado.escrever_simbolo = '_';
		dado.direcao = 'E';
		return dado;
	}

	if(estadoAtual == 6 && simboloAtual == 'X')
	{
		dado.prox_estado = -1;
		dado.escrever_simbolo = 'X';
		dado.direcao = 'E';
		return dado;
	}




	//se não entrar em nenhum dos if
	dado.escrever_simbolo = 'P';
	dado.prox_estado = -1;
	dado.direcao = 'D';

	cout << "ERROR" << endl;
	cout << "ERROR" << endl;
	cout << "ERROR" << endl;
	cout << "Simbolo com estado não reconhecido pela maquina" << endl;
	cout << "ERROR" << endl;
	cout << "ERROR" << endl;
	cout << "ERROR" << endl;

	return dado;
}


dado_tabela tabelaAcao2(char simboloAtual, int estadoAtual){

	dado_tabela dado;


	if(estadoAtual == 0 && simboloAtual == '>')
	{
		dado.prox_estado = 1;
		dado.escrever_simbolo = '>';
		dado.direcao = 'D';

		return dado;
	}

	if(estadoAtual == 1 && simboloAtual == 'X')
	{
		dado.prox_estado = 1;
		dado.escrever_simbolo = 'X';
		dado.direcao = 'D';
	   return dado;
	}

	if(estadoAtual == 1 && simboloAtual == '_')
	{
		dado.prox_estado = 2;
		dado.escrever_simbolo = '_';
		dado.direcao = 'D';
		return dado;
	}


	if(estadoAtual == 2 && simboloAtual == 'X')
	{
		dado.prox_estado = 2;
		dado.escrever_simbolo = 'X';
		dado.direcao = 'D';
		return dado;
	}

	if(estadoAtual == 2 && simboloAtual == '_')
	{
		dado.prox_estado = 3;
		dado.escrever_simbolo = '_';
		dado.direcao = 'D';
		return dado;
	}

	if(estadoAtual == 3 && simboloAtual == 'X')
	{
		dado.prox_estado = 3;
		dado.escrever_simbolo = 'X';
		dado.direcao = 'D';
		return dado;
	}

	if(estadoAtual == 3 && simboloAtual == '_')
	{
		dado.prox_estado = 4;
		dado.escrever_simbolo = '_';
		dado.direcao = 'D';
		return dado;
	}


	if(estadoAtual == 4 && simboloAtual == '_')
	{
		dado.prox_estado = 5;
		dado.escrever_simbolo = '_';
		dado.direcao = 'E';
		return dado;
	}

	if(estadoAtual == 5 && simboloAtual == 'X')
	{
		dado.prox_estado = 5;
		dado.escrever_simbolo = 'X';
		dado.direcao = 'E';
		return dado;
	}

	if(estadoAtual == 5 && simboloAtual == '_')
	{
		dado.prox_estado = 6;
		dado.escrever_simbolo = 'X';
		dado.direcao = 'D';
		return dado;
	}

	if(estadoAtual == 6 && simboloAtual == 'X')
	{
		dado.prox_estado = 6;
		dado.escrever_simbolo = 'X';
		dado.direcao = 'D';
		return dado;
	}

	if(estadoAtual == 6 && simboloAtual == '_')
	{
		dado.prox_estado = 7;
		dado.escrever_simbolo = '_';
		dado.direcao = 'E';
		return dado;
	}

	if(estadoAtual == 7 && simboloAtual == 'X')
	{
		dado.prox_estado = 8;
		dado.escrever_simbolo = '_';
		dado.direcao = 'E';
		return dado;
	}

	if(estadoAtual == 8 && simboloAtual == 'X')
	{
		dado.prox_estado = 8;
		dado.escrever_simbolo = 'X';
		dado.direcao = 'E';
		return dado;
	}

	if(estadoAtual == 8 && simboloAtual == '_')
	{
		dado.prox_estado = 6;
		dado.escrever_simbolo = 'X';
		dado.direcao = 'D';
		return dado;
	}

	if(estadoAtual == 8 && simboloAtual == '>')
	{
		dado.prox_estado = -1;
		dado.escrever_simbolo = '>';
		dado.direcao = 'D';
		return dado;
	}




	//se não entrar em nenhum dos if
	dado.escrever_simbolo = 'P';
	dado.prox_estado = -1;
	dado.direcao = 'D';

	cout << "ERROR" << endl;
	cout << "ERROR" << endl;
	cout << "ERROR" << endl;
	cout << "Simbolo com estado não reconhecido pela maquina" << endl;
	cout << "ERROR" << endl;
	cout << "ERROR" << endl;
	cout << "ERROR" << endl;

	return dado;
}



