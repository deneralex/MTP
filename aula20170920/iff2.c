#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
int a,i=0;
printf("Digite o numero");
scanf("%d", &a);
float d,soma1=0;
d=1/a;
double e, soma2;
e=1/a;
for(i;i<729;i++){
soma1= soma1+d;
soma2=soma2+d;
}
printf(" O resultado e em float %f e em double % lf ", soma1,soma2);
return EXIT_SUCCESS;
}



