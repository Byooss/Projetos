#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*A Loja Mamão com Açúcar está vendendo seus produtos em 5, 10, 12 e 24 prestações sem juros. 
Faça um algoritmo que receba um valor de uma compra e mostre o valor das prestações.*/

int main(){
  setlocale(LC_ALL, "Portuguese");
  int  select;
  float valorC;
  
  do{
    printf("Escolha em quantas prestações que dividir sua compra:\n5  Prestações\n10 Prestações\n12 Prestações\n24 Prestações\n");   
    scanf("%d",&select);
  switch(select){
    case 5:
      printf("Qual é o valor da compra: ");
      scanf("%f",&valorC);
      printf("5xR$%.2f = R$%.2f\n",valorC,valorC/5);
      break;
    case 10:
      printf("Qual é o valor da compra: ");
      scanf("%f",&valorC);
      printf("10xR$%.2f = R$%.2f\n",valorC,valorC/10);
      break;
    case 12:
      printf("Qual é o valor da compra: ");
      scanf("%f",&valorC);
      printf("12xR$%.2f = R$%.2f\n",valorC,valorC/12);
      break;
    case 24:
      printf("Qual é o valor da compra: ");
      scanf("%f",&valorC);
      printf("24xR$%.2f = R$%.2f\n",valorC,valorC/24);
      break;
    }    
  } while(select!=5 && select!=10 && select!=12 && select!=24);
}