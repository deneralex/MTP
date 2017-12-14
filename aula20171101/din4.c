#include<stdio.h>
#include<stdlib.h>
#define N 200


struct ponto
{
int x;
int y;
};

struct poligono
{
int vertices;
struct ponto colecao[N];
};

struct poligono Preenche(struct poligono a)
{
int i;
printf("Digite a quantidade de vertices: ");
scanf("%d", &a.vertices);
int c=a.vertices;
printf("Digite a colecao de pontos na forma (x,y): \n\n");
for(i=0; i<c; i++)
{
scanf("%d", &a.colecao[i].x);
scanf("%d", &a.colecao[i].y);
}
return a;
}
int areac (struct poligono a, double *coordenadas)
{
int k,j,area=0;
k=1;
for(j=0; j<a.vertices-1; j++)
{
area=area+(a.colecao[j].x * a.colecao[k].y - a.colecao[k].x*a.colecao[j].y);
k++;
}
printf("\n A area do poligono e %d :", area/2);
coordenadas[0]=0;
coordenadas[1]=0;
}

void centroide(struct poligono a, double *coordenadas)
{
int i,j;
for(i=0; i<1; i++){
for(j=0; j<a.vertices; j++)
{
coordenadas[0]= coordenadas[0]+a.colecao[j].x;
coordenadas[1]= coordenadas[1]+a.colecao[j].y;
}
coordenadas[0]=coordenadas[0]/a.vertices;
coordenadas[1]=coordenadas[1]/a.vertices;
}

printf("\n Coordenadas do centroide(x,y): \n\n");
for(i=0; i<2; i++)
{
 printf("%lf ", coordenadas[i]);
}
}

int main()
{
int const p = 2;
double coordenadas[p];
int i=0,j,k,area=0;
struct poligono a;
a=Preenche(a);
area=areac(a,coordenadas);
centroide(a,coordenadas);
return 0;
}
