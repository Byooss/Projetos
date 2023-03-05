#include <iostream>
using namespace std;

int main()
{
int listaA[5];
int listaB[5];

  for (int i=0;i<5;i++){
    cin >> listaA[i];
  }
  for (int i=0;i<5;i++){
    cin >> listaB [i];
  }
int j; int p;
j = 0; p = 0;
  for (int i=0;i<5;i++)
{ int n;
  n = 0;
  for (int k=0;k<5;k++){
    if (listaA[i] == listaB[k])
      j = listaA[i] + j;
    else
      n = n + 1;
}
if (n == 5) 
  p = listaA[i] + p;
}
cout << p << endl;
cout << j << endl;
}
