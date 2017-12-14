#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#define N 256

void par( )
{
int i;
for(i=0; i<=20;i++){
if(i%2==0)
printf("%d",i);}
}

void impar( )
{
int j;
for(j=0; j<=20;j++){
if(j%2 !=0)
printf("%d",j);}
}

int main(){
int n;
printf("Digite 1 para par ou 2 para impar: ");
scanf("%d", &n);
if(n==2){
par();}
if(n==1){
impar();}
return 0;
}









