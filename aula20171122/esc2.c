#include <stdio.h>
#define N 50
struct Ponto
{
    double x;
    double y;
};

int main() {
    FILE * arquivo;
    int d,i;
    struct Ponto vet[N];
    char str[N];
    printf("Digite o nome com o qual voce deseja salvar o arquivo!\n");
    gets(str);
    printf("Digite a quantidade de pontos que deseja registrar! \n");
    scanf("%d",&d);
for(i=0; i<d;i++)
{
printf("Digite o ponto %d na forma x,y ",i+1);
scanf("%lf %lf", &vet[i].x,&vet[i].y);
}
    printf("%lf",vet[1].x);
    arquivo = fopen(str, "wb");

    if(arquivo)
    {
    fwrite(vet, sizeof(struct Ponto), d, arquivo);
    fclose(arquivo);
    }
    else
    {
    fprintf(stderr, "Arquivo não pode ser aberto!\n");
    }
    return 0;
    }
