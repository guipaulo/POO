#include <iostream>
using namespace std;

class Pessoa {
  private:
    string nome;
    int id;
    int idade;
  public:
    Pessoa();
    Pessoa(string, int, int);
    int getID() const;  
    void setID(int);
    string getNome() const;  
    void setNome(string);
    int getIdade() const;
    void setIdade(int);
    void exibeDados();
    //friend ostream& operator<<(ostream&, const Pessoa&);
    friend ostream& operator<<(ostream&, const Pessoa&);
};