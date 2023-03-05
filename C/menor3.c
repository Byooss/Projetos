#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elabore um algoritmo que leia 3 valores inteiros e diga qual dos 3 é o menor.*/

int main(){
  setlocale(LC_ALL, "Portuguese");
  int valor1, valor2, valor3;
  printf("Digite três valores: \n");
  scanf("%d%d%d", &valor1,&valor2,&valor3);
  if((valor1<valor2) && (valor1<valor3)){
    printf("O menor valor digitado é %d.\n",valor1);
  }
  else if((valor2<valor1) && (valor2<valor3)){ 
    printf("O menor valor digitado é %d.\n",valor2);
  }
  else if((valor3<valor1) && (valor3<valor2)){
    printf("O menor valor digitado é %d.\n",valor1);
  }
  else{
    printf("Os valores digitados são iguais!.\n");
  }
}