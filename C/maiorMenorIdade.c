#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Faça um algoritmo que receba a idade de 75 pessoas e mostre mensagem informando “maior de idade” e 
// “menor de idade” para cada pessoa. Considere a idade a partir de 18 anos como maior de idade.

int main(){
  setlocale(LC_ALL, "Portuguese");
  int i, idade;
  for(i=0;i<75;i++){
    printf("\nDigite a sua idade:\n");
    scanf("%d",&idade);
    if (idade>=18){
      printf("Você é maior de idade! Já pode ser preso.\n");
    }
    else{
      printf("Você é menor de idade! Não pode beber ainda.\n");
    }
  }
}