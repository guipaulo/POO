#include "Quadrado.h"

Quadrado::Quadrado(int lado) {
  this-> lado = lado;
}

double Quadrado::obterArea() {
  double area = lado * lado;
  return area;
}