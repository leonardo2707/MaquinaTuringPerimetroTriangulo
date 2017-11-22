#include "funcoes.cpp"
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;


void menuEscolhaMaquina(string fita)
{
	int op = -1;
    while(op != 0){
      cout << "Qual maquina de turing voce deseja utilizar?" << endl << endl;
      cout << "--- Escolha da Maquina---" << endl;
      cout << "1 - Maquina 01 (mais rapida, utiliza menos estados)" << endl;
      cout << "2 - Maquina 02 (mais complexa, utiliza mais estados)" << endl;
      cout << "0 - Sair" << endl;

      cin >> op;

      switch(op)
      {
      	case 1:
      	   trabalharMaquina01(fita);
      	   op = 0;
      		break;

      	case 2:
      	   trabalharMaquina02(fita);
      	   op = 0;
      	   break;

      	case 0:
      	   cout << "Voltando para menu da fita" << endl;
      		break;

      	default:
      		cout << "instrução inválida" << endl;
      }
      
    }
}


void menu_fitas_prontas()
{
	int op = -1;
    while(op != 0){

      cout << "--- Valores de teste para a fita---" << endl;
      cout << "1 - >XXX_XXXX_XXXX" << endl;
      cout << "2 - >XXXX_XX_XX" << endl;
      cout << "0 - Voltar" << endl;

      cin >> op;

      switch(op)
      {
      	case 1:
      	   menuEscolhaMaquina(">XXX_XXXX_XXXX");
      		break;

      	case 2:
      	   menuEscolhaMaquina(">XXXX_XX_XX");
      	    break;

      	case 0:
      	   cout << "voltando ao menu principal" << endl;
      		break;

      	default:
      		cout << "instrução inválida" << endl;
      }
      
    }

}

void menu_fita()
{
	string fita;

	cout << "> - Simbolo inicial" << endl;
	cout << "X - Simbolo com valor" << endl;
	cout << "_ - Simbolo Vazio" << endl;
	cout << "Por exemplo: >XXX_XX_XX" << endl << endl;

	cout << "Digite a fita que sera lida pela maquina de turing ou 0 (ZERO) para voltar" << endl;
	cin >> fita;

	if(fita[0] != '0')
	{
		menuEscolhaMaquina(caixaAlta(fita));
	}
    

}


void menu(){
    int op = -1;
    while(op != 0){

      cout << "--- Maquina de Turing---" << endl;
      cout << "1 - Testar Valores de fita ja setados" << endl;
      cout << "2 - Digite a fita que voce deseja ser lida" << endl;
      cout << "0 - Sair" << endl;

      cin >> op;

      switch(op)
      {
      	case 1:
      	   menu_fitas_prontas();
      		break;
      	case 2:
      	   menu_fita();
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
