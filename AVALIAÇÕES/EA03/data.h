#include <iostream>

using namespace std;

class Data {
  private:
    int dia;
    int mes;
    int ano;
  
  public:
    Data(); //Construtor
    int comparaData(Data d);
    int getDia();
    int getMes();
    string getMesExtenso();
    int getAno();
    void setDia(int dia);
    void setMes(int mes);
    void setAno(int ano);
    bool isBissexto();
    bool validaData();
    void exibeData();
    friend ostream& operator<<(ostream& saida, Data& d);
};