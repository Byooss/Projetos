#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elabore um algoritmo que leia as 2 notas do aluno e calcule a média de cada um. 
De acordo com o seu curso diga se o mesmo está aprovado ou reprovado :
Sistema de informação = média 7,0
Administração = média 5,0
Fisioterapia = média 8,0
Direito = média 9,0*/

int main(){
  setlocale(LC_ALL, "Portuguese");
  int  select;
  float nota1, nota2,media;
  do{
    printf("\nDigite sua primeira nota:\n");
    scanf("%f",&nota1);
    printf("Digite sua segunda nota:\n");
    scanf("%f",&nota2);
    media=(nota1+nota2)/2;
    if(media<0 || media>10){
      printf("Digite uma nova válida!\n");
    }
    }
    while(media<0 || media>10);
    
  
    do{
      printf("Escolha seu curso:\n1 - Sistema de Informação\n2 - Administração\n3 - Fisoterapia\n4 - Direito\n");   
      scanf("%d",&select);
    switch(select){
      case 1:
        if (media>=7){
          printf("Você foi aprovado em Sistema de Informação com média %.1f",media);
        }
        else{
          printf("Infelizmente você foi reprovado em Sistema de informações com média %.1f",media);
        }
        break;
      
      case 2:
        if (media>=5){
          printf("Você foi aprovado em Administração com média %.1f",media);
        }
        else{
          printf("Infelizmente você foi reprovado em Administração com média %.1f",media);
        }
        break;
      
      case 3:
        if (media>=8){
          printf("Você foi aprovado em Fisoterapia com média %.1f",media);
        }
        else{
          printf("Infelizmente você foi reprovado em Fisoterapia com média %.1f",media);
        }
        break;
      
      case 4:
        
        if (media>=9){
          printf("Você foi aprovado em Direito com média %.1f",media);
        }
        else{
          printf("Infelizmente você foi reprovado em Direito com média %.1f",media);
        }
        break;
      
      }    
    } while(select<=0 || select>=5);
}