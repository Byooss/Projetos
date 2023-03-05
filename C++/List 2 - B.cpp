#include <iostream>
#include <string>
using namespace std;

int main()
{
  int cifra;
  string nome;
  int i;
  i=0;
  cin >> cifra >> nome;
  for (int i = 0; i < nome.size();i++)      
    if (cifra + nome[i] >= 123)
  {
    nome[i] = nome[i] - 122;
    nome[i] = nome[i] + 96;
    nome[i] = nome[i] + cifra;
  }
    else
    nome[i] = nome[i] + cifra;
  cout << nome << endl;
}
