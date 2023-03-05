#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Elabore um algoritmo que leia um vetor de 20 posições e mostre a posição dos números pares.


int main(){
  setlocale(LC_ALL, "portuguese");

  int i,gaveta[20],qntPar;
  qntPar=0;
  
  for(i=0;i<20;i++){
    printf("Digite o %dº número do vetor: ",i+1);
    scanf("%d",&gaveta[i]);
    if(gaveta[i]%2==0){
      qntPar+=1;
    }
  }

  if(qntPar>=1){
    for(i=0;i<20;i++){
      if(gaveta[i]%2==0){
    printf("\nO número %d é par e foi digitado na %dº posição\n",gaveta[i],i+1);
    }}

  }
  else{
    printf("\nNenhum número par foi digitado.");
  }
}