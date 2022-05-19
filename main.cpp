#pragma once
#include "Restaurante.hpp"
#include "Cardapio.hpp"
#include "Mesa.hpp"

#include <vector>

int main() 
{  
  //Cria restaurante de bolos
  Restaurante restaurante;

  //mostra lista de mesas
 
  
 //Cria pratos (tanto faza lista)
  vector <Prato> pratos;
  pratos.push_back(Prato("Bolo de cenoura com cobertura de chocolate",19)); 
  pratos.push_back(Prato("Bolo RedVelvet", 25.00 ));
  pratos.push_back(Prato("Bolo de Chocolate", 19));


  //Passa Cardapio
  Cardapio cardapio(pratos);

  //teste de pratos do cardapio
  for (int i = 0; i < cardapio.getPratos().size(); i++)
  {
    cout <<i+1<<") " << cardapio.getPratos()[i].getNome()<< " " << "R$" << cardapio.getPratos()[i].getPreco() <<endl;
  }
  
  //colocando clientes nas Mesas,os pedidos e
  //imprime a nota fiscal fiscal no final
  restaurante.Adicionanome(0,"joao","maria","","");
  restaurante.adicionaAoPedido(0,cardapio.getPratos()[0]);
  restaurante.adicionaAoPedido(0,cardapio.getPratos()[1]);
  restaurante.FechaConta(0);

  restaurante.ConsultaMesas();

  
}