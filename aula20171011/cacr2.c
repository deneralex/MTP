#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
float delta(float a, float b, float c)
{
float d=0;
d=(b*b)-4*(a*c);
return d;
}

void Raiz(float a, float b, float c, float d)
{

float r1,r2;
if(d>0)
{
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/2*a;
printf("A raiz r1 e %f e a raiz r2 %f", r1,r2);
}
if(d=0)
{
r1=-b/2*a;
r2=r1;
printf("A raiz r1 e %f e a raiz r2 %f", r1,r2);
}
if(d<0)
{
printf("A equação nao possui raiz real!");
}
}

int main(){
float a, b,c, d;
printf("Digite os coeficientes a,b e c da equação na respectiva ordem ");
scanf("%f %f %f", &a, &b, &c);
d=delta(a,b,c);
printf("Delta = %f " , d);
if(d<0)
{
printf("A equação nao possui raiz real!" );
}
Raiz(a,b,c,d);
return EXIT_SUCCESS;
}
