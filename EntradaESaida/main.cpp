#include <iostream>

using namespace std;

int main() {
  int i, n;
  for (i = 0; i < 10; i++) {
    cout << "Digite um número: \n";
    cin >> n;
    cout << 2*n << endl;
  }
  cout << "Programa finalizado! \n";
  return 0;
}