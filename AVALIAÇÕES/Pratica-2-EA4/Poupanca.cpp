#include "Poupanca.h"
#include <iomanip>

Poupanca::Poupanca() {}

Poupanca::Poupanca(float saldo, float limitecredito, double rendimento): Conta(saldo, limitecredito) {
  this->rendimento = rendimento;
}

double Poupanca::getRendimento() {
  return this->rendimento;
}

void Poupanca::setRendimento(double rend) {
  this->rendimento = rend;
}

double Poupanca::calculaRendimento() {
  double total = getSaldo() + (rendimento/12);

  return total;
}