#include <iostream>

using namespace std;

class Equacao2Grau {
  private:
    int A;
    int B;
    int C;
  public:
    Equacao2Grau();
    Equacao2Grau(int, int, int);
    int getA();
    void setA(int);
    int getB();
    void setB(int);
    int getC();
    void setC(int);
    int CalculaDelta();
    int CalculaRaizes();
    void exibeEquacao();
};