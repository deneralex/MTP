
#include<math.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define N 10000

int main(){
srand(time(0));
int i,num, vet[N],aux1,aux2;
printf("Digite um numero positivo entre 1 e 1000");
scanf("%d", &num);

for(i=0; i<num; i++){
vet[i]= rand()%(10);
}
aux1=vet[0];
aux2=vet[0];
for(i=0; i<num;i++){
if(aux1<vet[i]) aux1=vet[i];
if(aux2>vet[i]) aux2=vet[i];
}
printf("O maximo e %d :", aux1);
printf("O minimo e %d :", aux2);

return EXIT_SUCCESS;
};


