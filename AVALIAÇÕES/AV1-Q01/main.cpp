#include <iostream>
#include "complexo.h"

using namespace std;

int main() {

  Complexo C1 = Complexo(3, 5);
  Complexo C2 = Complexo(3, 3);
  Complexo C4 = Complexo(2, 8);
  Complexo C5 = Complexo(4, 2);
  Complexo C7 = Complexo(4, 4);
  Complexo C8 = Complexo(2, 3);
  Complexo C10 = Complexo(2, 4);
  Complexo C11 = Complexo(1, 8);

  cout << "------- TESTE DE ADIÇÃO ------" << endl;
  Complexo C3 = C1 + C2;
  cout << C3 << endl;

  cout << "------- TESTE DE SUBTRAÇÃO ------" << endl;
  Complexo C6 = C4 - C5;
  cout << C6 << endl;

  cout << "------- TESTE DE MULTIPLICAÇÃO ------" << endl;
  Complexo C9 = C7 * C8;
  cout << C9 << endl;

  cout << "------- TESTE DE DIVISÃO ------" << endl;
  Complexo C12 = C10 / C11;
  cout << C12 << endl;

  cout << "------- TESTE DE ATRIBUIÇÃO/IGUALDADE ------" << endl;
  Complexo C14 = C12;

  if (C14==C12){
    cout << "Iguais." << endl;
  }
  else{
    cout << "Diferentes." << endl;    
  }
  
}