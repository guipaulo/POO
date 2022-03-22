#include "Conta.h"

Conta::Conta() {
  
}

Conta::Conta(float saldo, float limitecredito) {
  this->saldo = saldo;
  this->LimiteCredito = limitecredito;
}

float Conta::getSaldo() {
  return this->saldo;
}

float Conta::getLimite() {
  return this->LimiteCredito;
}

void Conta::setSaldo(float valor) {
  this->saldo = valor;
}

void Conta::setLimite(float valor) {
   this->LimiteCredito = valor; 
}

void Conta::CompraDebito(float compra) {
  if (compra <= saldo) {
    cout << "Compra no debito realizada com sucesso!";
    saldo = saldo - compra;
  }
  else {
    cout << "Você não possui saldo suficicente!";
  }
}

void Conta::CompraCredito(float compra) {
    if (compra <= LimiteCredito) {
    cout << "Compra no crédito realizada com sucesso!";
    LimiteCredito = LimiteCredito - compra;
  }
  else {
    cout << "Você não possui limite suficicente!";
  }
}

void Conta::Saque(float saque) {
  this->saldo = this->saldo - saque;
}

void Conta::Deposito(float deposito) {
  this->saldo = this->saldo + deposito;
}