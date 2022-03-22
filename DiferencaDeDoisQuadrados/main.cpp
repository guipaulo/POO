#include <iostream>
#include<cmath>

using namespace::std;
int main() {
  int numero = 0;
  cin >> numero;

  if (numero % 2 != 0) {
    int n1;
    int n2;
    if (numero == 1) {
      n1 = 1;
      n2 = 0;
      cout << (pow(n1, 2)) << " - " << (pow(n2, 2)) << endl;
    }
    else if (numero != 1) {
      cout << "Ainda não definido." << endl;
    }
  }
  else {
    cout << "O número não é ímpar!" << endl;
  }
} 