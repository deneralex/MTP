#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,b,e,n=1;
printf("Digite a base \n");
scanf("%d", &b);
printf("Digite o expoente \n");
scanf("%d", &e);
for(i=0; i<e; i++)
{
n=n*b;
}
printf("O resultado e: %d",n) ;
}
