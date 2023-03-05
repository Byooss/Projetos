#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 3. Faça um algoritmo que imprima a tabuada de multiplicação 
// entre 2 números que o usuário escolher.


int main(){
  int i,j,ini,fim,troca;
  printf("Escolha em qual tabuada você quer começar: ");
  scanf("%d",&ini);
  printf("Escolha em qual tabuada você quer terminar: ");
  scanf("%d",&fim);

  if(fim<ini){
    troca = ini;
    ini = fim;
    fim = troca;
  }
  
  for (i=ini;i<=fim;i++){
    for(j=0;j<=10;j++){
      printf("%d X %d = %d\n",i,j,i*j);
    }
    printf("\n");
  }
}