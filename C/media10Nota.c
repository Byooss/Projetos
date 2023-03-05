#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


// Elabore um algoritmo que calcule a média de 2 notas de 10 alunos


int main(){
  setlocale(LC_ALL, "Portuguese");
  int i;
  float media,nota1,nota2;
  
  for(i=0;i<10;i++){
    printf("\nDigite sua Primeira Nota:\n");
    scanf("%f",&nota1);
    printf("\nDigite sua Segunda Nota:\n");
    scanf("%f",&nota2);
    media = (nota1+nota2)/2;
    if(media<=10){
    printf("\nA sua média é %.1f.\n",media);
    }
    else{
      printf("\nDigite a suas notas de forrma correta!");
    }
  }
}