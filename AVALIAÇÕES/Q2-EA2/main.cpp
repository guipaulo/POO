#include <iostream>

using namespace std;

int qAlunos;
int dia;
int idades[] = {};
int promocoes = 0;

int MenorIdade (int idades[]);
int MaiorIdade (int idades[]);
int IdadesImpar (int idades[]);
int EhPrimo (int num);
int Cont;

int main() {
  cin >> qAlunos;
  cin >> dia;
  for (int x = 0; x < qAlunos; x++) {
    cin >> idades[x];
  }
  if (qAlunos < 5 or qAlunos > 40) {
    cout << "ENTRADA INVALIDA\n";
    return 0;
  }

  if (MaiorIdade(idades) + MaiorIdade(idades) == 35) {
    cout << "Promocao 1: SIM" << endl;
    promocoes+=1;
  }
  else {
    cout << "Promocao 1: NAO" << endl;
  }

  if (IdadesImpar(idades) == true) {
    cout << "Promocao 2: SIM" << endl;
    promocoes+=1;
  }
  else {
    cout << "Promocao 2: NAO" << endl;
  }

  for (int y = 0; y < qAlunos; y++) {
    Cont = 0;
    if (EhPrimo(y) == true) {
      Cont+=1;
    }
  }

  if (Cont >= 1) {
    cout << "Promocao 3: SIM" << endl;
    promocoes+=1;
  }
  else {
    cout << "Promocao 3: NAO" << endl;
  }

  if (promocoes == 3) {
    cout << "Promocao 4: SIM" << endl;
  }
  else {
    cout << "Promocao 4: NAO" << endl;
  }
}


//FUNÇÕES 
int MenorIdade (int idades[]) {
  int maisNovo = idades[0];

  for (int x = 1; x < qAlunos; x++) {
    if (maisNovo < idades[x]) {
      maisNovo = idades[x];
    }
  }
  return maisNovo;
}

int MaiorIdade (int idades[]) {
  int maisVelho = idades[0];

  for (int x = 1; x < qAlunos; x++) {
    if (maisVelho < idades[x]) {
      maisVelho = idades[x];
    }
  }
  return maisVelho;
}

int IdadesImpar (int idades[]) {
  int total;
  for (int x = 0; x < qAlunos; x++) {
    if (idades[x] % 2 != 0) {
      total+=1;
    }
  }
  if (total > (qAlunos/2)) {
    return true;
  }
  return false;;
}

int EhPrimo (int num) {
  int total = 0;

  for (int n = 1; n < num; n++) {
    if (num % n == 0) total += 1;
  }
  if (total == 2) {
    return true;
  }
  else {
    return false;
  }
}