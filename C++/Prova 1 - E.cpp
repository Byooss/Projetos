#include <iostream>
using namespace std;

int main()
{
int quant,i;
  cin>>quant;
  i=0;
  int genero,masculino,feminino;
  masculino = 0; feminino = 0;
  for (i;i<quant;i++)
  {
  cin>>genero;
  if (genero==1)
    masculino ++;
  else 
    feminino ++;
  }
  cout<<masculino<<endl;
  cout<<feminino<<endl;
}
