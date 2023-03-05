#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i,tamFrase;
	char frase[100], troca[100], op;
	
	do{
		fflush(stdin);	
		printf("Escreva uma frase de até 50 caracteres: ");
		fgets(frase,100,stdin);
		
		frase[strcspn(frase, "\n")] = 0;
		
		tamFrase=strlen(frase);
		
		for(i=0;i<tamFrase;i++){
			if(frase[i]=='A'||frase[i]=='a'||frase[i]=='E'||frase[i]=='e'||frase[i]=='I'||frase[i]=='i'||frase[i]=='o'||frase[i]=='O'||frase[i]=='U'||frase[i]=='u'){
				frase[i]='#';
			}
			troca[tamFrase-i]=frase[i];
		}
		system("cls");
		
		printf("A frase digitada ao contrário fica assim: ");
		
		for(i=0;i<=tamFrase;i++){
			printf("%c",troca[i]);
		}
		
		printf("\n\nDeseja digitar uma nova frase?\n[S/N]\n- ");
		scanf(" %c",&op);
		system("cls");
	}
	while(op=='s'||op=='S');
		printf("\n ---- Fim da execução do programa ----\n");
	}
