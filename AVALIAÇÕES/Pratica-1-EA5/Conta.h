#include <iostream>
#pragma once

using namespace std;

class Conta {
  protected:
    float saldo;
    float LimiteCredito;
  public:
    Conta();
    Conta(float, float);
    virtual float getSaldo() = 0;
    float getLimite();
    void setSaldo(float);
    void setLimite(float);
    virtual void CompraDebito(float) = 0;
    virtual void CompraCredito(float) = 0;
    void Saque(float);
    void Deposito(float);
};