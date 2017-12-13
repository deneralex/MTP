#include<stdio.h>
int main() {
float base,altura,area;
printf("Entre com a altura: ");
scanf("%f", &altura);
printf("Entre com a base: ");
scanf("%f", &base);
area=(base*altura)/2;
printf("A area do triangulo: %.3f\n", area);
return 0;
}
