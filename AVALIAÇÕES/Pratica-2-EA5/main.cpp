#include <iostream>
#include "Circulo.h"
#include "Quadrado.h"
#include "Triangulo.h"
#include "Cubo.h"
#include "Esfera.h"
#include "Tetraedro.h"

using namespace std;

int main() {
  Circulo C1 = Circulo(2);
  cout << "Área do Círculo: " << C1.obterArea();
  cout << "\n";
  Quadrado Q1 = Quadrado(2);
  cout << "Área do Quadrado: " << Q1.obterArea();
  cout << "\n";
  Triangulo T1 = Triangulo(2, 5);
  cout << "Área do Triângulo: " << T1.obterArea();
  cout << "\n\n";

  Cubo CC1 = Cubo(3);
  cout << "Área do Cubo: " <<CC1.obterArea();
  cout << "\n";
  cout << "Volume do Cubo: " << CC1.obterVolume();
  Esfera EE1 = Esfera(3);
  cout << "\n\n";
  cout << "Área da Esfera: " << EE1.obterArea();
  cout << "\n";
  cout << "Volume da Esfera: " << EE1.obterVolume();
  Tetraedro TT1 = Tetraedro(3);
  cout << "\n\n";
  cout << "Área do Tetraedro: " << TT1.obterArea();
  cout << "\n";
  cout << "Volume do Tetraedro: " << TT1.obterVolume();

}