#include <iostream>
#include "fila.h"
#include "pessoa.h"
#include <fstream>

using namespace std;

int main() {
  string NomePessoa;
  int IdPessoa;
  int IdadePessoa;
  Fila<Pessoa> Pessoas;

  fstream arquivo("saida.txt",ios::in);

  if (!arquivo){
    cout << "Erro na abertura do arquivo." << endl;
    return 1;
  }

  while (arquivo >> IdPessoa >> NomePessoa >> IdadePessoa){
    Pessoas.inserir(Pessoa(NomePessoa,IdPessoa,IdadePessoa));
  }
  arquivo.close();
  
  while (true) {
    int entrada;
    
    cout << "\n\tFILA DE PESSOAS" << endl;
    cout << "-----------------------\n" << endl;
    cout << "1 – Exibir a Fila" << endl;
    cout << "2 – Entrar na Fila" << endl;
    cout << "3 – Sair da fila" << endl;
    cout << "4 – Primeiro da Fila" << endl;
    cout << "5 – Último da Fila" << endl;
    cout << "6 – Quantidade de Pessoas na Fila" << endl;
    cout << "7 – Sair\n" << endl;
    
    cout << "Selecione uma opção: ";
    cin >> entrada;
  
    if (entrada == 1) Pessoas.exibir();
  
    if (entrada == 2) {
      
      cout << "Digite a identificação: ";
      cin >> IdPessoa;
      cout << "Digite o nome: ";
      cin >> NomePessoa;
      cout << "Digite a idade: ";
      cin >> IdadePessoa;
      Pessoas.inserir(Pessoa(NomePessoa,IdPessoa,IdadePessoa));
    }

    if (entrada == 3) Pessoas.remover();

    if (entrada == 4) Pessoas.primeiro();

    if (entrada == 5) Pessoas.ultimo();

    if (entrada == 6) cout << Pessoas.tamanho() << endl;

    if (entrada == 7) break;
  }
  arquivo.open("saida.txt");
      
  if (!arquivo) {
    cout << "Erro na abertura do arquivo." << endl;
    return 1;
  }
  
  for (int i = 0;i<Pessoas.tamanho();i++) {
    arquivo << Pessoas.get(i).getID() << " " <<       Pessoas.get(i).getNome() << " " << Pessoas.get(i).getIdade() << '\n';
  }
  arquivo.close();
  return 0;
}
