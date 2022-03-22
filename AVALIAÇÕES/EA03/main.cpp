#include <iostream>
#include "data.h"

using namespace std;
int main() {

  Data D1 = Data();
  Data D2 = Data();
  Data D3 = Data();
  Data D4 = Data();
  Data D5 = Data();
  Data D6 = Data();

  //Teste SET
  D1.setDia(17);
  D1.setMes(12);
  D1.setAno(2021);

  D2.setDia(13);
  D2.setMes(12);
  D2.setAno(2021);

  D3.setDia(21);
  D3.setMes(11);
  D3.setAno(2021);

  D4.setDia(12);
  D4.setMes(01);
  D4.setAno(2036);

  D5.setDia(88);
  D5.setMes(10);
  D5.setAno(2036);

  D6.setDia(13);
  D6.setMes(12);
  D6.setAno(2021);

  cout << "----- TESTE GET -----\n" << endl;
  cout << D1.getDia() << endl;
  cout << D1.getMes() << endl;
  cout << D1.getAno() << endl;

  cout << D2.getDia() << endl;
  cout << D2.getMes() << endl;
  cout << D2.getAno() << endl;
  cout << "\n";

  cout << "----- TESTE GET MÊS EXTENSO-----\n" << endl;
  cout << D1.getMesExtenso() << endl;
  cout << D3.getMesExtenso() << endl;
  cout << "\n";

  cout << "----- TESTE ISBISSEXTO-----\n" << endl;
  cout << D3.isBissexto() << endl;
  cout << D4.isBissexto() << endl;
  cout << "\n";

  cout << "----- TESTE VALIDADATA-----\n" << endl;
  cout << D1.validaData()<< endl;
  cout << D5.validaData()<< endl;
  cout << "\n";

  cout << "----- TESTE COMPARADATA-----\n" << endl;
  cout << D1.comparaData(D2) << endl;
  cout << D2.comparaData(D4) << endl;
  cout << D2.comparaData(D6) << endl;
  cout << "\n";


  cout << "----- TESTE OPERATOR-----\n" << endl;
  cout << D2;
  cout << D1;
  cout << "\n";

  cout << "----- TESTE EXIBEDATA-----\n" << endl;
  D2.exibeData();
  D3.exibeData();
}