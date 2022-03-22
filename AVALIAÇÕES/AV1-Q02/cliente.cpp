#include <iostream>
#include "cliente.h"

using namespace std;

Cliente::Cliente() {}

int Cliente::getCodigo() {
  return this->codigo;
}

void Cliente::setCodigo(int cod) {
  this->codigo = cod;
}

string Cliente::getNome() {
  return this->nome;
}

void Cliente::setNome(string nome) {
  this->nome = nome;
}

string Cliente::getEndereco() {
  return this->endereco;
}

void Cliente::setEndereco(string end) {
  this->endereco = end;
}

void Cliente::exibirDados() {
  cout << "Cod: " << this->codigo << endl;
  cout << "Nome: " << this->nome << endl;
  cout << "Endereço: " << this->endereco << endl;
}