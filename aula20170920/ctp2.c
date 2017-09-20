#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define N 256
int main(){
char frase[N];
int i;
printf("Entre com uma frase:\n");
fgets(frase,N,stdin);
for(i=0; frase[i] != '\0'; i++)
{
frase[i]=tolower(frase[i]);
}
printf("%s", frase);
return EXIT_SUCCESS;
}
