#include <iostream>
using namespace std;

int main()
{
int n_Dias,dia,mes,ano;
cin>>n_Dias;
  ano = n_Dias/365;
  mes = (n_Dias%365)/30;
  dia = (n_Dias%365)%30;  
  
if (mes<1 && n_Dias%365 != 0)
{
  mes = mes+1;
}

cout<<ano<<" ano(s)"<< endl;
cout<<mes<<" mes(es)"<<endl;
cout<<dia<<" dia(s)"<<endl;

}
