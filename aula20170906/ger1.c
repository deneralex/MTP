#include <stdio.h>
int main() {
int numero;
int i;
printf("Entre com um numero: ");
scanf("%d", &numero); getchar();
for(i=2; i<numero; i++) {
if(numero%i==0)
break;
}
if(i==numero)
printf("Primo!!\n");
else
 printf("Não e primo!!\n");
return 0;
}

