#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Escreva um algoritmo que pegue dois valores e mostra o primeiro dividido por 2 e o segundo multiplicado por 3

int main(){
  setlocale(LC_ALL, "Portuguese");
  int valor1, valor2;
  printf("Digite dois valores: \n");
  scanf("%d%d",&valor1,&valor2);
  printf("O valor %d divido por 2 é igual a %d. \n",valor1,valor1/2);
  printf("O valor %d multiplicado por 3 é igual a %d. \n",valor2,valor2*3);
  }