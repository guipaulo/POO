#include <iostream>
#include <vector>
using namespace std;

template<typename T>
class Fila{
  private:
    int capacidade;
    int tam;
    vector<T> elementos;
  public:
    Fila();
    Fila(int);
    bool vazia();
    bool inserir(T);
    bool remover();
    void primeiro();
    void ultimo();
    int tamanho();
    void exibir();
    T get(int i);
};

template<typename T>
Fila<T>::Fila(){
  capacidade=10;
  tam=0;
  vector<T> elementos(capacidade);
}

template<typename T>
Fila<T>::Fila(int t){
  capacidade=t;
  tam=0;
  vector<T> elementos(capacidade);  
}

template<typename T>
bool Fila<T>::vazia(){
 if (elementos.empty()) return true;
 return false;
}

template<typename T>
bool Fila<T>::inserir(T elem){
  elementos.push_back(elem);
  tam++;
  return true;
}

template<typename T>
bool Fila<T>::remover(){
  elementos.erase(elementos.begin());
  tam--;
  return true;
}

template<typename T>
int Fila<T>::tamanho(){
  return tam;
}

template<typename T>
void Fila<T>::primeiro() {
  cout << "O pimeiro elemento é: " << elementos.front() << '\n';
}

template<typename T>
void Fila<T>::ultimo() {
  cout << "O último elemento é: " << elementos.back() << '\n';
}

template<typename T>
void Fila<T>::exibir(){
  cout << "[";
  for (int i=0;i < elementos.size() ; i++){
     cout << " " << elementos[i] << " "; 
    }
  cout << "]\n";
}

template<typename T>
T Fila<T>::get(int i){
  //verificar se i é válido
  if (i<0 || i>=tam){
    cout << "Acesso a posicao invalida" << endl;
    //return;
  }
  return elementos[i];
}