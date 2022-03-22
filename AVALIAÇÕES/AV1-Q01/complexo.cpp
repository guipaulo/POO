#include "complexo.h"
#include <iomanip>

using namespace std;

Complexo::Complexo() {
  this->real = this->imaginario = 0;
}

Complexo::Complexo(double real, double imaginario) {
  this-> real = real;
  this-> imaginario = imaginario;
}

Complexo Complexo::operator+(const Complexo &novo) const {
  Complexo c;

  c.real = real + novo.real;
  c.imaginario = imaginario + novo.imaginario;

  return c;
}

Complexo Complexo::operator-(const Complexo &novo) const {
  Complexo c;

  c.real = real - novo.real;
  c.imaginario = imaginario - novo.imaginario;
  return c;
}

Complexo Complexo::operator*(const Complexo &novo) const {
  Complexo c;
  c.real = (real * novo.real)-(imaginario*novo.imaginario);
  c.imaginario = (real*novo.imaginario)+(novo.real*imaginario);

  return c;
}

Complexo Complexo::operator/(const Complexo &novo) const {

  Complexo c;

  c.real = (real*novo.real+imaginario*novo.imaginario)/(novo.real*novo.real+novo.imaginario*novo.imaginario);
  
  c.imaginario = (imaginario*novo.real-real*novo.imaginario)/(novo.real*novo.real+novo.imaginario*novo.imaginario);

  return c;
}

Complexo& Complexo::operator=(Complexo& novo){
 this->real = novo.real;
 this->imaginario = novo.imaginario;
 return *this;
}

bool operator==(const Complexo& novo1, const Complexo& novo2) {
  return (novo1.real == novo2.real && novo1.imaginario == novo2.imaginario);
}

ostream& operator<<(ostream& saida, Complexo& novo) {
  if (novo.imaginario < 0) {
    novo.imaginario = (novo.imaginario*-1);
    saida << fixed << setprecision(2) << novo.real << " - " << novo.imaginario << "i" << endl;
  }
  else {
    saida << fixed << setprecision(2) << novo.real << " + " << novo.imaginario << "i" << endl;
  }
  return saida;
}