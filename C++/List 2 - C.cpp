#include <iostream>
#include <string>
using namespace std;

int main()
{
  int matriz [3][3];
  for (int l = 0; l<3;l++){
    for (int c = 0; c<3; c++){
    cin >> matriz[l][c];
    } 
  }
  int maior;
  maior = 0;
  for (int l = 0; l<3;l++){
    for (int c = 0; c<3; c++){
      if (matriz[l][c]>maior)
        maior = matriz[l][c];
      }
    }
  int soma,k;
  soma = 0;
  k = 0;
  for (int l = 0; l<3;l++){
    for (int c = 0; c<3; c++){
      if (matriz[l][c] == maior)
        k = c;
      }
    }
  for (int l = 0;l<3;l++){
    soma = matriz[l][k] + soma;
  }
  cout << soma << endl;
}
