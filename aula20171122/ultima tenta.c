#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
#define N 50
int media(int *P, int n)
{
int i=0,media=0;
for(i=0;i<n;i++)
{
media=media+P[i];
}
media=(media/n);
printf("A media e %d\n",media);
return media;
}

void desvio(int *P, int n,int xi)
{
int i=0, s=0;
for(i=0; i<n;i++)
{
s=s+pow((xi-P[i]),2);
}
s=sqrt(s/n-1);
printf("O desvio padrao e %d\n",s);
}

void tamanho(int *P, int n)
{
int maior=0,menor=0,i;
maior=P[0];
for(i=0; i<n; i++)
{
if(P[i]>maior)
{
 maior=P[i];
}
}
menor=P[0];
for(i=0; i<n; i++)
{
if(P[i]<menor)
{
 menor=P[i];
}
}
printf("O maior e o menor elemento do arquivo sao respectivamente %d e %d\n",maior,menor);
}
int main(){
int g;
printf("Digite: \n1-Novo Arquivo\n2-Acrescentar ao Arquivo\n3-Ler Arquivo\n4-Sair\n");
do{
scanf("%d",&g);
switch(g)
{
case 1:
{
srand(time(0));
FILE * arquivo;
    int d,i;
    int vet[N];
    char str[N];
    fflush(stdin);
    printf("Digite o nome com o qual voce deseja salvar o arquivo!\n");
    gets(str);
    fflush(stdin);
 printf("Digite a quantidade de numeros a serem gerados! \n");
    scanf("%d",&d);
for(i=0; i<d;i++)
{
vet[i]= rand() % 100;
}
  printf("%d",vet[0]);
  arquivo = fopen(str, "wb");

    if(arquivo)
    {
    fwrite(vet, sizeof(int), d, arquivo);
    fclose(arquivo);
    }
    else {fprintf(stderr, "Arquivo não pode ser aberto!\n");}
    break;
}
case 2:
{
srand(time(0));
int f,u,cv;
int vet2[N];
char str1[N];
fflush(stdin);
printf("Digite o nome do arquivo!\n");
gets(str1);
fflush(stdin);
printf("Digite a quantidade de numeros adicionais!\n");
scanf("%d",&f);
FILE * continuacao;
for(u=0; u<f;u++)
{
vet2[u]= rand() % 100;
}
printf("%d",vet2[0]);
continuacao=fopen(str1,"a+b");
if(continuacao)
{
fwrite(vet2, sizeof(int),f, continuacao);
fclose(continuacao);
}
else {fprintf(stderr, "Arquivo não pode ser aberto!\n");}
break;
}
case 3:
{
int cv,h,xi;
int P[N];
char str3[N];
fflush(stdin);
printf("Digite o nome do arquivo!\n");
gets(str3);
printf("Digite a quantidade de pontos!\n");
scanf("%d",&cv);
FILE * arquivof;
arquivof=fopen(str3,"rb");
if(arquivof)
{
fread(P, sizeof(int),cv, arquivof);
fclose(arquivof);
}
else {
fprintf(stderr, "Arquivo nao pode ser aberto!\n");
break;
}
for(h=0; h<cv; h++)
{
printf("%d\n", P[h]);
}

xi=media(P,cv);
desvio(P,cv,xi);
tamanho(P,cv);
break;
}
}
}while(g!=4);
return 0;
}
