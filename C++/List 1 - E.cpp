#include <iostream>
using namespace std;
int main()
{
  int num;
    num = 1;
    int i = 0; 
    int j = 0;
  while ( num > 0)
  {
    cin >> num;
    if (num <= 0)
      break;
    i = num + i;
    j++;
  }   
cout << i <<endl;
cout << j << endl; 
}
