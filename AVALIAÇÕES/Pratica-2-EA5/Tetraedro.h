#include <iostream>
#include "FormaTridimensional.h"

using namespace std;

class Tetraedro: public FormaTridimensional {
  protected:
    int aresta;
  public:
    Tetraedro(int);
    virtual double obterArea() override;
    virtual double obterVolume() override;
};