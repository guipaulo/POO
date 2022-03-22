#include <iostream>
#include "FormaBidimensional.h"

using namespace std;

class Triangulo: public FormaBidimensional {
  protected:
    int base;
    int altura;
  public:
    Triangulo(int, int);
    virtual double obterArea() override;
};