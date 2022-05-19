#pragma once
#include <iostream>
#include <string>
using namespace std;

class Prato
{
private:
  string m_nome;
  float m_preco;
   

public:

  Prato(string n, float p);
  string getNome();
  float getPreco();

};