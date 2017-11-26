#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#define N 100

struct ponto
{
int x;
int y;
};

int main()
{
FILE *arquivo;
arquivo = fopen("meutexto","r");
if(arquivo==NULL)
{
printf("Ocorreu um erro!\n");
return(1);
}
fclose(arquivo);
return 0;
}

