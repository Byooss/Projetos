#include <iostream>
#include <iomanip>
using namespace std;


int main(){
int dim,quant;
  cin>>dim;
char op;
  cin>>op;
float matriz[dim][dim],soma;
soma=0;
quant=0;
float valorMatriz;
  for (int i=0;i<dim;i++){
    for(int j=0;j<dim;j++){
      cin>>valorMatriz;
      matriz [i] [j] = valorMatriz;
  }
}
  for (int i=0;i<dim;i++){
    for(int j=0;j<dim;j++){
      if (i<j)
        soma=soma+matriz[i][j];
            
      if (i<j)
        quant=quant+1;
                
  }
}
cout<<setprecision(2)<<fixed;
  
 if(op=='S')
   cout<<soma<<endl;
  else
   cout<<soma/quant<<endl;     
}
