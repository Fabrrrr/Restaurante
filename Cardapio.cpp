#include "Cardapio.hpp"


Cardapio::Cardapio(vector <Prato> p){
   pratos = p;
} 

 vector <Prato> Cardapio:: getPratos(){
   return pratos;
 }


