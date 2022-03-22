#include "Conta.h"

Conta::Conta() {
  
}

Conta::Conta(float saldo, float limitecredito) {
  this->saldo = saldo;
  this->LimiteCredito = limitecredito;
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

void Conta::Saque(float saque) {
  this->saldo = this->saldo - saque;
}

void Conta::Deposito(float deposito) {
  this->saldo = this->saldo + deposito;
}