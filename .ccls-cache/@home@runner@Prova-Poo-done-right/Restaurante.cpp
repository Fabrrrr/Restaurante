#include "Restaurante.hpp"

Restaurante::Restaurante()
{

  
  }

void Restaurante::adicionaAoPedido(int m, Prato n)
{
 mesa[m].adicionaAoPedido(n);
  
}
void Restaurante::Adicionanome(int i,string a, string b, string c, string d)
{ 
  mesa[i]=Mesa(a,b,c,d);
}
void Restaurante::FechaConta(int n)
{
  mesa[n].ImprimeNotaFiscal();
}
void Restaurante::ConsultaMesas()
{
   for(int i =0;i<10;i++)
  {
    cout << "numero da mesa:"<<i <<"-"<<"numero de pessoas: ";
    mesa[i].ImprimeMesa();
  }
}