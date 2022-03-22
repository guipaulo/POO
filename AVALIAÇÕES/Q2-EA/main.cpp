#include <iostream>

using namespace std;

int main() {
  int casosTeste, PA, PB, anos;
  double G1, G2;
  int Anos;
    
  cin >> casosTeste;
    for(int x = 1; x <= casosTeste; x++) {
      Anos = 0;
      cin >> PA >> PB >> G1 >> G2;

      while (PB >= PA) {
        PA = PA + PA*(G1/100);
        PB = PB + PB*(G2/100);
        Anos+=1;
        
        if (Anos > 100) {
          cout << "Mais de 1 seculo." << endl;
          return 0;
        }
      }
      cout << Anos << " anos\n";
    }
}