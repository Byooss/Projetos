#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Altere o algoritmo anterior para procurar na  matriz um valor digitado pelo usu�rio

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int matrz[3][3],i,j,valorM, cont=0;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Digite o n�mero da Matriz na posi��o [%d][%d]: ", i+1,j+1);
			scanf("%d",&matrz[i][j]);
		}
	}
	printf("\nDigite o valor que est� procurando na matriz: ");
	scanf("%d",&valorM);

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(valorM==matrz[i][j]){
				cont++;
				if(cont==1){	
					printf("\nO valor %d esta na posi��o [%d][%d] da matriz\n",valorM,i+1,j+1);
				}
				else{
					printf("\nO valor %d tamb�m esta na posi��o [%d][%d] da matriz\n",valorM,i+1,j+1);
				}
			}
		}
	}
	if(cont==0){
		printf("\nO valor que vc busca n�o esta na matriz :(\n");
	}
}
