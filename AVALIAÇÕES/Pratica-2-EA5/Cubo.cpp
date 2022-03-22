#include "Cubo.h"
#include <cmath>

Cubo::Cubo(int lado) {
  this->lado = lado;
}

double Cubo::obterArea() {
  double area = 6 * (pow(lado, 2));
  return area;
}

double Cubo::obterVolume() {
  double volume = lado * lado * lado;
  return volume;
}