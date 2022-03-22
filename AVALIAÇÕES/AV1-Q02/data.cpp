#include <iostream>
#include "data.h"

using namespace std;

Data::Data() {}

Data::Data(int dia, int mes, int ano) {
  this->dia = dia;
  this->mes = mes;
  this->ano = ano;
}

int Data::getDia() {
  return this->dia;
}

int Data::getMes() {
  return this->mes;
}

int Data::getAno() {
  return this->ano;
}

void Data::setDia(int dia) {
  this->dia = dia;
}

void Data::setMes(int mes) {
  this->mes = mes;
}

void Data::setAno(int ano) {
  this->ano = ano;
}

void Data::exibirDados() {
  cout << dia << "/" << mes << "/" << ano << endl;
}