#include<stdio.h>
#include<stdlib.h>
#include<complex.h>
#include<math.h>
double fazComplexo(double a, double b, char c){
if(c == 'r' ||  c == 'R')
return a + I *b;
else
    return a*cos(b)+ I *a*sin(b);
}
void mostraComplexo(double complex Z, char c){
if(c=='r'||  c == 'R')
printf("%lf  + I * %lf\n", creal(Z), cimag(Z));
else
printf("%lf /_ %lf rad\n", cabs(Z), carg(Z));
}
int main(){
double complex Z1,Z2;
double a,b;
printf("Entre com o numero complexo Z1( real, imaginario) :");
scanf("%lf,%lf", &a,&b); Z1= fazComplexo(a,b,'r');

printf("Entre com o numero complexo Z2( real, imaginario) :");
scanf("%lf,%lf", &a,&b); Z2= fazComplexo(a,b,'r');
printf("A soma desses numeros: \n");
printf("Forma retangular:     "); mostraComplexo(Z1+Z2,'r');
printf("Forma polar:     "); mostraComplexo(Z1+Z2, 'p');
return EXIT_SUCCESS;
}

