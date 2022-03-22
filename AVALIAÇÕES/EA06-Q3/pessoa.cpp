#include "pessoa.h"

using namespace std;

Pessoa::Pessoa() {}

Pessoa::Pessoa(string nome, int id, int idade) {
  this->nome = nome;
  this->id = id;
  this->idade = idade;
}

int Pessoa::getID() const {
  return this->id;
}

void Pessoa::setID(int id) {
  this->id = id;
}

string Pessoa::getNome() const {
  return this->nome;
}

void Pessoa::setNome(string nome) {
  this->nome = nome;
}

int Pessoa::getIdade() const {
  return this->idade;
}

void Pessoa::setIdade(int idade) {
  this->idade = idade;
}

void Pessoa::exibeDados() {
  cout << id << "-" << nome << "-" << idade << endl;
}

/*ostream& operator<<(ostream& saida, const Pessoa& p){
  saida << p.id << "-" << p.nome << "-" << p.idade;  
  return saida;
}*/
ostream& operator<<(ostream& saida, const Pessoa& p){
  saida << p.id << "-" << p.nome << "-"<<p.idade;  
  return saida; 
}