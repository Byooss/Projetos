#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um algoritmo que receba dois números e ao final mostre a soma, subtração, 
multiplicação e a divisão dos números lidos de acordo com a opção escolhida pelos usuário.*/

int main(){
  setlocale(LC_ALL, "Portuguese");
  int valor1, valor2, select;

  do{
    printf("Escolha uma opção de calculo:\n1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");    
    scanf("%d",&select);
  switch(select){
    case 1:
      printf("Digite os dois valores que deseja Somar: ");
      scanf("%d%d",&valor1,&valor2);
      printf("%d + %d = %d\n",valor1,valor2,valor1+valor2);
      break;
    case 2:
      printf("Digite os dois valores que deseja Subtrair: ");
      scanf("%d%d",&valor1,&valor2);
      printf("%d - %d = %d\n",valor1,valor2,valor1-valor2);
      break;
    case 3:
      printf("Digite os dois valores que deseja Multiplicar: ");
      scanf("%d%d",&valor1,&valor2);
      printf("%d x %d = %d\n",valor1,valor2,valor1*valor2);
      break;
    case 4:
      printf("Digite os dois valores que deseja Dividir: ");
      scanf("%d%d",&valor1,&valor2);
      printf("%d / %d = %d\n",valor1,valor2,valor1/valor2);
      break;
    }
  } while(select<=0 || select>=5);
}