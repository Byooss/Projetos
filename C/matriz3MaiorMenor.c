#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Crie um algoritmo que crie uma matriz 3 x 3 de  inteiros, solicite os valores ao usuário e depois  mostre qual o maior e menor valor na matriz

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int matrz[3][3],i,j,menorValor=0,maiorValor=0;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Digite o número da Matriz na posição [%d][%d]: ", i+1,j+1);
			scanf("%d",&matrz[i][j]);
			if(i==0 && j==0){
				menorValor=matrz[i][j];
				maiorValor=matrz[i][j];
			}
			if(matrz[i][j]<menorValor){
				menorValor = matrz[i][j];
			}
			if(matrz[i][j]>maiorValor){
				maiorValor = matrz[i][j];
			}
		}
	}
	
	printf("\nO maior valor digitado na Matriz foi: %d\n\nO menor valor digitado na Matriz foi: %d",maiorValor,menorValor);
}	
