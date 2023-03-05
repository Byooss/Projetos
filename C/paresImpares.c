#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


// Elabore um programa em C que leia 15 valores 
// inteiros e no final mostre a soma dos pares e a quantidade dos ímpares


int main(){
  setlocale(LC_ALL, "Portuguese");
  int i, num,pares, impares;
  pares=0;
  impares=0;
  
  for(i=0;i<15;i++){
    printf("\nDigite um valor:\n");
    scanf("%d",&num);
    if(num%2==0){
      pares+=num;
    }
    else{
      impares+=1;
    }
  }
  printf("\nA soma de número pares é %d.\nA quantidade de números Ímpares é %d.\n",pares,impares);
}