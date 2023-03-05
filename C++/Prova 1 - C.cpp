#include <iostream>
using namespace std;

int main()
{
int angA,angB, angC;
  cin>>angA;
  cin>>angB;
  cin>>angC;
  int acut,obtu,reto,soma;
acut=0;
obtu=0;
reto=0;
soma=angA+angB+angC;
  
if(soma>180)
  cout<<"Nao eh triangulo!"<<endl;

if (angA<90)
  acut++;
if (angA==90)
  reto++;
if (angA>90 && angA<180)
  obtu++;

if (angB<90)
  acut++;
if (angB==90)
  reto++;
if (angB>90 && angA<180)
  obtu++;

if (angC<90)
  acut++;
if (angC==90)
  reto++;
if (angC>90 && angA<180)
  obtu++;
  
if(acut==3 && soma<=180)
  cout<<"Triangulo Acutangulo!"<<endl;
if(reto>=1 &&soma<=180)
  cout<<"Triangulo Retangulo!"<<endl;
if(obtu==1)
  cout<<"Triangulo Obtusangulo!"<<endl;
  }
