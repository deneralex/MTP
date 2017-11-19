#include<stdio.h>
#include<stdlib.h>
#include "matriz.h"


int main()
{
Matriz A,B,C;
int colunaA,linhaA, colunaB,linhaB, i, acumula;
printf("Digite a quantidade de linhas e colunas da Matriz A \n");
scanf("%d %d", &linhaA, &colunaA);
printf("Digite a quantidade de linhas e colunas da Matriz B \n");
scanf("%d %d", &linhaB, &colunaB);
if(colunaA==linhaB)
{
A=criarMatriz(linhaA,colunaA);
B=criarMatriz(linhaB,colunaB);
C=criarMatriz(colunaA,linhaB);
printf("Digite a matriz A! \n\n");
preencherMatriz(A);
printf("Digite a matriz B! \n\n");
preencherMatriz(B);
C= multiplicacao(A,B,C,linhaA,colunaA, linhaB,colunaB);
imprimirMatriz(C);
}
else
printf("Matrizes nao multiplicaveis! \n\n");
return 0;
}
