#include<stdio.h>
#include<stdlib.h>

int somafracao( int num1, int den1, int num2, int den2, int *pnumR, int *pdenR){
if(den1 == 0 || den2==0){return 0;}
else{

*pnumR=den2*num1+ den1*num2;
*pdenR=den1*den2;
return 1;} //verdadeiro;
}


int mdcc(int x, int y)
{
  if (y==0)
{
    return x;
}
  else
{
    return mdc(y,x % y);
}
}
int mdc( int x, int y)
{
if(x==y || y==0){return x;}
if(x==0){return y;}
if(x%2==0 && y%2!=0)
{
return mdcc(x/2,y);
}
if(y%2==0 && x%2!=0)
{
return mdc(x,y/2);
}
if(x%2==0 && y%2==0)
{
return 2*mdc(x/2, y/2);
}
if(x>y){
return mdc((x-y)/2,y);
}
if(y>x){
return mdc((y-x)/2,x);
}
}
int main(){
int num1, den1, den2, num2,numR, denR,a;
printf("Entre com um numero racinal na forma num/den: ");
scanf("%d %d", &num1, &den1);
printf("Entre com um outro numero racinal na forma num/den: ");
scanf("%d %d", &num2, &den2);
if(somafracao(num1, den1,num2,den2,&numR,&denR)){
a=mdc(numR, denR);
printf("Resultado da soma = %d/%d\n", numR/a,denR/a);}
else
printf("Erro! \n");
mdc(numR,denR);
return 0;
}
