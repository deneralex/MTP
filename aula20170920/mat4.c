#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(){
float a,b,c;
printf("Digite o logaritmando");
scanf("%f", &a);
printf("Digite a base");
scanf("%f", &b);
c = log10(a)/log10(b);
printf("O resultado e = %f",c);
return EXIT_SUCCESS;
}
