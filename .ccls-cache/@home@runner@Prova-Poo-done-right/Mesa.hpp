#pragma once
#include <string>
#include "Prato.hpp"
#include <vector>
using namespace std;

class Mesa
{
private:
  string pessoas[4];
  int m_numPessoas;
  vector <Prato> pedido;

public:
  Mesa(string="", string="", string="", string="");
  
  float fecharConta();
  void zeraPedidos();
  void ImprimeNotaFiscal();
  void adicionaAoPedido(Prato);
  void ImprimeMesa();
  
};
