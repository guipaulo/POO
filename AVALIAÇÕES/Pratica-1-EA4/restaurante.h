#include <iostream>
#include <string>
#include "empresa.h"

using namespace std;

class Restaurante: public Empresa {
  protected:
    string tipoComida;
    float precoMedio;
  public:
    Restaurante();
    Restaurante(string, string, string, string, int, double, string, float);
    void exibirRestaurante();
};