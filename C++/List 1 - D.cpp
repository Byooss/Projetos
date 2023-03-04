#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
cout << setprecision(2) << fixed;
    float notas;
    notas = 1;
    float i = 0; 
    float j = 0;
  while ( notas >= 0)
  {
    cin >> notas;
    if (notas < 0)
      break;
    i = notas + i;
    j++;
  }   
cout << "Media: "<< i/j;
}
