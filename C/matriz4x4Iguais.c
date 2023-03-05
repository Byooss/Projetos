#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Elabore um algoritmo que possua uma matriz (4,4). Preencha a matriz com valores inteiros. 
//Depois corra a matriz e imprima os valores que estão nas casa que possuem coordenadas iguais

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i,j,matriz[4][4];
	  
		printf("Preencha os valores da Matriz\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Digite o valor da posição [%d][%d] da Matriz: ",i,j);
			scanf("%d",&matriz[i][j]);			
		}
	}
	printf("\n\t----Matriz----\n");
	
	for(i=0;i<4;i++){	
		printf("\n[");
			for(j=0;j<4;j++){
				printf("%d",matriz[i][j]);
				if(j<3){
					printf("\t");
				}			
			}
		printf("]");
	}
	printf("\n");
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i==j){
				printf("\nNa coordenada [%d][%d] o valor armazenado é %d\n",i,j,matriz[i][j]);
			}
		}
	}
}

