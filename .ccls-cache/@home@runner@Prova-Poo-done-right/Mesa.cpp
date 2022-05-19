#include "Mesa.hpp"

Mesa::Mesa(string a, string b, string c, string d)
{
  pessoas[0]=a;
  pessoas[1]=b;
  pessoas[2]=c;
  pessoas[3]=d;

  m_numPessoas=0;
  
  for(int i =0;i<4;i++)
  {
    if(pessoas[i]!="")
    {
      m_numPessoas++;  
    }
  }
}
float Mesa::fecharConta()
{
  float precoFinal=0.0f;
  for(int i=0;i<pedido.size();i++)
  {
    precoFinal+=pedido[i].getPreco();
  }
  return precoFinal;
}
void Mesa::zeraPedidos()
{
  pedido.clear();
}
void Mesa::ImprimeNotaFiscal()
{
  for(int i=0;i<pedido.size();i++)
  {
    cout<<" pedido "<<i+1 <<")" << pedido[i].getNome() << " "<< "Preco:"<< pedido[i].getPreco()<<endl;
      
  }
  cout<<endl;
  cout<<"total por pessoa: "<< fecharConta()/m_numPessoas;
}
void Mesa::adicionaAoPedido(Prato p )
{
  pedido.push_back(p);
}
void Mesa::ImprimeMesa()
{
  cout << m_numPessoas <<endl;
}