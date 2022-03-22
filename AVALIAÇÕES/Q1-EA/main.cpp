#include <iostream>

using namespace std;

int main() {
  int casosTeste, num1, num2, soma;
    
  cin >> casosTeste;
    
  for(int x = 1; x <= casosTeste; x++) {
    cin >> num1;
    cin >> num2;
      
    soma = 0;
    // SE NUM1 FOR FOR IMPAR, COMEÇAR DELE
    if (num1%2 != 0) {
      soma+=num1;
    }
    // SE NÃO FOR IMPAR, SOMAR +1
    else {
      num1+=1;
      soma += num1;
    }
    // REALIZAR A SOMA DOS ÍMPARES CONSECUTIVOS
    for (int i = 1; i < num2; i++) {
      num1 += 2; 
      soma += num1;           
    }
            
    cout << soma << "\n";
  }
}