#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Faça um algoritmo que receba “20” números e mostre positivo, negativo ou zero para cada número.


int main(){
  setlocale(LC_ALL, "Portuguese");
  int i, num;
  
  for(i=0;i<20;i++){
    printf("\nDigite um número aleátório:\n");
    scanf("%d",&num);
    if (num>0){
      printf("O número %d é positívo.\n",num);
    }
    else if(num<0){
      printf("O número %d é negativo.\n",num);
    }
    else{
      printf("O número %d é neutro.\n",num);
    }
  }
}