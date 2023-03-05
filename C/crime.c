#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Se prepare pois a entrevista vai começar!\n\n");
	
	int i, provas=0;
	char resp[5];
	
	for(i=0;i<5;i++){
		
		if(i==0){
			printf("Telefonou para a vítima?\nR: ");
			scanf(" %c",&resp[i]);
		}
		else if(i==1){
			printf("Esteve no local do crime?\nR: ");
			scanf(" %c",&resp[i]);		
		}
		else if(i==2){
			printf("Mora perto da vítima?\nR: ");
			scanf(" %c",&resp[i]);
		}
		else if(i==3){
			printf("Tinha dívidas com a vítima?\nR: ");
			scanf(" %c",&resp[i]);	
		}
		else{
			printf("Já trabalhou com a vítima?\nR: ");
			scanf(" %c",&resp[i]);	
		}		
		if(resp[i]=='s'||resp[i]=='S'){
			provas+=1;
		}
	}
	switch(provas){
		case 2:
			printf("\nVocê é Suspeito!!");
			break;
		case 3: case 4:
			printf("\nVocé é Cúmplice!!");
			break;
		case 5:
			printf("\nVocê é o Assassino!!");
			break;
		default:
			printf("\nAparentemente você é Inocente.");
	}
}
