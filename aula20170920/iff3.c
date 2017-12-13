#include <stdio.h>
int main() {
int numero;
double i,fatorial;
printf("Entre com um numero: ");
scanf("%d", &numero); getchar();
fatorial=1;
for(i=0; i<numero; i++)
fatorial= fatorial*(numero-i);
printf("Fatorial: %lf\n", fatorial);
return 0;
}
