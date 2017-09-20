#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main(){
double a,b,c,t;
printf("Digite os lados dos triangulo \n");
scanf("%lf, %lf", &a,&b);
printf("Digite o valor do angulo \n");
scanf("%lf", &t);
c=sqrt(pow(b,2)+pow(a,2)-2*a*b*cos(t));
printf("O terceiro lado e = %lf \n", c);
return EXIT_SUCCESS;
}
