#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Escreva um algoritmo que pegue um valor e mostre o seu sucessor

int main(){
  setlocale(LC_ALL, "Portuguese");
  int valor;
  printf("Digite um valor aleatório: \n");
  scanf("%d",&valor);
  printf("O próximo valor na sequência crescente é %d. \n",valor+1);
}