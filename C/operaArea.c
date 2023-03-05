#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um algoritmo que realize as seguintes operações de acordo com a escolha do usuário. 
(1- área do quadrado, 2- área do triângulo, 3-área do retângulo, 4-cubo de um número)*/

int main(){
  setlocale(LC_ALL, "Portuguese");
  int  select;
  float valor1, valor2;
  
  do{
    printf("Escolha qual operação deseja realizar:\n1 - Área do Quadrado\n2 - Área do Triângulo\n3 - Área do Retângulo\n4 - Cubo de Um Número\n");   
    scanf("%d",&select);
  switch(select){
    case 1:
      printf("Digite o lado do quadrado em cm:\n");
      scanf("%f",&valor1);
      printf("A área do quadrado é %.2fcm^2\n",valor1*valor1);
      break;
    
    case 2:
      printf("Digite a base do triângulo:\n");
      scanf("%f",&valor1);
      
      printf("Digite a altura do triângulo:\n");
      scanf("%f",&valor2);
      
      printf("A área do triângulo é %.2fcm^2\n",(valor1*valor2)/2);
      break;
    
    case 3:
      printf("Digite a base do retaângulo:\n");
      scanf("%f",&valor1);
      
      printf("Digite a altura do retângulo:\n");
      scanf("%f",&valor2);
      
      printf("A área do triângulo é %.2fcm^2\n",valor1*valor2);
      break;
    
    case 4:
      printf("Digite o valor que deseja elevar ao cubo:\n");
      scanf("%f",&valor1);
      printf("O valor %.0f elevado ao cubo é igual %.0f\n",valor1,(valor1*valor1)*valor1);
      
      break;
    }    
  } while(select<=0 || select>=5);
}