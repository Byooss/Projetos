#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Elabore um algoritmo que leia um vetor de 10 posições e imprima a quantidade de números pares

int main(){
  setlocale(LC_ALL, "portuguese");

  int i,gaveta[10],qntPar;
  qntPar=0;
  
  for(i=0;i<10;i++){
    printf("Digite o %dº número do vetor: ",i+1);
    scanf("%d",&gaveta[i]);
    if(gaveta[i]%2==0){
      qntPar+=1;
    }
  }
  if(qntPar>=1){
    
    printf("\nVocê digitou %d números pares!\n\nOs números pares digitados foram: [ ",qntPar);
    for(i=0;i<10;i++){
      if(gaveta[i]%2==0){
    printf("%d ",gaveta[i]);
    }}
    printf("]");
  }
  else{
    printf("Nenhum número par foi digitado.");
  }
}