#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");
  int select;

  do{
    printf("\nDigite o mês que você deseja saber a quantidade de dias\n\n1 - Janeiro\n2 - Feveiro\n3 - Março\n4 - Abril\n5 - Maio\n6 - Junho\n7 - Julho\n8 - Agosto\n9 - Setembro\n10 - Outubro\n11 - Novenbro\n12 - Dezembro\n\n");    
    scanf("%d",&select);
    if(select==1||select==3||select==5||select==7||select==8||select==10||select==12){
      select=1;
    }
    else if(select==4||select==6||select==9||select==11){
      select=3;
    }
    switch(select){
      case 1:
        printf("\nEsse mês tem 31 dias\n");
        break;
      case 2:
        printf("\nEsse mês tem 28 dias\n");
        break;
      case 3:
        printf("\nEsse mês tem 30 dias\n");
        break;
      default:
        printf("\nEscolha um mês válido!\n");
    }
  }while(select<1||select>3);
}
