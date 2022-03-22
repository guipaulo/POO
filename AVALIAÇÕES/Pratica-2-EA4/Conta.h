#include <iostream>
#pragma once

using namespace std;

class Conta {
  private:
    float saldo;
    float LimiteCredito;
  public:
    Conta();
    Conta(float, float);
    float getSaldo();
    float getLimite();
    void setSaldo(float);
    void setLimite(float);
    void CompraDebito(float);
    void CompraCredito(float);
    void Saque(float);
    void Deposito(float);
};