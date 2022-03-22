#include "restaurante.h"

using namespace std;

Restaurante::Restaurante() {}

Restaurante::Restaurante(string nome, string endereco, string cidade, string estado, int cep, double tel, string TC, float precoMedio): Empresa(nome, endereco, cidade, estado, cep, tel) {
  this->tipoComida = TC;
  this->precoMedio = precoMedio;
}

void Restaurante::exibirRestaurante() {
  cout << "Nome do Restaurante: " << getNome() << endl;
  cout << "Endeço: " << getEndereco() << endl;
  cout << "Cidade: " << getCidade() << endl;
  cout << "Estado: " << getEstado() << endl;
  cout << "CEP: " << getCEP() << endl;
  cout << "Telefone: " << getTelefone() << endl;
  cout << "Tipo de Comida: " << tipoComida << endl;
  cout << "Preço Médio: " << precoMedio << endl;
}