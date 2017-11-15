#include "funcoes.cpp"
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;


void menu_valores_prontos()
{
	int op = -1;
    int info = 0;
    while(op != 0){

      cout << "--- Valores de teste---" << endl;
      cout << "1 - >XXX_XXXX_XXXX" << endl;
      cout << "2 - >XXXX_XX_XX" << endl;
      cout << "0 - Voltar" << endl;

      cin >> op;

      switch(op)
      {
      	case 1:
      	   trabalharMaquina(">XXX_XXXX_XXXX");
      		break;
      		
      	case 2:
      	  trabalharMaquina(">XXXX_XX_XX");
      	  break;

      	case 0:
      	   cout << "voltando ao menu principal" << endl;
      		break;

      	default:
      		cout << "instrução inválida" << endl;
      }
      
    }

}


void menu(){
    int op = -1;
    int info = 0;
    while(op != 0){

      cout << "--- Maquina de Turing---" << endl;
      cout << "1 - Testar Valores prontos" << endl;
      cout << "0 - Sair" << endl;

      cin >> op;

      switch(op)
      {
      	case 1:
      	   menu_valores_prontos();
      		break;

      	case 0:
      	   cout << "encerrando programa" << endl;
      		break;

      	default:
      		cout << "instrução inválida" << endl;
      }
      
    }
}


int main(){
    menu(); 
  
    
    return 0;  
}
