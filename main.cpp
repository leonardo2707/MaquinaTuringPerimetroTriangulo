#include "funcoes.cpp"
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;


void menu(){
    int op = -1;
    int info = 0;
    while(op != 0){
      
      teste();
      cout << "--- Maquina de Turing---" << endl;
      cout << "0 - Sair" << endl;

      cin >> op;

      
    }
}



int main(){
    menu(); 
  
    
    return 0;  
}
