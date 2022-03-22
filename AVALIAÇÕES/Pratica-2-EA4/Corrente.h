#include <iostream>
#include "Conta.h"

class Corrente: public Conta {
    private:
      float taxa;
    public:
      Corrente();
      Corrente(float, float, float);
      void CompraDebito(float);
      void CompraCredito(float);
};