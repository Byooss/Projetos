#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int tam,i,contVogal,contTest=0,tamString;
	char op,opReturn;
	
	do{
		
		printf("Sua frase terá mais de 50 letras?\n[S/N]\n- ");
		scanf(" %c", &op);
		system("cls");
		
		if(op=='s'||op=='S'){
			tam=100;
		}
		else{
			tam=50;
		}
		
		char frase[tam];
		
		fflush(stdin);
		
	
		printf("Escreva sua frase: ");
		fgets(frase,tam,stdin);	
		
		tamString=strlen(frase);
		contVogal=0;
		
		for(i=0;i<tamString;i++){
			
			if(frase[i]=='a'||frase[i]=='A'||frase[i]=='e'||frase[i]=='E'||frase[i]=='i'||frase[i]=='I'||frase[i]=='o'||frase[i]=='O'||frase[i]=='u'||frase[i]=='U'){
				contVogal++;
			}
			
		}
		system("cls");
		
		frase[strcspn(frase, "\n")] = 0;
		
		printf("O número de vogais escritadas na frase %s é: %d\n",frase,contVogal);
		printf("\nDeseja escrever uma nova frase?\n[S/N]\n- ");
		scanf(" %c",&opReturn);
		system("cls");
	}
	while(opReturn=='s'||opReturn=='S');
	system("cls");
	printf("\n---- Fim da execução  do programa! ----\n");	
}
