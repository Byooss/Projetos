#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elabore um algoritmo que leia um valor inteiro e diga se ele é maior, menor ou igual a 10*/

int main(){
  setlocale(LC_ALL, "Portuguese");
  int valor;
  printf("Digite um valor : \n");
  scanf("%d", &valor);
  if(valor>10){
    printf("O valor %d é maior que 10.\n",valor);
  }
  else if(valor<10){
    printf("O valor %d é menor que 10.\n", valor);
  }
  else{
    printf("O valor digitado é igual a 10.\n");
  }
}