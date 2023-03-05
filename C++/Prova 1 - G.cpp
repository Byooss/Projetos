#include <iostream>
#include <string>
using namespace std;


int main(){
string frase;
getline (cin, frase);
  
for(int i=0;i<frase.size();i++){
  frase[i]=toupper(frase[i]);
  }
cout<<frase<<endl;
}
