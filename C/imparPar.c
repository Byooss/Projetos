#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i,j=0,k=0,num[20],contPar=0,contImpar=0;
	
	for(i=0;i<20;i++){
		printf("Digite o %dº valor: ",i+1);
		scanf("%d",&num[i]);
		
    if(num[i]%2==0){
			contPar++;
		}
		else{
			contImpar++;
		}
	}
  printf("\n");
  
  int par[contPar],impar[contImpar];
  
  for(i=0;i<20;i++){
    if(num[i]%2==0){
      par[j]=num[i];
      j++;
    }
    else{
      impar[k]=num[i];
       k++;
    }
  }
    printf("\nO valores pares digitados foram: \n");
	for(i=0;i<contPar;i++){
		printf("%d\n",par[i]);
	}
  printf("\nO valores impares digitados foram: \n");
  
	for(i=0;i<contImpar;i++){
		printf("%d\n",impar[i]);
	}
}
