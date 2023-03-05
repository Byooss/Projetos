#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Crie um algoritmo que imprima o gênero de uma pessoa utilizando um dos caracteres(M ou F) como entrada.*/

int main(){
  setlocale(LC_ALL, "Portuguese");
  
  char genero;

  do{
    printf("\nEscreva o gênero que vc se identifica:\nF\nM\n");
    scanf("%s",&genero);
    
    if(genero=='f'){
      genero='F';
    }
    if(genero=='m'){
      genero='M';
      }
      switch(genero){
        case 'M':
          printf("Você faz parte do genêro Masculino!");
          break;
        case 'F':
          printf("Você faz parte do genêro Feminino!");
          break;
        default:
          printf("Digite uma opção válida!\n");
      }
  }while(genero!='M' && genero!='F');
}