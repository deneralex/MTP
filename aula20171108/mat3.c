
#include<stdio.h>
#include<stdlib.h>
#include "matriz.h"

int main(){
Matriz A,I,adjA;
double a;
int ordem;
printf("Entre com a ordem da matriz:  ");
scanf("%d", &ordem);
A=criarMatriz(ordem,ordem);
preencherMatriz(A);
printf("Original: \n");
imprimirMatriz(A);
adjA=adjunta(A);
a= determinante(A);
printf("O determinante da matriz e: %lf \n", a);

if(a!=0){
    printf("A matriz A e inversivel! \n\n");
    I=Inversa(A,adjA,a);
    imprimirMatriz(I);
    }
if(a==0){
printf("A matriz A nao e inversivel! \n\n");
}
printf("Adjunta: \n");
imprimirMatriz(adjA);
destruirMatriz(A);
destruirMatriz(adjA);
destruirMatriz(I);
return EXIT_SUCCESS;
}

