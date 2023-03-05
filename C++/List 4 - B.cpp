#include <iostream>
#include <string.h>
using namespace std;

void atualizarPalavra(char *s, char orig, char dest)
{int tam = strlen(s);
int i; 
for (int i = 0;i<tam;i++)
  {
    if (s[i] == orig)
      s[i] = dest;
  }
}
int main()
{
  char palavra[15];
  char orig;
  char dest;
  cin >> palavra;
  cin >> orig;
  cin >> dest; 
  atualizarPalavra(palavra,orig,dest);
  cout << palavra <<endl;
  
  return 0; 
}
