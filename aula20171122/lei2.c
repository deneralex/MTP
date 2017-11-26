#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 50

struct Ponto
{
int x;
int y;
};


int main() {
int d,i,j;
int const I=2;
int coordenadas[I];
coordenadas[0]=0;
coordenadas[1]=0;
char str[N];
printf("Digite o nome do arquivo!\n");
gets(str);
printf("Digite a quantidade de pontos!\n");
scanf("%d",&d);
FILE * arquivo;
struct Ponto P[d];
arquivo = fopen(str, "rb");
if(arquivo) {fread(P, sizeof(struct Ponto), d, arquivo);
fclose(arquivo);}
else {
fprintf(stderr, "Arquivo nao pode ser aberto!\n");
return(1);
}
for(i=0; i<d; i++)
{
fprintf(stdout,"(%d,%d)\n", P[i].x, P[i].y);
}
for(j=0; j<d; j++)
{
coordenadas[0]=coordenadas[0]+P[j].x;
coordenadas[1]= coordenadas[1]+P[j].y;
}
{
coordenadas[0]=coordenadas[0]/d;
coordenadas[1]=coordenadas[1]/d;
}
printf("Coordenadas do centroide = ");
for(j=0; j<2;j++){
printf("%d ", coordenadas[j]);
}
return 0;
}

