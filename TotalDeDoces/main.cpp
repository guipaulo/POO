#include <iostream>
#include <iomanip>

using namespace std;


int main() {
  int doces = 0;

  cout << "Informe o total de doces comprados: ";
  cin >> doces;
  
  int TotalPeso = 0;
  float peso = 0.0;
  float preco = 0.0;
  int MaisBarato = 0;
  float TotalGrama = 0;
  float TotalPreco = 0;

  for (int d = 1; d <= doces; d++) {
    float PrecoUnitario = 0.0;
    cout << "Doce " << d << ":" << endl;
    cout << "Informe o Peso (g): ";
    cin >> peso;
    cout << "Informe o Preço (R$): ";
    cin >> preco;
    peso = peso/1000;
    PrecoUnitario = (preco/peso);
    cout <<  "Preço unitário calculado = R$" << fixed << setprecision(2) << PrecoUnitario << "/kg" << endl;
    cout << "\n";

    TotalGrama += peso;
    TotalPreco += preco;

    if (d == 1) {
      MaisBarato = preco;
    }
    else if (d != 1) {
      if (preco < MaisBarato) {
        MaisBarato = d;
      }
    }
  }
  TotalGrama = TotalGrama * 1000;
  cout << "-=-=-=-=-=-=-=-=-=-=-=-=-\n";
  cout << "Dados Finais da Compra:\n";
  cout << "Produto mais barato: Doce " << MaisBarato << endl;
  cout << "Foram comprados " << TotalGrama << "g de Doce por R$" << TotalPreco;
} 