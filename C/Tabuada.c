#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Faça um algoritmo que imprima a tabuada de multiplicação de 1 a 10 .

int main(){
  int i,j;
  for (i=1;i<=10;i++){
    for(j=0;j<=10;j++){
      printf("%d X %d = %d\n",i,j,i*j);
    }
    printf("\n");
  }
}