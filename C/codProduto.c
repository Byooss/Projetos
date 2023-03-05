#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");
  int cod;
  float qtd;

  do{
    printf("\nDigite o código do que produto você quer:\n\n100 - Cachorro Quente\n101 - Bauru Simples\n102 - Bauru com Ovo\n103 - Hamburguer\n104 - Cheeseburguer\n105 - Refrigerante\n");
    scanf("%d",&cod);
    switch(cod){
      case 100:
        printf("Quantos Cachorros Quentes você quer?\n");
        scanf("%f",&qtd);
        printf("Ficou um total de R$%.2f\n",qtd*1.70);
        break;
      case 101:
        printf("Quantos Baurus Simples você quer?\n");
        scanf("%f",&qtd);
        printf("Ficou um total de R$%.2f\n",qtd*2.30);
        break;
      case 102:
        printf("Quantos Baurus com Ovos você quer?\n");
        scanf("%f",&qtd);
        printf("Ficou um total de R$%.2f\n",qtd*2.60);
        break;
      case 103:
        printf("Quantos Hamburgueres você quer?\n");
        scanf("%f",&qtd);
        printf("Ficou um total de R$%.2f\n",qtd*2.40);
        break;
      case 104:
        printf("Quantos Cheeseburgueres você quer?\n");
        scanf("%f",&qtd);
        printf("Ficou um total de R$%.2f\n",qtd*2.50);
        break;
      case 105:
        printf("Quantos Refrigerantes você quer?\n");
        scanf("%f",&qtd);
        printf("Ficou um total de R$%.2f\n",qtd*1.00);
        break;
      default:
        printf("\nEscolha um código válido para o produto!\n");
    }
  }while(cod<100 || cod>105);
}