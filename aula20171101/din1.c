#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float media(float * numeros, int qtde)
{
float m= 0.0f;
int i;
for(i=0; i<qtde; i++)
m+=numeros[i];
m/=qtde;
return m;
}

float desviopadrao(float * numeros, int qtde){
float m= media(numeros, qtde);
float dp= 0.0f;
int i;
for(i=0; i<qtde; i++)
dp+= pow(numeros[i]-m,2);
dp/=qtde-1;
return sqrt(dp);
}


int main(){
int qtde, i=0;
float *numeros;
printf("Quantos numeros voce precisa");
scanf("%d", &qtde);
numeros=(float*)malloc(qtde*sizeof(float));// a função malloc retorna um endereço do bloco de memoria que foi alocado, por um ponteiro, no caso do tipo float.
for(i=0; i<qtde; i++)
{
printf("Entre com o %d o numero", i+1);
scanf("%f", numeros+i);
}
printf("A media dos numeros e: %f\n", media(numeros, qtde));
printf("O desvio padrao dos numeros e: %f\n", desviopadrao(numeros,qtde));
free(numeros);
return 0;




}
