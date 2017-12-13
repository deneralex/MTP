#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define N 256

int main(){
char frase[N];
int i,a,cont=0;
printf("Entre com uma frase:\n");
fgets(frase,N,stdin);
for(i=0; frase[i] != '\0'; i++)
{
if (isalpha(frase[i]))
{
    cont++;
}
}
printf("A quantidade de caracteres da frase digitada e = %d", cont);
return EXIT_SUCCESS;
}
