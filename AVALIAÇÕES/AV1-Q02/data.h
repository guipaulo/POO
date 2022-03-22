#include <iostream>

using namespace std;

class Data {
  private:
    int dia;
    int mes;
    int ano;
  
  public:
    Data(); //Construtor
    Data(int, int, int);
    int getDia();
    int getMes();
    int getAno();
    void setDia(int dia);
    void setMes(int mes);
    void setAno(int ano);
    void exibirDados();
};