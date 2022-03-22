#include <iostream>
#include "Forma.h"
#pragma once

using namespace std;

class FormaTridimensional: public Forma {
  protected:

  public:
    FormaTridimensional();
    virtual double obterArea();
    virtual double obterVolume();
};