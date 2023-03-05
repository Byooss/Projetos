#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i, j, qtdAluno=1;
	float peso, altura, cod, somaPeso=0, somaAltu=0, listAluno[qtdAluno][3], maxPeso[2], minPeso[2], maxAltu[2], minAltu[2];
	
	printf("\n\n-----------Seja muito bem vindo a academia!-----------\n\n");
	
	do{
		
		for(i=0;i<qtdAluno;i++){
			for(j=0;j<3;j++){
				if(j==0){
					printf("Digite seu código de matricula: ");
					scanf("%f",&cod);
					listAluno[qtdAluno-1][j]=cod;
				}
				else if(j==1){
					printf("\nDigite seu peso atual: ");
					scanf("%f",&peso);
					listAluno[qtdAluno-1][j]=peso;
					somaPeso+=peso;
				}
				else{
					printf("\nDigite sua altura: ");
					scanf("%f",&altura);
					listAluno[qtdAluno-1][j]=altura;
					somaAltu+=altura;
				}
			}
		}
		qtdAluno+=1;
		
		if(cod!=0){
			printf("\nVamos lá cadastrar mais um Aluno!\n");
	}	
	}

	while(cod!=0);
	
	maxPeso[1]=0;
	minPeso[1]=0;
	maxAltu[1]=0;
	minAltu[1]=0;
	
	qtdAluno-=1;
	
	for(i=0;i<qtdAluno;i++){
		for(j=0;j<3;j++){
			if(listAluno[qtdAluno-1][j]>maxPeso[1]){
				maxPeso[0]=listAluno[qtdAluno-1][0];
				maxPeso[1]=listAluno[qtdAluno-1][1];
			}
			if(listAluno[qtdAluno-1][j]<minPeso[1]){
				minPeso[0]=listAluno[qtdAluno-1][0];
				minPeso[1]=listAluno[qtdAluno-1][1];	
			}
			if(listAluno[qtdAluno-1][j]>maxAltu[1]){
				maxAltu[0]=listAluno[qtdAluno-1][0];
				maxAltu[1]=listAluno[qtdAluno-1][2];	
			}		
			if(listAluno[qtdAluno-1][j]<minAltu[1]){
				minAltu[0]=listAluno[qtdAluno-1][0];
				minAltu[1]=listAluno[qtdAluno-1][2];	
			}				
		}
	}
	
	printf("\nO aluno mais pesado é %.0f pesando %.2f\n",maxPeso[0],maxPeso[1]);
	printf("O aluno mais leve é %.0f pesando %.2f\n",minPeso[0],minPeso[1]);
	printf("O aluno mais pesado é %.0f pesando %.2f\n",maxAltu[0],maxAltu[1]);
	printf("O aluno mais pesado é %.0f pesando %.2f\n",minAltu[0],minAltu[1]);
	printf("A média de peso dos alunos é %.2f\n",somaPeso/qtdAluno);
	printf("A média de altura dos alunos é %.2f\n",somaAltu/qtdAluno);
	
	
	
}
