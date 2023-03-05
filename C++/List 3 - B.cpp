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

  int i;
  string pessoa;
  i = 0;
  
  for (int i = 0;i < 3;i++)
  {
  cin >> user[i].nome >> user[i].idade >> user[i].numero;
  }
  cin >> pessoa;
  for (int i = 0;i < 3;i++)
    {
     if (user[i].nome == pessoa)
       cout << user[i].nome << " " << user[i].idade << " " <<user[i].numero << endl;
    }  
}
