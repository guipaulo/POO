#include <iostream>

using namespace std;

class Complexo {
 private:
  double real; // parte real
  double imaginario; // parte imaginária

 public:
  Complexo();
  Complexo(double real, double imaginario); // construtor
  Complexo operator+(const Complexo &) const; // adição
  Complexo operator-(const Complexo &) const; // subtração
  Complexo operator*(const Complexo &) const; // multiplicacao
  Complexo operator/(const Complexo &) const; // divisao
  Complexo& operator=(Complexo &); // atribuicao
  friend bool operator==(const Complexo&, const Complexo&); // igualdade
  friend ostream& operator<<(ostream& saida, Complexo&); //saida na tela
};