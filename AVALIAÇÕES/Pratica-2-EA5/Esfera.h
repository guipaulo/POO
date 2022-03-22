#include <iostream>
#include "FormaTridimensional.h"

using namespace std;

class Esfera: public FormaTridimensional {
  protected:
    int raio;
  public:
    Esfera(int);
    virtual double obterArea() override;
    virtual double obterVolume() override;
};