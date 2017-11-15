#include<stdio.h>
#include<stdlib.h>
#define n 200
struct ponto
{
int x;
int y;
}v[n];

struct poligono
{
int vertices;
struct v* colecao;
};

int main()
{
    int i=0;
struct poligono a;
printf("Digite a quantidade de vertices: ");
scanf("%d", &a.vertices);
printf("Digite a quantidade de ptos: ");
for(i=0; i<a.vertices;i++)
{
scanf("%d",& a.colecao.x);
}

return 0;
}
