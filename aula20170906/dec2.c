#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
srand(time(0));
int numero,soma,multiplicacao;
int cont=0;
printf("Entre com o numero: ");
scanf("%d", &numero);
printf("Digite a provavel soma");
scanf("%d", &soma);
printf("Digite a provavel multiplicacao");
scanf("%d", &multiplicacao);
if(numero%8192==0) {
 printf("Numero divisor de 8192.\n"); cont= cont+1; }
else { printf("Numero nao e divisor de 8192.\n");}

int x=rand()%100;
int menor= 1328, maior=1360;
int y= menor+rand()%(maior-menor+1);
printf("Entre 0 e 99 : %d\n",x);
printf("Entre 1328 e 1360 : %d\n",y);
if(y+101==soma)
{
    printf("Voce acertou!!");
    cont=cont+1;
}
if(x*3==multiplicacao) {
    printf("Voce acertou!!");
    cont=cont+1;
}
printf(" A pontuação e :" "%d\n", cont );
return 0;
}





