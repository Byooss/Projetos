#include <iostream>
using namespace std;

double fatorial(int i);

int main(){

  int num,p;

cin>>num;
cin>>p;
int posi;
  
  int cata [num];
  for (int i=0;i<num;i++){
  cata[i]=fatorial(2*i)/(fatorial(i+1)*fatorial(i));
  //cout<<cata[i]<<endl;
}
for (int j=0;j<=num;j++){
    if(p==cata[j])
    posi=j+1;
    //cout<<cata[j]<<endl;
}
if(posi<=num)
  cout<<p<<" esta na posicao "<<posi<<endl;
  else
  cout<<p<<" nao existe"<<endl;
}

double fatorial(int i){
if(i<2)
  return 1;
return fatorial(i-1)*i;
}
