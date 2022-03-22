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

float Poupanca::getSaldo() {
  return this->saldo;
}

void Poupanca::CompraDebito(float compra) {
  if (compra <= saldo) {
    cout << "Compra no debito realizada com sucesso!";
    saldo = saldo - compra;
  }
  else {
    cout << "Você não possui saldo suficicente!";
  }
}

void Poupanca::CompraCredito(float compra) {
    if (compra <= LimiteCredito) {
    cout << "Compra no crédito realizada com sucesso!";
    LimiteCredito = LimiteCredito - compra;
  }
  else {
    cout << "Você não possui limite suficicente!";
  }
}