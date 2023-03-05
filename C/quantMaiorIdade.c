#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


// Elabore um programa em C que leia a idade de 50 pessoas e diga quantos são maiores de idade.



int main(){
  setlocale(LC_ALL, "Portuguese");
  int i, idade,mIdade;
  mIdade=0;
    for(i=0;i<5;i++){
      printf("Digite sua idade:\n");
      scanf("%d",&idade);
      if(idade>=18){
        mIdade++;
      }
    }
  printf("\nDessas pessoas, %d são maiores de idade!\n",mIdade);
}