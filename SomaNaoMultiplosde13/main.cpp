#include <iostream>

using namespace std;

int main() {
  int num1, num2;

  cin >> num1;
  cin >> num2;
  int soma = 0;

  for (int x = num1; x <= num2; x++) {
    if (x % 13 != 0) {
      soma += x;
    }
  }
  cout << soma << endl;
}