#include "Triangulo.h"

Triangulo::Triangulo(int base, int altura) {
  this->base = base;
  this->altura = altura;
}

double Triangulo::obterArea() {
  double area = (base * altura)/2;
  return area;
}