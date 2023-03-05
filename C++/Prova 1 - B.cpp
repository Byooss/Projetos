#include <iostream>
using namespace std;

int main()
{
  int pri_Aberto,seg_Fechado; 
  cin >> pri_Aberto >> seg_Fechado;
  int pri_Fechado,seg_Aberto;
  cin >> pri_Fechado>>seg_Aberto;
  int numb, resultA,resultB;
  cin >>numb;
  resultA=0, resultB=0;
  int i,j;
  i = pri_Aberto+1;
  j = pri_Fechado;
for (i;i<=seg_Fechado;i++){
  
  if (i == numb)
  resultA++;
  
  }
for (j;j<seg_Aberto;j++){
  
  if(j==numb)
  resultB++;

  }
if (resultA==1 && resultB==1)
  cout<<"Ambos!"<< endl;
if (resultA==1 && resultB==0)
  cout<<"Primeiro intervalo!"<< endl;
if (resultA==0 && resultB==1)
  cout<<"Segundo intervalo!"<< endl;
if (resultA==0 && resultB==0)
  cout<<"Nenhum!"<< endl;
}
