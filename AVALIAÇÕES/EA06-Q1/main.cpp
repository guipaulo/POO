#include <iostream>
#include "fila.h"
#include <vector>

using namespace std;

int main() {

  Fila<int> li(4);
  Fila<int> li2(4);

  li.inserir(1);
  li.inserir(2);
  li.inserir(3);
  li.inserir(4);
  li.exibir();
  li.remover();
  li.exibir();

  cout << li.vazia() << "\n";
  cout << li2.vazia() << "\n";
  cout << li.tamanho() << "\n";
  cout << li2.tamanho() << "\n";
  
  li.primeiro();
  li.ultimo();
}
