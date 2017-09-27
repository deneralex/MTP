#include<math.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define N 10000
int main(){
int i,j,k,soma,mult;
int numeros[N];
printf("Entre com dez numeros");
for(i=0; i<10; i++){
scanf("%d",&numeros[i]);
}
soma=0;
mult=1;
for(k=0; k<10;k++){
soma=soma+numeros[k];
mult=mult*numeros[k];
}
printf("A soma e %d\n :", soma);
printf("A multiplicacao e %d\n :", mult);
return EXIT_SUCCESS;
}
