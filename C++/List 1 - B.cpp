#include <iostream>
using namespace std;

int main()
{
  char operação;
  cin >> operação;
  int x, y;
  cin >> x >> y;
  
  switch (operação)
  {
    case '+':
      cout << "soma:"<< x + y << endl;
    break;
    case '-':
      cout << "subtracao:"<< x - y << endl;
    break;
    case '*':
      cout << "multiplicacao:"<< x * y << endl;
    break;
    case '/':
      if (y == 0)
        cout << "erro: divisao por zero" << endl;
      else
        cout << "divisão:"<< x / y << endl;
    break;
  }  
}
