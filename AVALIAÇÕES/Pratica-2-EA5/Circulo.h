#include <iostream>
#include "FormaBidimensional.h"

using namespace std;

class Circulo: public FormaBidimensional {
  protected:
    int raio;
  public:
    Circulo(int);
    virtual double obterArea() override;
};