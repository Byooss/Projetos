#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Elabore um algoritmo que leia um vetor de 6 posições e mostre a soma dos números ímpares



int main(){
  setlocale(LC_ALL, "portuguese");

  int i,gaveta[6],totalImpar;
  totalImpar=0;
  
  for(i=0;i<6;i++){
    printf("Digite o %dº número do vetor: ",i+1);
    scanf("%d",&gaveta[i]);
    if(gaveta[i]%2!=0){
      totalImpar+=gaveta[i];
    }
  }
  if(totalImpar!=0){
    printf("\nA soma dos números Ímpares digitados foi %d!\n\nOs números ímpares digitados foram: ",totalImpar);
    printf("[ ");
    for(i=0;i<6;i++){
      if(gaveta[i]%2!=0){
    printf("%d ",gaveta[i]);
    }
    }
    printf("]");
  }
  else{
    printf("Nenhum número par foi digitado.");
  }
}