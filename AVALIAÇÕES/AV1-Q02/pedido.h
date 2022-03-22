#include <iostream>
#include "cliente.h"
#include "itempedido.h"
#include "data.h"
#include <vector>
using namespace std;

class Pedido {
  private:
    int codigo;
    Cliente cliente;
    Data data;
    vector<ItemPedido> itens;
    int qntItens;
  public:
    Pedido();
    void setCliente(Cliente);
    Cliente getCliente();
    void setData(Data);
    Data getData();
    int getCodigo();
    void setCodigo(int);
    void adicionarItem(ItemPedido);
    double getTotal();
    void exibirDados();
};
