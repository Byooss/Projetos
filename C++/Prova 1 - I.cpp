#include <iostream>
using namespace std;


int main(){

int matriz [3] [3];
  for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
    cin>>matriz[i][j];
      }
    }
int somaLinha,somaColuna,somaDiagonal;
  somaLinha=0;somaColuna=0;somaDiagonal=0;
  
  //soma linha
int somaLinhaA,somaLinhaB,somaLinhaC;
  somaLinhaA=0;somaLinhaB=0;somaLinhaC=0;
  for (int i=0;i<3;i++){    
    for (int j=0;j<3;j++){
      if (i==0)
        somaLinhaA=matriz[i][j]+somaLinhaA;
      if (i==1)
        somaLinhaB=matriz[i][j]+somaLinhaB;
      if (i==2)
        somaLinhaC=matriz[i][j]+somaLinhaC;
      }
    } 
if (somaLinhaA==somaLinhaB && somaLinhaB==somaLinhaC)
  somaLinha=1;
else
  somaLinha=0;

//soma coluna
int somaColunaA,somaColunaB,somaColunaC;
  somaColunaA=0;somaColunaB=0;somaColunaC=0;
  for (int i=0;i<3;i++){    
    for (int j=0;j<3;j++){
      if (j==0)
        somaColunaA=matriz[i][j]+somaColunaA;
      if (j==1)
        somaColunaB=matriz[i][j]+somaColunaB;
      if (j==2)
        somaColunaC=matriz[i][j]+somaColunaC;
      }
    } 
if (somaColunaA==somaColunaB && somaColunaB==somaColunaC)
  somaColuna=1;
else
  somaColuna=0;
  
//soma diagonal princial
  int diagonalPri,diagonalSec;
  diagonalPri=0;diagonalSec=0;
for (int i=0;i<3;i++){    
    for (int j=0;j<3;j++){
      if (i==j)
      diagonalPri=matriz[i][j]+diagonalPri;
      }
    }
 
//soma diagonal secundaria
for (int i=0;i<3;i++){    
    for (int j=0;j<3;j++){
      if (i==0 && j==2)
      diagonalSec=matriz[i][j]+diagonalSec;
      if (i==1 && j==1)
      diagonalSec=matriz[i][j]+diagonalSec;
      if (i==2 && j==0)
      diagonalSec=matriz[i][j]+diagonalSec;
      }
    }
if (diagonalPri==diagonalSec)
  somaDiagonal=1;
  else
  somaDiagonal=0;

if(somaLinha==1 && somaColuna==1 && somaDiagonal==1){
  if (somaLinhaA == somaColunaA && somaColunaA == diagonalPri)
    cout<<"eh um quadrado magico"<<endl;
  }
  else
    cout<<"nao eh um quadrado magico"<<endl;
}
