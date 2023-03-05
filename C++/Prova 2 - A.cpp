#include <iostream>
using namespace std;
void dec2bin(int dec){
    if(dec > 1)
    dec2bin(dec/2);
    cout<<(dec%2);

}
int main(){
 int n;
 cin >> n;
 dec2bin(n);
 cout << dec << endl;
 return 0;
}
