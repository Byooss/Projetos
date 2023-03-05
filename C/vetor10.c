#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Elabore um algoritmo que guarde 10 valores inteiros em um vetor


int main(){
  setlocale(LC_ALL, "portuguese");

  int i,gaveta[10];

  for(i=0;i<10;i++){
    printf("Digite o %dº do vetor: ",i+1);
    scanf("%d",&gaveta[i]);
  }
  printf("\nOs números digitados foram: [ ");
  for(i=0;i<10;i++){
    printf("%d ",gaveta[i]);
  }
  printf("]");
}