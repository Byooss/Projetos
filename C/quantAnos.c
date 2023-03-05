#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


// Elabore um programa em C que leia o ano de nascimento de 20 pessoas e diga se é maior de idade 
// ou menor de idade

int main(){
  setlocale(LC_ALL, "Portuguese");
  int i, nasc,idade;
  
  for(i=0;i<20;i++){
    printf("\nDigite o seu ano de nacimento:\n");
    scanf("%d",&nasc);
    idade = 2022-nasc;
    if(idade>=18){
      printf("Você é maior de idade, tem %d anos! Já pode ser preso.\n",idade);
    }
    else{
      printf("Você é menor de idade, tem %d anos! Não pode beber ainda.\n",idade);
    }
  }
}