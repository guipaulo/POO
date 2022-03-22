#include <iostream>
#include "produto.h"

using namespace std;

class ItemPedido {
  private:
    int quantidade;
    Produto produto;

  public:
    ItemPedido();
    ItemPedido(int, Produto);
    int getQuantidade();
    Produto getProduto();
    void exibirDados();
};