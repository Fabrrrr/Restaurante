#pragma once
#include "Mesa.hpp"
using namespace std;

class Restaurante
{
private:
Mesa mesa[10];




public:
  Restaurante();
  void FechaConta(int n);
  void adicionaAoPedido(int m, Prato n);
  void Adicionanome(int i,string a, string b, string c, string d);
  void ConsultaMesas();
};
