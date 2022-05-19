#include "Prato.hpp"


Prato:: Prato(string n, float p)
  { 
    m_nome = n;
    m_preco = p;  
  }

string Prato::getNome()
{
   return m_nome;
}
float Prato::getPreco()
{
  return m_preco;
}