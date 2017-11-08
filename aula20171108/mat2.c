#include<stdio.h>
#include<stdlib.h>
#include "matriz.h"

int main(){
Matriz A;
double a;
int ordem;
printf("Entre com a ordem da matriz:  ");
scanf("%d", &ordem);
A=criarMatriz(ordem,ordem);
preencherMatriz(A);
printf("Original: \n");
imprimirMatriz(A);
a= determinante(A);
printf("%lf", a);
return EXIT_SUCCESS;
}
