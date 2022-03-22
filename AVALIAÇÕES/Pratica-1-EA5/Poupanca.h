#include <iostream>
#include "Conta.h"
using namespace std;

class Poupanca: public Conta {
  protected:
    double rendimento;
  public:
    Poupanca();
    Poupanca(float, float, double);
    double getRendimento();
    void setRendimento(double);
    double calculaRendimento();
    virtual void CompraDebito(float) override;
    virtual void CompraCredito(float) override;
    virtual float getSaldo() override;
};