#include <iostream>
#include <string>

using namespace std;

class Empresa {
  private:
    string nome;
    string endereco;
    string cidade;
    string estado;
    int CEP;
    double telefone;
  public:
    Empresa();
    Empresa(string, string, string, string, int, double);
    string getNome();
    string getEndereco();
    string getCidade();
    string getEstado();
    int getCEP();
    double getTelefone();
    void setNome(string);
    void setEndereco(string);
    void setCidade(string);
    void setEstado(string);
    void setCEP(int);
    void setTelefone(double);
    void exibeEmpresa();
};