#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
#define N 50
double media(double *P, double n)
{
int i=0;
double media1=0;
for(i=0;i<n;i++)
{
media1=media1+P[i];
}
media1=(media1/n);
printf("A media e %lf\n",media1);
return media1;
}

void desvio(double *P, double n,double xi)
{
int i=0;
double s=0;
for(i=0; i<n;i++)
{
s=s+pow((xi-P[i]),2);
}
s=sqrt(s/n-1);
printf("O desvio padrao e %lf\n",s);
}

void tamanho(double *P, double n)
{
int i=0;
double maior=0,menor=0;
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
printf("O maior e o menor elemento do arquivo sao respectivamente %lf e %lf\n",maior,menor);
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
    int i=0;
    double d;
    double vet[N];
    char str[N];
    fflush(stdin);
    printf("Digite o nome com o qual voce deseja salvar o arquivo!\n");
    gets(str);
    fflush(stdin);
 printf("Digite a quantidade de numeros a serem gerados! \n");
    scanf("%lf",&d);
for(i=0; i<d;i++)
{
vet[i]= rand() % 100;
}
  printf("%lf",vet[0]);
  arquivo = fopen(str, "wb");

    if(arquivo)
    {
    fwrite(vet, sizeof(double), d, arquivo);
    fclose(arquivo);
    }
    else {fprintf(stderr, "Arquivo não pode ser aberto!\n");}
    break;
}
case 2:
{
srand(time(0));
int u=0;
double f,cv;
double vet2[N];
char str1[N];
fflush(stdin);
printf("Digite o nome do arquivo!\n");
gets(str1);
fflush(stdin);
printf("Digite a quantidade de numeros adicionais!\n");
scanf("%lf",&f);
FILE * continuacao;
for(u=0; u<f;u++)
{
vet2[u]= rand() % 100;
}
printf("%lf",vet2[0]);
continuacao=fopen(str1,"a+b");
if(continuacao)
{
fwrite(vet2, sizeof(double),f, continuacao);
fclose(continuacao);
}
else {fprintf(stderr, "Arquivo não pode ser aberto!\n");}
break;
}
case 3:
{
int h=0;
double cv,xi;
double P[N];
char str3[N];
fflush(stdin);
printf("Digite o nome do arquivo!\n");
gets(str3);
printf("Digite a quantidade de pontos!\n");
scanf("%lf",&cv);
FILE * arquivof;
arquivof=fopen(str3,"rb");
if(arquivof)
{
fread(P, sizeof(double),cv, arquivof);
fclose(arquivof);
}
else {
fprintf(stderr, "Arquivo nao pode ser aberto!\n");
break;
}
for(h=0; h<cv; h++)
{
printf("%lf\n", P[h]);
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
