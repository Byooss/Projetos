#include <iostream>
#include <string>
using namespace std;

int main()
{
typedef struct agenda{
  string nome;
  int idade;
  long int numero;
  };
 agenda user[3];
  agenda mem;
int i;
  i = 0;
  for (int i = 0;i < 3;i++)
    cin >> user[i].nome >> user[i].idade >> user[i].numero;
   
  if( user[i].nome > user[1].nome)
  {
  mem = user[i];
  user[i]=user[1];
  user[1]=mem;
  }
  if (user[i].nome > user[2].nome)
  {
  mem = user[i];
  user[i]=user[2];
  user[2]=mem;
    cout << user[2].nome <<" ";
  }
  if (user[2].nome < user[1].nome)
  {
  mem = user[2];
  user[2] = user[1];
  user[1] = mem;
  }
  
   for (int i = 0;i < 3;i++)
     cout << user[i].nome << " " << user[i].idade << " " <<user[i].numero << endl;
}
