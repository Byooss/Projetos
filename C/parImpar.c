#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elabore um algoritmo que some dois números inteiros e diga se o resultado é par ou ímpar*/

int main(){
  setlocale(LC_ALL, "Portuguese");
  int valor1, valor2;
  printf("Digite dois valores : \n");
  scanf("%d%d", &valor1,&valor2);
  if (valor1+valor2==0){
    printf("Os valores digitados são iguais a zero.\n");    
  }
  else if((valor1+valor2)%2==0){
    printf("O valor somado é %d, ele é Par!\n",valor1+valor2);
  }
  else
    printf("O valor somado é %d, ele é Ímpar!\n",valor1+valor2);
}