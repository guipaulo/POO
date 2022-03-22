#include "Esfera.h"
#include <cmath>

Esfera::Esfera(int raio) {
  this->raio = raio;
}

double Esfera::obterArea() {
  double area = 4 * 3.14 * (pow(raio, 2));
  return area;
}

double Esfera::obterVolume() {
  double volume = (4 * 3.14 * (pow(raio, 3)))/3;
  return volume;
}