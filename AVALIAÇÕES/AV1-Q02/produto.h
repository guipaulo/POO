#include <iostream>

using namespace std;

class Produto {
  private:
    int codigo;
    string descricao;
    double preco;
  public:
    Produto();
    Produto(int, string, double);
    int getCodigo();
    void setCodigo(int);
    string getDescricao();
    void setDescricao(string);
    double getPreco();
    void setPreco(double);
    void exibirDados();
};