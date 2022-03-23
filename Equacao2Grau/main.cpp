#include <iostream>
#include "equacao.h"

using namespace std;

int main() {

  Equacao2Grau E1 = Equacao2Grau(2, 3, 3);

  cout << "Delta de E1: " << E1.CalculaDelta() << endl;
  E1.CalculaRaizes();
  cout << "\n";

  Equacao2Grau E2 = Equacao2Grau(3, 4, 1);

  cout << "Delta de E2: " << E2.CalculaDelta() << endl;
  E2.CalculaRaizes();
  cout << "\n";

  Equacao2Grau E3 = Equacao2Grau(1, 7, 9);

  cout << "Delta de E3: " << E3.CalculaDelta() << endl;
  E3.CalculaRaizes();
  cout << "\n";
  
}