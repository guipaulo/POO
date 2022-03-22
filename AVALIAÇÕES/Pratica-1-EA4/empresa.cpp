#include "empresa.h"

Empresa::Empresa() {}

Empresa::Empresa(string nome, string endereco, string cidade, string estado,int cep, double tel) {
  this->nome = nome;
  this->endereco = endereco;
  this->cidade = cidade;
  this->estado = estado;
  this->CEP = cep;
  this->telefone = tel;
}
string Empresa::getNome() { return this->nome; }

string Empresa::getEndereco() { return this->endereco; }

string Empresa::getCidade() { return this->cidade; }

string Empresa::getEstado() { return this->estado; }

int Empresa::getCEP() { return this->CEP; }

double Empresa::getTelefone() { return this->telefone; }

void Empresa::setNome(string nome) { this->nome = nome; }

void Empresa::setEndereco(string endereco) { this->endereco = endereco; }

void Empresa::setCidade(string cidade) { this->cidade = cidade; }

void Empresa::setEstado(string estado) { this->estado = estado; }

void Empresa::setCEP(int cep) { this->CEP = cep; }

void Empresa::setTelefone(double tel) { this->telefone = tel; }

void Empresa::exibeEmpresa() {
  cout << "Nome da Empresa: " << nome << endl;
  cout << "Endeço: " << endereco << endl;
  cout << "Cidade: " << cidade << endl;
  cout << "Estado: " << estado << endl;
  cout << "CEP: " << CEP << endl;
  cout << "Telefone: " << telefone << endl;
}