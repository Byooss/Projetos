#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Escreva um algoritmo que calcule a média de 3 valores

int main(){
  setlocale(LC_ALL, "Portuguese");
  int valorA, valorB, valorC;
  printf("Digite três valores: \n");
  scanf("%d%d%d",&valorA,&valorB,&valorC);
  printf("O valor da média entre %d, %d e %d é igual a %d \n", valorA, valorB, valorC, (valorA+valorB+valorC)/3);
}