#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


// Em uma pesquisa de campo, uma editora solicitou os seguintes dados para os entrevistados: 
// idade e quantidade de livros que leu no ano de 2016. Faça um programa que leia os dados de 
// 100 pessoas, calcule e imprima:
// a) A quantidade de pessoas que leram 5 livros ou mais.
// b) A média de idade das pessoas que leram menos que 5 livros.
// c) A quantidade total de livros lidos pelos entrevistados menores de 10 anos.


int main(){
  setlocale(LC_ALL, "Portuguese");
  int i, qntLivros,maior5,qntDez,idade,menor5,qntIdade;
  
  maior5=0;
  menor5=0;
  qntIdade=0;
  qntDez=0;

   for(i=0;i<100;i++){
    printf("Digite sua idade:\n");
    scanf("%d",&idade);
    printf("Digite o número de livros que você leu em 2016:\n");
    scanf("%d",&qntLivros);

    if(qntLivros>=5){
      maior5++;
    }
    else{
      menor5++;
      qntIdade+=idade;
    }
    if(idade<10){
      qntDez+=qntLivros;
    }
  }
  
  printf("\nForam %d pessoas que leram 5 ou mais livros.\n",maior5);
  if(menor5!=0){
    printf("\nA média de idade de quem leu menos que 5 livros foi %d anos.\n",qntIdade/menor5);
  }
  else{
    printf("\nNenhuma pessoa leu menos que 5 livros.\n");
  }
  printf("\nTodos os jovens menores de 10 anos leram %d livros no total.",qntDez);
}