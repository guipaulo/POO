#include "Circulo.h"
#include <cmath>

Circulo::Circulo(int raio) {
  this->raio = raio;
}

double Circulo::obterArea() {
  double area = 3.14 * (pow(raio, 2));
  return area;
}