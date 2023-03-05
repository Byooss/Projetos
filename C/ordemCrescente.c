#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elabore um algoritmo que leia dois valores inteiros e imprima-os em ordem crescente.*/

int main(){
  setlocale(LC_ALL, "Portuguese");
  int valor1, valor2;
  printf("Digite dois valores: \n");
  scanf("%d%d", &valor1,&valor2);
  if(valor1<valor2){
    printf("Os valores em ordem crescente ficam assim:\n%d, %d\n",valor1,valor2);
  }
  else{ 
    printf("Os valores em ordem crescente ficam assim:\n%d, %d\n",valor2,valor1);
  }
}