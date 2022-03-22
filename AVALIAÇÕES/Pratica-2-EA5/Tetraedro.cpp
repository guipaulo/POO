#include "Tetraedro.h"
#include <cmath>

Tetraedro::Tetraedro(int aresta) {
  this->aresta = aresta;
}

double Tetraedro::obterArea() {
  double area = ((pow(aresta, 2)) * (sqrt(3)));
  return area;
}

double Tetraedro::obterVolume() {
  double volume = ((pow(aresta, 3)) * (sqrt(2)))/12;
  return volume;
}