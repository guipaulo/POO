#include <iostream>
#include "restaurante.h"

using namespace std;

int main() {
  Empresa E1 = Empresa("IFPB", "Rua 1", "Campina Grande", "PB", 59380000, 1111);

  Restaurante R1("Chinesa 1", "Rua 2", "Campina Grande", "PB", 59380000, 2222, "Comida Chinesa", 4.5);

  E1.exibeEmpresa();
  cout << "\n";
  R1.exibirRestaurante();
  
}