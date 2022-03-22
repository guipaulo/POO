#include <iostream>

using namespace std;

class Cliente {
  private:
    int codigo;
    string nome;
    string endereco;

  public:
    Cliente();
    int getCodigo();
    void setCodigo(int);
    string getNome();
    void setNome(string);
    string getEndereco();
    void setEndereco(string);
    void exibirDados();
};