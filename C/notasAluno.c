#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elabore um algoritmo que leia 3 notas de um aluno e diga se ele está aprovado, 
recuperação ou reprovado. Média de aprovação 7,0 Recuperação nota maior ou igual a 5. 
Caso menor que 5 reprovado.
*/

int main(){
  setlocale(LC_ALL, "Portuguese");
  float nota1,nota2,nota3,media;
  printf("Digite suas 3 notas: \n");
  scanf("%f%f%f%", &nota1,&nota2,&nota3);
  media=(nota1+nota2+nota3)/3;
  
  if((media<5) && (media>=0)){
    printf("Você foi repovado com média %.1f.\n",media);
  }
  else if((media>=5) && (media<7)){
    printf("Você foi para recuperação com média %.1f.\n", media);
  }
  else if((media>=7) && (media<=10)){
    printf("Você foi aprovado com média %.1f.\n",media);
  }
  else{
    printf("Você digitou valores de notas incompatíveis.\n",media);
  }
}