#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elabore um algoritmo que leia dois números inteiros e  diga qual é o maior*/

int main(){
  setlocale(LC_ALL, "Portuguese");
  int valor1, valor2;
  printf("Digite dois valores : \n");
  scanf("%d%d", &valor1,&valor2);
  if(valor1>valor2){
    printf("O valor %d é maior que %d.\n",valor1,valor2);
  }
  else if(valor1<valor2){
    printf("O valor %d é maior que %d.\n", valor2, valor1);
  }
  else{
    printf("O valores digitados são iguais.\n");
  }
}