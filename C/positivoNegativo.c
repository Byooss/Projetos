#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elabore um algoritmo que leia um numero inteiro e diga se ele é negativo ou positivo
*/

int main(){
  setlocale(LC_ALL, "Portuguese");
  int valor;
  printf("Digite um valor: \n");
  scanf("%d", &valor);
  
  if(valor==0){
    printf("O valor %d é neutro.", valor);
  }
  else if(valor>0){
    printf("O valor %d é positivo.", valor);
  }
  else{
    printf("O valor %d é negativo.", valor);
  }
  }