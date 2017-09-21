#include<stdio.h>
#include<stdlib.h>
#include<complex.h>
#include<math.h>
double complex fazComplexo(double a, double b, char c){
if(c == 'r' ||  c == 'R')
return a + I *b;
else
    return a*cos(b)+ I *a*sin(b);
}
double complex complex1 (double Z1){
    double Z2;
	Z2 = conj ( Z1 );
    return Z2;
}
double complex complex2 (double Z1, double Z2){
    double Z3;
	Z3 = Z1 * Z2;
	return Z3; }
void mostraComplexo(double complex Z, char c){
if(c=='r'||  c == 'R')
printf("%lf  + I * %lf\n", creal(Z), cimag(Z));
else
printf("%lf /_ %lf rad\n", cabs(Z), carg(Z));
}
int main(){
double complex Z1, Z2;
double a,b, Z3;
printf("Entre com o numero complexo ( real, imaginario) :");
scanf("%lf,%lf", &a,&b); Z1= fazComplexo(a,b,'r');
mostraComplexo(Z1,'r');
printf("O conjugado do numero complexo e:");
Z2=complex1(Z1);
mostraComplexo(Z2,'r');
Z3=complex2(Z1,Z2);
printf("O numero multiplicado por seu conjugado: \n %lf", Z3);
return EXIT_SUCCESS;
}
