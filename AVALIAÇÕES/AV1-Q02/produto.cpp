#include <iostream>
#include "produto.h"

using namespace std;

Produto::Produto() {}

Produto::Produto(int codigo, string descricao, double preco) {
  this->codigo = codigo;
  this->descricao = descricao;
  this->preco = preco;
}

int Produto::getCodigo() {
  return this->codigo;
}

void Produto::setCodigo(int cod) {
  this->codigo = cod;
}

string Produto::getDescricao() {
  return this->descricao;
}

void Produto::setDescricao(string desc) {
  this->descricao = desc;
}

double Produto::getPreco() {
  return this->preco;
}

void Produto::setPreco(double preco) {
  this->preco = preco;
}

void Produto::exibirDados() {
  cout << "Cod: " << this->codigo << endl;
  cout << "Descrição: " << this->descricao << endl;
  cout << "Preço: " << this->preco << endl;
}