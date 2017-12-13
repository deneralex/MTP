#include<conio.h>
#include<stdio.h>
#include<string.h>

int main(){
int num1,num2,num3;
int *p1,*p2,*p4;
printf("Digite o primeiro numero \n");
scanf("%d", &num1);
printf("Digite o segundo numero \n");
scanf("%d", &num2);
num3=num2+num1;
p1=& num1;
p2=& num2;
p4=& num3;
printf("\n Numero 1: 0x%p(endereco) %d , Numero 2: 0x%p(endereco) %d", &p1,*p1,&p2,*p2);
printf("\n A soma dos dois numeros 0x%p(endereco) %d", &p4, *p4);
return 0;
}
