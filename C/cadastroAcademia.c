#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct TPessoa{
	int cod,idade;
	char nome[50],sexo[10];
	float altura, peso;
};

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	//variaveis gerais
	int menuPrincipal,i,j,aux;
	char opReturnMenuPrincipal;

	
	//variaveis de cadastro
	int n,tam;
	
	
	//variaveis de alteração de cadastro
	int buscaCod,menuCadastro;
	char opAltCadastro,opReturnMenuCadastral;
	
	//variaveis de Exclusão de cadastro
	char opExcluirCadastro;
	
	//variaveis de buscar cadadastro
	char opBuscaCadastro;
	
	//variaveis de exibição dos cadastros
	char opExibirCadastros;
	
	
	printf("---- Bem Vindo ao Sistema de Cadastro dos Alunos ----\n\n");
	
	printf("\nDigite o número de pessoas que você deseja incluir no cadastro: ");
  	scanf("%d",&tam);
  	struct TPessoa cadastro[tam];
	
	returnMenuPrincipal:
	printf("\n*** Digite o número da opção que deseja acessa ***\n\nMenu:\n1-Cadastro de Alunos\n2-Alteração de Dados\n3-Excluir Cadastro\n4-Buscar Aluno\n5-Todos os Alunos\n");
	scanf("%d",&menuPrincipal);
	system("cls");
	
	switch(menuPrincipal){
		case 1:	
  			system("cls");
  			
  			for (i=0;i<tam;i++){
  				system("cls");
  				
    			printf("----- Cadastro do %dº Aluno ----\n",i+1);
    			fflush(stdin);
    
    			printf("Digite o código de matríula: ");
    			scanf("%d",&cadastro[i].cod);
			    getchar();
			        
			    printf("Nome do %dº Aluno: ",i+1);
			    fgets(cadastro[i].nome, 30, stdin);
			    fflush(stdin);
			    
			    printf("Qual o sexo: ");
			    fgets(cadastro[i].sexo,30,stdin);    
				
				printf("Digite a idade do Aluno: ");
			    scanf("%d",&cadastro[i].idade);
			
				printf("Digite a altura do Aluno: ");
			    scanf("%f",&cadastro[i].altura);
		
			    printf("Digite o peso do Aluno: ");
			    scanf("%f",&cadastro[i].peso);
			    
			}
			break;
		case 2:
			printf("Digite o código de matrícula do Aluno: "); 
    		scanf("%d",&buscaCod);
    		aux=0;
    		system("cls");
    		for(i=0;i<tam;i++){
    			
				if(buscaCod==cadastro[i].cod){   
       				printf("\nAluno: %sMatrícula: %d\n\n",cadastro[i].nome,cadastro[i].cod);
       				aux++;
       				
       				do{
       					returnMenuCadastral:
       						
			        	printf("Escolha qual dado você deseja alterar\n\n1-Código de Matricula\n2-Nome do Aluno\n3-Sexo do Aluno\n4-Idade do Aluno\n5-Altura do Aluno\n6-Peso do Aluno\n-");
			        	scanf("%d",&menuCadastro);
			           system("cls");
			        	switch(menuCadastro){
				            case 1:
				            	printf("Digite o novo número de Matrícula: ");
				            	scanf("%d",&cadastro[i].cod);
				            	break;
				
				            case 2:
				            	fflush(stdin);
				            	printf("Escreva o novo nome do Aluno: ");
				            	fgets(cadastro[i].nome,30,stdin);
				            	break;
				
				            case 3:
				            	fflush(stdin);
				            	printf("Escreva o novo sexo do Aluno: ");
				            	fgets(cadastro[i].sexo,30,stdin);
				           		break;
				
				            case 4:
				            	printf("Digite a nova idade do Aluno: ");
				            	scanf("%d",&cadastro[i].idade);
				            	break;
				
				            case 5:
				            	printf("Digite a nova altura do Aluno: ");
				            	scanf("%f",&cadastro[i].altura);
				            	break;
				             
				            case 6:
				            	printf("Digite o novo peso do Aluno: ");
				            	scanf("%f",&cadastro[i].peso);
				            	break;
				            
				            default:
				            	printf("\nValor digitado no menu é inválido\n\nDeseja voltar ao Menu de Alteração Cadastral? [S/N]\n-");
				            	scanf(" %c",&opReturnMenuCadastral);
				            		if(opReturnMenuCadastral=='s'||opReturnMenuCadastral=='S'){
				            			goto returnMenuCadastral;
									}
								break;		
			            }
			            system("cls");
						printf("Deseja alterar mais algum dado do cadastro de %s\n [S/N]\n-",cadastro[i].nome);
			            scanf(" %c",&opAltCadastro);
			           	}
						while(opAltCadastro=='s'||opAltCadastro=='S');
       			}
       		}
			if(aux==0){
					printf("Aluno não encontrado\n");	
			}		
       		break;
       	case 3:
       		system("cls");
			printf("Digite o código de matrícula do Aluno: "); 
    		scanf("%d",&buscaCod);
    		aux=0;
    		
    		for(i=0;i<tam;i++){
    			
				if(buscaCod==cadastro[i].cod){   
       				printf("\nAluno: %sMatrícula: %d\n\nxxxx Deseja Excluir? xxxx\n[S/N]\n-",cadastro[i].nome,cadastro[i].cod);
       				scanf(" %c",&opExcluirCadastro);
       				aux++;
       				
       				if(opExcluirCadastro=='s'||opExcluirCadastro=='S'){
       					if(i!=tam-1){    					
	       					for(j=i;j<tam;j++){	
	       						cadastro[j].cod=cadastro[j+1].cod;
							    getchar();
							    strcpy(cadastro[j].nome,cadastro[j+1].nome);
								fflush(stdin);
							    strcpy(cadastro[j].sexo,cadastro[j+1].sexo);    
								fflush(stdin);
							    cadastro[j].idade=cadastro[j+1].idade;
							    cadastro[j].altura=cadastro[j+1].altura;
							    cadastro[j].peso=cadastro[j+1].peso;
							} 	
						}
						tam-=1; 
					}
				}
			}
			if(aux==0){
				printf("Aluno não encontrado\n");
			}
			break;
		case 4:
			do{
				printf("Digite o código de matrícula do Aluno: "); 
    			scanf("%d",&buscaCod);
    			system("cls");
    			aux=0;
    			
    			for(i=0;i<tam;i++){
    				if(buscaCod==cadastro[i].cod){
    					aux++;
    					printf("Matrícula: %d\nNome: %sSexo: %sIdade: %d\nAltura: %.2f\nPeso: %.2f\n",cadastro[i].cod,cadastro[i].nome,cadastro[i].sexo,cadastro[i].idade,cadastro[i].altura,cadastro[i].peso);
					}
					else{
						
					}
				}
				if(aux==0){
					printf("\nAluno não encontrado\n");
				}
				printf("\nDeseja buscar outro Aluno?\n[S/N]\n-");
				scanf(" %c",&opBuscaCadastro);
			}
			while(opBuscaCadastro=='S'||opBuscaCadastro=='s');
			break;
		case 5:
			
			printf("Você deseja verificar todos os Alunos cadastrados?\n[S/N]\n-");
			scanf(" %c",&opExibirCadastros);
			system("cls");
			 
			if(opExibirCadastros=='S'||opExibirCadastros=='s'){
				for(i=0;i<tam;i++){
					printf("\nMatrícula: %d\nNome: %sSexo: %sIdade: %d\nAltura: %.2f\nPeso: %.2f\n",cadastro[i].cod,cadastro[i].nome,cadastro[i].sexo,cadastro[i].idade,cadastro[i].altura,cadastro[i].peso);	
				}
			}
			break;
		default:
			system("cls");
			printf("\nValor digitado no menu é inválido\n\nDeseja voltar ao Menu Principal? [S/N]\n-");
			scanf(" %c",&opReturnMenuPrincipal);
			if(opReturnMenuPrincipal=='S'||opReturnMenuPrincipal=='s'){
				goto returnMenuPrincipal;
			}
			break;		
	}

	printf("\nDeseja voltar ao Menu Principal? [S/N]\n-");
	scanf(" %c",&opReturnMenuPrincipal);
	system("cls");
		
	if(opReturnMenuPrincipal=='S'||opReturnMenuPrincipal=='s'){
		goto returnMenuPrincipal;
	}
	else{
		printf("\nFim da execucao do programa\n");	
	}
}
