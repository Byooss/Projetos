#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Elabore um algoritmo que possua uma matriz (4,4) com valores inteiros. Preencha a matriz com valores. Depois mostre na tela a quantidade de valores pares existentes na matriz

int main(){
	setlocale(LC_ALL, "portuguese");

	int matrz[4][4], i, j, qntPar=0;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Digite que da posi��o [%d][%d] da Matriz: ",i+1,j+1);
			scanf("%d",&matrz[i][j]);
			if(matrz[i][j]%2==0){
				qntPar++;
			}
		}
	}
	if(qntPar>0){
		printf("A quantidade de n�meros Pares digitados foram: %d\n",qntPar);
	}
	else{
		printf("\nN�o foi digitado nenhum n�mero par na matriz!\n");
	}
}
