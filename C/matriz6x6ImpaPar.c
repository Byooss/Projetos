#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Elabore um algoritmo que leia 2 matrizes bidimensionais  (6,6). 
//Adicione valores a essas matrizes. Some as duas matrizes e adicione em outra matriz. 
//Verifique se os n�meros da matriz resultado s�o pares ou impares e imprima na tela.

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i,j,k, mat1[6][6],mat2[6][6];
	  
	for(k=0;k<2;k++){
		printf("Preencha os valores da %d� Matriz\n",k+1);
		for(i=0;i<6;i++){
			for(j=0;j<6;j++){
				printf("Digite o valor da posi��o [%d][%d] da Matriz n� %d: ",i,j,k+1);			
				if(k==0){
					scanf("%d",&mat1[i][j]);
				}
				else if(k==1){
					scanf("%d",&mat2[i][j]);
				}
			}
		}
	}
	printf("\nA soma das duas Matrizes �: \n");
	
	for(i=0;i<6;i++){	
		printf("\n[");
			for(j=0;j<6;j++){
				printf("%d",mat1[i][j]+mat2[i][j]);
				if(j<5){
					printf("\t");
				}			
			}
		printf("]");
	}
	printf("\n")
	
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if((mat1[i][j]+mat2[i][j])%2==0){
				printf("\nO n�mero na posi��o [%d][%d] da Matriz Resultante � Par\n",i,j);
			}
			else{
				printf("\nO n�mero na posi��o [%d][%d] da Matriz Resultante � �mpar\n",i,j);
			}
		}	
	}
}











