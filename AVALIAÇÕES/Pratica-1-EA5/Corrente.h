#include <iostream>
#include "Conta.h"

class Corrente: public Conta {
    private:
      float taxa;
    public:
      Corrente();
      Corrente(float, float, float);
      float getTaxa();
      virtual float getSaldo() override;
      virtual void CompraDebito(float) override;
      virtual void CompraCredito(float) override;
};