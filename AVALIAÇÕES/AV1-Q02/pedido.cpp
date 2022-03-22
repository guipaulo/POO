#include <iostream>
#include "pedido.h"

using namespace std;

Pedido::Pedido() {}

void Pedido::setCliente(Cliente C) {
  this->cliente = C;
}
    
Cliente Pedido::getCliente() {
  return this->cliente;
}
    
void Pedido::setData(Data D) {
  this->data = D;
}
    
Data Pedido::getData() {
  return this->data;
}

int Pedido::getCodigo() {
  return this->codigo;
}
    
void Pedido::adicionarItem(ItemPedido item) {
  this->itens.push_back(item);
  this->qntItens = qntItens+item.getQuantidade();
}
    
double Pedido::getTotal() {
  double total = 0.0;
  for (int x = 0; x <this->qntItens; x++) {
    total = total + (this->itens[x].getQuantidade()*itens[x].getProduto().getPreco());
  }
  return total;
}

void Pedido::exibirDados() {
  cout << "Cod: " << this->codigo << endl;
  cout << "Cliente: ";
  this->cliente.exibirDados();
  for (int i =0; i<this->qntItens; i++) {
  this->itens[i].exibirDados();
  }
  cout << "Total do pedido: ";
  this->getTotal();
  cout << "\n\n";

}

void Pedido::setCodigo(int cod) {
  this->codigo = cod;
}