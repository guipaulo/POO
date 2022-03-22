#include <iostream>

using namespace std;


int main() {
  int seg;
  int min;
  int hr;

  cin >> seg;

  hr = (seg/3600);
  seg = seg - (hr * 3600);

  min = seg / 60;
  seg = seg - (min * 60);
  cout << hr << ":" << min << ":" << seg; 
}