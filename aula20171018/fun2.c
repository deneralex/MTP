#include<stdio.h>
#include<stdlib.h>

int divisao( int num1, int num2, int*quociente, int*resto){
if(num2==0){
return 0;
}
else{
*quociente=(num1/num2);
*resto=(num1%num2);
return 1;
}
}

int main()
{
int num1, num2, quociente,resto;
printf("Digite os numerador e denominador :");
scanf("%d %d", &num1, &num2);
if(divisao(num1, num2, &quociente, &resto)==1)
{
printf("O quociente e %d, e o resto %d ", quociente, resto);
}
else{

printf("Erro!");
}
return 0;
}
