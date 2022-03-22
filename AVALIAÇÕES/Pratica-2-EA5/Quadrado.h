#include <iostream>
#include "FormaBidimensional.h"

using namespace std;

class Quadrado: public FormaBidimensional {
  protected:
    int lado;
  public:
    Quadrado(int);
    virtual double obterArea() override;
};