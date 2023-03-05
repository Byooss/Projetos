#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i,tamFrase;
	char frase[100], invers[100], op;
	
	do{
		system("cls");
		fflush(stdin);
		printf("Escreva uma frase de atй 50 caracteres: ");
		fgets(frase,100,stdin);
		
		frase[strcspn(frase, "\n")] = 0;
		
		tamFrase=strlen(frase);
		
		for(i=0;i<tamFrase;i++){
				
			if(frase[i]=='a'||frase[i]=='в'||frase[i]=='б'||frase[i]=='а'||frase[i]=='г'){
				if(frase[i]=='a'){
					invers[i]='A';
				}
				else if(frase[i]=='в'){
					invers[i]='В';
				}
				else if(frase[i]=='б'){
					invers[i]='Б';
				}
				else if(frase[i]=='а'){
					invers[i]='А';
				}
				else{
					invers[i]='Г';
				}
			}
			else if(frase[i]=='A'||frase[i]=='В'||frase[i]=='Б'||frase[i]=='А'||frase[i]=='Г'){
				if(frase[i]=='A'){
					invers[i]='a';
				}
				else if(frase[i]=='В'){
					invers[i]='в';
				}
				else if(frase[i]=='Б'){
					invers[i]='б';
				}
				else if(frase[i]=='А'){
					invers[i]='а';
				}
				else{
					invers[i]='г';
				}
			}
			
			if(frase[i]=='b'){
				invers[i]='B';
			}
			else if(frase[i]=='B'){
				invers[i]='b';
			}
			
			if(frase[i]=='c'){
				invers[i]='C';
			}
			else if(frase[i]=='C'){
				invers[i]='c';
			}
			
			if(frase[i]=='d'){
				invers[i]='D';
			}
			else if(frase[i]=='D'){
				invers[i]='d';
			}
			
			if(frase[i]=='e'||frase[i]=='к'||frase[i]=='й'){
				if(frase[i]=='e'){
					invers[i]='E';
				}
				else if(frase[i]=='к'){
					invers[i]='К';
				}
				else{
					invers[i]='Й';
				}
			}
			else if(frase[i]=='E'||frase[i]=='К'||frase[i]=='Й'){
				if(frase[i]=='E'){
					invers[i]='e';
				}
				else if(frase[i]=='К'){
					invers[i]='к';
				}
				else{
					invers[i]='й';
				}
			}
			
			if(frase[i]=='f'){
				invers[i]='F';
			}
			else if(frase[i]=='F'){
				invers[i]='f';
			}
			
			if(frase[i]=='g'){
				invers[i]='G';
			}
			else if(frase[i]=='G'){
				invers[i]='g';
			}
			
			if(frase[i]=='h'){
				invers[i]='H';
			}
			else if(frase[i]=='H'){
				invers[i]='h';
			}
			
			if(frase[i]=='i'||frase[i]=='н'){
				if(frase[i]=='i'){
					invers[i]='I';
				}
				else{
					invers[i]='н';
				}
			}
			else if(frase[i]=='I'||frase[i]=='Н'){
				if(frase[i]=='I'){
					invers[i]='i';
				}	
				else{
					invers[i]='н';
				}
			}		
			
			if(frase[i]=='j'){
				invers[i]='J';
			}
			else if(frase[i]=='J'){
				invers[i]='j';
			}		
			
			if(frase[i]=='k'){
				invers[i]='K';
			}
			else if(frase[i]=='K'){
				invers[i]='k';
			}		
			
			if(frase[i]=='l'){
				invers[i]='L';
			}
			else if(frase[i]=='L'){
				invers[i]='l';
			}		
			
			if(frase[i]=='m'){
				invers[i]='M';
			}
			else if(frase[i]=='M'){
				invers[i]='m';
			}
			
			if(frase[i]=='n'){
				invers[i]='N';
			}
			else if(frase[i]=='N'){
				invers[i]='n';
			}
			
			if(frase[i]=='o'||frase[i]=='ф'||frase[i]=='у'||frase[i]=='х'){
				if(frase[i]=='o'){
					invers[i]='O';
				}
				else if(frase[i]=='ф'){
					invers[i]='Ф';
				}
				else if(frase[i]='у'){
					invers[i]='У';
				}
				else{
					invers[i]='Х';
				}
			}
			else if(frase[i]=='O'||frase[i]=='Ф'||frase[i]=='У'||frase[i]=='Х'){
				if(frase[i]=='O'){
					invers[i]='o';
				}
				else if(frase[i]=='Ф'){
					invers[i]='ф';
				}
				else if(frase[i]=='У'){
					invers[i]='у';
				}
				else{
					invers[i]='х';
				}
			}
			
			if(frase[i]=='p'){
				invers[i]='P';
			}
			else if(frase[i]=='P'){
				invers[i]='p';
			}
			
			if(frase[i]=='q'){
				invers[i]='Q';
			}
			else if(frase[i]=='Q'){
				invers[i]='q';
			}
			
			if(frase[i]=='r'){
				invers[i]='R';
			}
			else if(frase[i]=='R'){
				invers[i]='r';
			}
			
			if(frase[i]=='s'){
				invers[i]='S';
			}
			else if(frase[i]=='S'){
				invers[i]='s';
			}
			
			if(frase[i]=='t'){
				invers[i]='T';
			}
			else if(frase[i]=='T'){
				invers[i]='t';
			}		
			
			if(frase[i]=='u'||frase[i]=='ъ'){
				if(frase[i]=='u'){
					invers[i]='U';
				}
				else{
					invers[i]='Ъ';
				}
			}
			else if(frase[i]=='U'||frase[i]=='Ъ'){
				if(frase[i]=='U'){
					invers[i]='u';
				}
				else{
					invers[i]='ъ';
				}
			}		
			
			if(frase[i]=='v'){
				invers[i]='V';
			}
			else if(frase[i]=='V'){
				invers[i]='v';
			}		
			
			if(frase[i]=='w'){
				invers[i]='W';
			}
			else if(frase[i]=='W'){
				invers[i]='w';
			}
			
			if(frase[i]=='x'){
				invers[i]='X';
			}
			else if(frase[i]=='X'){
				invers[i]='x';
			}
					if(frase[i]=='y'){
				invers[i]='Y';
			}
			else if(frase[i]=='Y'){
				invers[i]='y';
			}
			
			if(frase[i]=='z'){
				invers[i]='Z';
			}
			else if(frase[i]=='Z'){
				invers[i]='z';
			}
			
			if(frase[i]==' '){
				invers[i]=' ';
			}
			
		}

		printf("\nA sua frase escrita com as letras inversas fica assim : %s\n", invers);
		printf("\n\nDeseja escrever mais uma frase?\n[S/N]\n- ");
		scanf(" %c",&op);
			
	}
	while(op=='S'||op=='s');
	
	system("cls");
	printf("\n ---- Fim da execuзгo do programa! ---- \n");
}
