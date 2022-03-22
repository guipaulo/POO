#include "Corrente.h"

Corrente::Corrente() {}

Corrente::Corrente(float saldo, float limitecredito, float taxa): Conta(saldo, limitecredito) {
  this->taxa = taxa;
}

float Corrente::getSaldo() {
  return this->saldo;
}

float Corrente::getTaxa() {
  return this->taxa;
}

void Corrente::CompraDebito(float compra) {
  float total;
  if (compra <= getSaldo()) {
    cout << "Compra no debito realizada com sucesso!\n";
    total = getSaldo() - compra - (taxa/12);
    setSaldo(total);
  }
  else {
    cout << "Você não possui saldo suficicente!\n";
  }
}

void Corrente::CompraCredito(float compra) {
  float total;
  if (compra <= getLimite()) {
    cout << "Compra no crédito realizada com sucesso!\n";
    total = getLimite() - compra - (taxa/12);
    setLimite(total);
  }
  else {
    cout << "Você não possui limite suficicente!\n";
  }
}