#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Escreva um algoritmo que pegue um valor e mostre ele multiplicado por 5

int main(){
  setlocale(LC_ALL, "Portuguese");
  int valor;
  printf("Digite um valor aleatório: \n");
  scanf("%d",&valor);
  printf("O valor %d multplicado por 5 é igual a %d. \n", valor, valor*5);
}