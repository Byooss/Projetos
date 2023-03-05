#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	int i,tam,tamMetade,tamMaior,cont=0,aux=0;
	char vetorFrase[20][50],frase[50],op;
	
	do{
		fflush(stdin);	
		printf("Escreva a %d frase de ate 25 caracteres: ",cont+1);
		fgets(frase,50,stdin);
		system("cls");
		
		frase[strcspn(frase, "\n")] = 0;
		
		tam=strlen(frase);
		
		if(cont==0){
				tamMaior=tam;
				tamMetade=tamMaior/2;
		}
		else{
			if(tam>tamMaior){
				tamMaior=tam;
				tamMetade=tamMaior/2;
			}
		}
		
		strcpy(vetorFrase[cont],frase);
		
		printf("Deseja escrever outra frase?\n[S/N]\n- ");
		scanf(" %c",&op);
		if(op=='s'||op=='S'){
			cont++;
		}
		system("cls");
	}
	while(op=='s'||op=='S');
		
		for(i=0;i<20;i++){
			
		}
	
	puts(vetorFrase);
		
}
