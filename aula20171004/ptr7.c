#include<stdio.h>
#include<stdlib.h>

int main()
{
int i=0;
char cod[5];
int vet[5];
printf("Digite os numeros do vetor ");
for(i=0; i<4 ;i++){
scanf("%d", &vet[i]);
}
for(i=0; i<4;i++){
cod[i]=vet[i];
}
cod[i]='\0';
printf("%s", cod);
return 0;
}
