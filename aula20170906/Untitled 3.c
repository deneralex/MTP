#include <stdio.h>
#include <stdlib.h>

int main(){
int numero,compara=0;
int i=1;
compara=0;
printf("Digite o numero: ");
scanf("%d", &numero); getchar();
for(i; numero>i; i++)
{
if(numero%i==0)
compara=compara+i;
}
if(compara==numero)
printf("O numero e perfeito! ");
else
printf("Nao e perfeito! ");
return 0;
}
