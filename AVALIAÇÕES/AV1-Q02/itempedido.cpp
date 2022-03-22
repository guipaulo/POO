#include <iostream>
#include "itempedido.h"

using namespace std;

ItemPedido::ItemPedido() {}

ItemPedido::ItemPedido(int qnt, Produto p) {
  this->quantidade = qnt;
  this->produto = p;
}

int ItemPedido::getQuantidade() {
  return this->quantidade;
}

Produto ItemPedido::getProduto() {
  return this->produto;
}

void ItemPedido::exibirDados() {
  cout << "Produto: ";
  this->produto.exibirDados();
  cout << "\nQuantidade: " << this->quantidade;
}