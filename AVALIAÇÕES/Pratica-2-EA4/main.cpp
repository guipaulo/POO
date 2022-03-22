#include <iostream>
#include "Corrente.h"
#include "Poupanca.h"

using namespace std;

int main() {

  Corrente C1 = Corrente(100.0, 500.0, 10.0);
  cout << "Saldo de C1 (C/C): " << C1.getSaldo() << endl;
  cout << "\n";
  Poupanca C2 = Poupanca(100.0, 500.0, 10);
  cout << "Saldo de C2 (Poupança): " << C2.getSaldo() << endl;
  cout << "\n";

  C1.CompraDebito(10);
  cout << "Saldo de C1 (depois da 1° compra): " << C1.getSaldo() << endl;
  cout << "\n";
  C1.CompraCredito(10);
  cout << "Limite de C1 (depois da 2° compra): " << C1.getLimite() << endl;
  cout << "\n";
  C1.CompraCredito(50000);
  cout << "Limite de C1 (depois da 3° compra): " << C1.getLimite() << endl;
  cout << "\n";
  cout << "Rendimento de C2: " << C2.calculaRendimento() << endl;
  
}