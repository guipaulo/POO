#include <iostream>
#include <cmath>
#include "equacao.h"

using namespace std;

Equacao2Grau::Equacao2Grau() {}

Equacao2Grau::Equacao2Grau(int a, int b, int c) {
  this->A = a;
  this->B = b;
  this->C = c;
}

int Equacao2Grau::getA() {
  return this->A;
}

void Equacao2Grau::setA(int a) {
  this->A = a;
}

int Equacao2Grau::getB() {
  return this->B;
}

void Equacao2Grau::setB(int b) {
  this->B = b;
}

int Equacao2Grau::getC() {
  return this->C;
}

void Equacao2Grau::setC(int c) {
  this->C = c;
}
int Equacao2Grau::CalculaDelta() {
  int delta;

  delta = (pow(this->B, 2)) - (4 * this->A * this->C);

  return delta;
}

int Equacao2Grau::CalculaRaizes() {
  int x1, x2;
  int B = this->B*(-1);
  if (CalculaDelta() > 0) {
    x1 = (B + (sqrt(CalculaDelta()))) / 2*this->A;
    x2 = (B - (sqrt(CalculaDelta()))) / 2*this->A;
    cout << "X1 = " << x1 << endl;
    cout << "X2 = " << x2 << endl;
    return 0;
  }
  else if (CalculaDelta() == 0) {
    x1 = (B + (sqrt(CalculaDelta()))) / 2*this->A;
    x2 = x1;
    cout << "X1 = " << x1 << endl;
    cout << "X2 = " << x2 << endl;
    return 0;
  }
  else if (CalculaDelta() < 0) {
    cout << "Erro: A Equação não possui raízes reais!" << endl;
    return 0;
  }
}
void Equacao2Grau::exibeEquacao() {
  cout << this->A << "x² + " << this->B << "x + " << this->C;
}