#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");

	int i, tam, qtdNotas,qtdMedia=0;
	float notas[qtdNotas], verificNota, soma=0, media=0;
	char op;
	
	qtdNotas=1;
	
	do{
		
		printf("Qual sua %dª nota?\nR: ",qtdNotas);
		scanf("%f",&verificNota);
		if(verificNota<=10 && verificNota>=0){
			notas[qtdNotas-1]=verificNota;
		
			printf("Quer digitar mais notas?\n[S/N]: ");
			scanf(" %c",&op);
		
			if(op=='s'||op=='S'){
		
			qtdNotas+=1;	
			}
		}
		else{
			printf("Você não digitou uma nota válida, quer tentar novamente?\n[S/N]: ");
			scanf(" %c",&op);
			if(op=='S'||op=='s'){
			}
			else{
				qtdNotas-=1;
			}
		}

	}
	
	while(op=='s'||op=='S');
	
	printf("%d\n",qtdNotas);
	
	printf("\nA quantidade de notas que vc incluiu foi: %d\n",qtdNotas);
	
	for(i=0;i<qtdNotas;i++){
		printf("%dª Nota: %.2f\n",i+1,notas[i]);
		soma+=notas[i];
	}
	media=soma/qtdNotas;
	printf("\n");
	
	for(i=qtdNotas-1;i>=0;i--){
		printf("%dª Nota: %.2f\n",i+1,notas[i]);
	}
	
	printf("\nA soma das suas notas é %.2f\n",soma);
	printf("A média das suas notas é %.2f\n",media);
	
	for(i=0;i<qtdNotas;i++){
		if(notas[i]>media){
			qtdMedia+=1;
		}
	}
	printf("Foram %d notas acima da média!\n",qtdMedia);
}
