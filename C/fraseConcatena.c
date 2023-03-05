#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	// O setlocale tem incompatibilidade com a saida "puts" gerando um caracter aleátorio no espaço [0] do vetorFrase
	//setlocale(LC_ALL,"Portuguese");
	
	int i,tam=100,contInval,tamFrase;
	char frase[100],vetorFrase[tam],op;
	
	do{		
		fflush(stdin);	
		printf("Escreva uma frase de ate 50 caracteres: ");
		fgets(frase,100,stdin);
		system("cls");
		
		frase[strcspn(frase, "\n")] = ' ';
		
		tamFrase=strlen(frase);
		contInval=0;
		
		for(i=0;i<tamFrase;i++){
		
			if(frase[i]=='a'||frase[i]=='A'){
				contInval++;
				if(frase[i+1]=='b'||frase[i+1]=='B'){
					contInval++;
					if(frase[i+2]=='c'||frase[i+2]=='C'){
						contInval++;
					}
				}
			}
			else if(frase[i]=='d'|frase[i]=='D'){
				contInval=3;
			}	
		}
		if(contInval<3){
			strcat(vetorFrase,frase);
		}
		printf("Voce deseja escrever mais uma frase?\n[S/N]\n- ");
		scanf(" %c",&op);
		if(op=='s'||op=='S'){
			tam=tam*2;
		}
		system("cls");
	}
	while(op=='s'||op=='S');
	
	printf("A frase final ficou assim: ");
	puts(vetorFrase);
	

	printf("\n ---- Fim do Programa ----\n");

}
