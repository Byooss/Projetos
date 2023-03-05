#include <iostream>
using namespace std;
int main (){
 int pos1,pos2,res,*p1,*p2,*p3;
 int i, vet[5];
 for (i=0; i<5; i++)
 cin >> vet[i];
 cin >> pos1 >> pos2;
 p1 = vet;
 p2 = &vet[pos1];
 p3 = &vet[pos2];

 res = *(p1+3)*5;
 
 cout << vet[5-pos2]<<endl;
 cout << vet[5-pos1]<<endl;
 cout << vet[4]<<endl;
 cout << res;
 return 0;
}
