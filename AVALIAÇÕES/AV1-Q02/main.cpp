#include <iostream>
#include <vector>
#include "pedido.h"

using namespace std;

int main() {
  vector<Pedido> ListaPedidos;
  vector<Cliente> ListaClientes;
  vector<Produto> ListaProdutos;
  int opcao;

  while (true) {
  cout << "---Controle de Pedidos (Menu Principal)---\n\n";
  cout << "1 - Cadastrar Produto\n\n";
  cout << "2 - Cadastrar Cliente\n\n";
  cout << "3 - Cadastrar Pedido\n\n";
  cout << "4 - Consultar Pedido\n\n";
  cout << "5 - Relatório de Pedidos\n\n";
  cout << "6 - Encerrar Programa\n\n";
  cout << "Informe a opção desejada: ";

  cin >> opcao;
  if (opcao == 1) {
    int codigo;
    string descricao;
    double preco;
    cout << "Informe o código: ";
    cin >> codigo;
    cout << "Informe a descrição: ";
    cin >> descricao;
    cout << "Informe o preço: ";
    cin >> preco;
    Produto P(codigo,descricao,preco);
    ListaProdutos.push_back(P);
  }
  else if (opcao == 2) {
    int codigo;
    string nome;
    string endereco;
    cout << "Informe o código: ";
    cin >> codigo;
    cout << "Informe o nome: ";
    cin >> nome;
    cout << "Informe o endereço: ";
    cin >> endereco;
    Cliente C = Cliente();
    C.setCodigo(codigo);
    C.setNome(nome);
    C.setEndereco(endereco);
    ListaClientes.push_back(C);
  }
  else if (opcao == 3) {
    Pedido P = Pedido();
    int opcao3;
    cout << "--Cadastro dos pedidos ---\n\n";
    cout << "31 - Consultar produtos\n\n";
    cout << "32 - Consultar cliente\n\n";
    cout << "33 - Inserir cliente no pedido\n\n";
    cout << "34 - Inserir data do pedido\n\n";
    cout << "35 - Cadastrar item do pedido\n\n";
    cout << "Informe a opção desejada: ";

    cin >> opcao3;

    if (opcao3 == 31) {
      int codigo;
      cout << "Informe o código do produto: ";
      cin >> codigo;
        for (int x = 0; x < ListaProdutos.size(); x++) {
          if (ListaProdutos[x].getCodigo() == codigo) {
            ListaProdutos[x].exibirDados();
          }
        }
    }
    else if (opcao3 == 32) {
      int codigo;
      cout << "Informe o código do cliente: ";
      cin >> codigo;
      for (int x = 0; x < ListaClientes.size(); x++) {
        if (ListaClientes[x].getCodigo() == codigo) {
          ListaClientes[x].exibirDados();
        }
      }
    }
    else if (opcao3 == 33) {
      int codigo;
      cout << "Informe o código cliente:";
      cin >> codigo;
      for (int x = 0; x < ListaClientes.size(); x++) {
        if (ListaClientes[x].getCodigo() == codigo) {
          P.setCliente(ListaClientes[x]);
        }
      }
    }
    else if (opcao3 == 34) {
      int dia, mes, ano;
      cout << "Informe dia, mês e ano:";
      cin >> dia >> mes >> ano;
      Data D(dia, mes, ano);
      P.setData(D);
    }
    else if (opcao3 == 35) {
    while (true) {
    string resp = "s";
      int codigopedido;
      int codigoproduto;
      int quantidade;
      cout << "--Cadastro do item do Pedido---\n\n";
      cout << "Informe o código do pedido: ";
      cin >> codigopedido;
      cout << "Informe o código do produto: ";
      cin >> codigoproduto;
      cout << "Informe a quantidade: ";
      cin >> quantidade;

      P.setCodigo(codigopedido);
      for (int x = 0; x < ListaProdutos.size(); x++) {
        if (ListaProdutos[x].getCodigo() == codigoproduto) {
          ItemPedido I(quantidade, ListaProdutos[x]);
          P.adicionarItem(I);
        }
      }
    ListaPedidos.push_back(P);
    cout << "Deseja adicionar mais um item? [s/n]: ";
    cin >> resp;
    if (resp == "n") {
      break;
    }
    }
    }
  }
  else if (opcao == 4) {
    int codigo;
    cout << "Informe o código do pedido: ";
    cin >> codigo;
    for (int x = 0; x < ListaPedidos.size(); x++) {
      if (ListaPedidos[x].getCodigo() == codigo) {
        ListaPedidos[x].exibirDados();
      }
    }
  }
  else if (opcao == 5) {
    double totalP;
    for (int x = 0; x < ListaPedidos.size(); x++) {
      ListaPedidos[x].exibirDados();
      totalP += ListaPedidos[x].getTotal();
    }
    cout << totalP << endl;
  }
  else if (opcao == 6) {
    return 0;
  }
}
}