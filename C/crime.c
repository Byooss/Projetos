#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Se prepare pois a entrevista vai come�ar!\n\n");
	
	int i, provas=0;
	char resp[5];
	
	for(i=0;i<5;i++){
		
		if(i==0){
			printf("Telefonou para a v�tima?\nR: ");
			scanf(" %c",&resp[i]);
		}
		else if(i==1){
			printf("Esteve no local do crime?\nR: ");
			scanf(" %c",&resp[i]);		
		}
		else if(i==2){
			printf("Mora perto da v�tima?\nR: ");
			scanf(" %c",&resp[i]);
		}
		else if(i==3){
			printf("Tinha d�vidas com a v�tima?\nR: ");
			scanf(" %c",&resp[i]);	
		}
		else{
			printf("J� trabalhou com a v�tima?\nR: ");
			scanf(" %c",&resp[i]);	
		}		
		if(resp[i]=='s'||resp[i]=='S'){
			provas+=1;
		}
	}
	switch(provas){
		case 2:
			printf("\nVoc� � Suspeito!!");
			break;
		case 3: case 4:
			printf("\nVoc� � C�mplice!!");
			break;
		case 5:
			printf("\nVoc� � o Assassino!!");
			break;
		default:
			printf("\nAparentemente voc� � Inocente.");
	}
}
