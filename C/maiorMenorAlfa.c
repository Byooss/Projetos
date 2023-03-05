#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i,tamFrase,maior=0,menor,cont=0,cmpPrimeira,cmpUltima;
	char frase[100],fraseMenor[100],fraseMaior[100], primeiraFrase[100], ultimaFrase[100], op;
	
	
	do{
			
		fflush(stdin);	
		printf("Escreva uma frase de até 50 caracteres: ");
		fgets(frase,100,stdin);
		system("cls");
		
		frase[strcspn(frase, "\n")] = 0;
		
		tamFrase=strlen(frase);
		
		if(cont==0){
			menor=tamFrase;
		}
		
		if(tamFrase==0){
			break;
		}
		
		if(tamFrase>maior){
			maior=tamFrase;
			strcpy(fraseMaior, frase);
		}
		if(menor>=tamFrase){
			menor=tamFrase;
			strcpy(fraseMenor, frase);
		}
		
		if(cont==0){
			strcpy(primeiraFrase,frase);
			strcpy(ultimaFrase,frase);
		}
		
		cmpPrimeira=strcmp(primeiraFrase,frase);
		cmpUltima=stricmp(ultimaFrase,frase);
		
		if(cmpPrimeira>=0){
			strcpy(primeiraFrase,frase);
		}
		
		if(cmpUltima<=0){
			strcpy(ultimaFrase,frase);
		}
		
		

		printf("Deseja escrever outra frase?\n[S/N]\n- ",op);
		scanf(" %c",&op);
		if(op=='s'||op=='S'){
			cont++;
		}
		
		system("cls");	
	}
	while(op=='s'||op=='S');
	
	printf("\nA maior frase é: ");
	for(i=0;i<maior;i++){
		printf("%c",fraseMaior[i]);
	}
	printf(" - %d Caracteres\n", maior);
	
	printf("\nA menor frase é: ");
	for(i=0;i<menor;i++){
		printf("%c",fraseMenor[i]);
	}
	printf(" - %d Caracteres\n", menor);
	
	printf("\nA primeira frase em ordem alfabética é: ");
	puts(primeiraFrase);
	
	printf("\nA ultima frase em ordem alfabética é: ");
	puts(ultimaFrase);
}
