#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Escreva um algoritmo que mostre a soma de dois valores

int main(){
  setlocale(LC_ALL, "Portuguese");
  int valorA, valorB;
  printf("Digite dois valores: \n");
  scanf("%d%d",&valorA,&valorB);
  printf("O valor do soma entre %d e %d é igual a %d \n", valorA,valorB,valorA+valorB);
}