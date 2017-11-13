#include "tabela_acoes.cpp"
#include <iostream>
#include <string>

using namespace std;

#define ESTADOS 9
#define SIMBOLOS 3

void teste()
{
	cout << "conseguiu conectar ao objeto" << endl;

	struct dado_tabela tabela[ESTADOS][SIMBOLOS];

	tabela1(tabela);

}