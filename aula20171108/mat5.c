
#include<stdio.h>
#include<stdlib.h>
#include "matriz.h"

int main()
{
Matriz A,I,adjA,b,c;
double a;
int ordem,colunabi;
colunabi=1;
printf("Entre com a ordem da matriz dos coeficientes:");
scanf("%d", &ordem);
A=criarMatriz(ordem,ordem);
b=criarMatriz(ordem,colunabi);
c=criarMatriz(ordem,colunabi);
printf("Digite a matriz dos coeficientes: \n\n");
preencherMatriz(A);
printf("Digite a matriz dos resultados: \n\n");
preencherMatriz(b);
printf("Original: \n");
imprimirMatriz(A);
a= determinante(A);
adjA=adjunta(A);
printf("O determinante da matriz e: %lf \n \n", a);

if(a!=0){
    printf("A matriz A e inversivel! \n\n");
    I=Inversa(A,adjA,a);
    imprimirMatriz(I);
    printf("\n\n");
    }
if(a==0){
printf("A matriz A nao e inversivel! \n\n");
}
c=multiplicacao(I,b,c,ordem,ordem,ordem,colunabi);
imprimirMatriz(c);
return 0;
}

