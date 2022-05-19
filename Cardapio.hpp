#pragma once
using namespace std;
#include "Prato.hpp"
#include <vector>
class Cardapio
{
private:
  vector <Prato> pratos;
  
  
public:
  Cardapio(vector <Prato> p);
  vector <Prato> getPratos();

};
  
