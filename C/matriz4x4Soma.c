#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Elabore um algoritmo que leia 2 matrizes bidimensionais  (4,4). Adicione valores a essas matrizes. 
//Some as duas matrizes e adicione em outra matriz. Imprima a matriz com o resultado.

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i,j,k, mat1[4][4],mat2[4][4];
	
	for(k=0;k<2;k++){
		printf("Preencha os valores da %dª Matriz\n",k+1);
		for(i=0;i<4;i++){
			for(j=0;j<4;j++){
				printf("Digite o valor da posição [%d][%d] da Matriz nº %d: ",i,j,k+1);			
				if(k==0){
					scanf("%d",&mat1[i][j]);
				}
				else if(k==1){
					scanf("%d",&mat2[i][j]);
				}
			}
		}
	}
	printf("\nA soma das duas Matrizes é: \n");
	
	for(i=0;i<4;i++){	
		printf("\n[");
			for(j=0;j<4;j++){
				printf("%d",mat1[i][j]+mat2[i][j]);
				if(j<3){
					printf("\t");
				}			 
			}
		printf("]");
	}
}
