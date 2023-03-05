#include <iostream>
using namespace std;
 
int main (){
int num_1, num_2, *p1, *p2;
  cin >> num_1;
  cin >> num_2;

p1= &num_1;
p2= &num_2;

int soma,subtra,multi,divis,resto;

soma = *p1 + *p2;
subtra=*p1 - *p2;
multi=*p1 * *p2;
divis=*p1 / *p2;
resto=*p1 % *p2;
  cout<< soma << endl;
  cout<< subtra << endl;
  cout<< multi << endl;
  cout<< divis << endl;
  cout<< resto << endl;
}
