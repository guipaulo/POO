#include <iostream>
#include <vector>

using namespace std;

int qAlunos;
int matricula;
int media;
int MaiorMedia = 0;
vector<int> MatriculaMM;

int main() {
  cin >> qAlunos;
  for (int x = 0; x < qAlunos; x++) {
    cin >> matricula >> media;
    if (x == 0) {
      MaiorMedia = media;
    }
    else if (x != 0) {
      if (media >= MaiorMedia) {
        MaiorMedia = media;
        MatriculaMM.push_back(matricula);
      }
    }
  }
  for (size_t i = 0; i < MatriculaMM.size(); ++i) {
    cout << MatriculaMM.at(i) << " ";
  }
    cout << endl;
}