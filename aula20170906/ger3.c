#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
srand(time(0));
int limite,i,a,b,c,soma,pontos=0,d;
for(i=0; i<3; i++){
printf("Digite o limite :");
scanf("%d", &limite); getchar();
int menor= 1, maior=6;
int a = menor+rand()%(maior-menor+1);
int b = menor+rand()%(maior-menor+1);
int c = menor+rand()%(maior-menor+1);
soma= a+b+c;
printf(" A soma e %d\n", soma);
if(limite<=11){
pontos=pontos+(11-soma);}
if(limite>11){
d=limite-10;
if(soma>limite)
pontos=pontos-d*(soma-limite);
else
pontos=pontos+(limite-soma)/d+1;
}
printf(" A pontuação final da rodada e : %d\n" , pontos);
}
return 0;
}
