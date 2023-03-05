#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Elabore um algoritmo que possua uma matriz (4,4) com valores inteiros. Preencha a matriz com valores. Depois mostre na tela todos os valores impares

int main(){
	setlocale(LC_ALL, "portuguese");

	int matrz[4][4], i, j, qntImpar=0, impar[qntImpar];
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Digite que da posição [%d][%d] da Matriz: ",i+1,j+1);
			scanf("%d",&matrz[i][j]);
			if(matrz[i][j]%2!=0){
				impar[qntImpar]=matrz[i][j];
				qntImpar++;
			}
		}
	}

	if(qntImpar>0){
		printf("Esses foram os números Ímpares digitados: \n");
		for(i=0;i<qntImpar;i++){
			if(qntImpar-1==i){
			printf("%d",impar[i]);
			}
			else{
			printf("%d, ",impar[i]);
			}
		}
	}
	else{
		printf("\nNão foi digitado nenhum número ímpar na matriz!\n");
	}
}
