#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elabore um algoritmo que leia dois números inteiros. 
Multiplique o primeiro por 4 e o segundo por 3 e depois imprima os resultados
*/

int main(){
  setlocale(LC_ALL, "Portuguese");
  int valor1, valor2;
  printf("Digite dois valores : \n");
  scanf("%d%d", &valor1,&valor2);
  printf("A multiplicação dos valores são: \n%d x %d = %d \n%d x %d = %d\n", valor1,4,valor1*4,valor2,3,valor2*3);
  }