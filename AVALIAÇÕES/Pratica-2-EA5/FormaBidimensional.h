#include <iostream>
#include "Forma.h"
#pragma once

using namespace std;

class FormaBidimensional: public Forma {
  protected:

  public:
    FormaBidimensional();
    virtual double obterArea();
};