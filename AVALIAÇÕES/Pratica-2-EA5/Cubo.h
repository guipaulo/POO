#include <iostream>
#include "FormaTridimensional.h"

using namespace std;

class Cubo: public FormaTridimensional {
  protected:
    int lado;
  public:
    Cubo(int);
    virtual double obterArea() override;
    virtual double obterVolume() override;
};