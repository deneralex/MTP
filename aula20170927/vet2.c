#include<math.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define N 10000
int main(){
int i,j,k,aux=0;
int numeros[N];
printf("Entre com dez numeros");
for(i=0; i<10; i++){
scanf("%d",&numeros[i]);
}
j=9;
for(k=0; k<5;k++){
aux= numeros[k];
numeros[k]=numeros[j];
numeros[j]=aux;
j--;
}
for(i=0; i<10; i++){
printf("%d", numeros[i]);
}
return EXIT_SUCCESS;
}
