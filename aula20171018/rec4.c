#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//Prototipos das funçoes
void um(double *A,double *B);
void dois(double *A,double *B);
void tres(double *A,double *B);
int main()
{
    double A[] = {1.0, 3.0, 5.0, 7.0, 9.0, 11.0, 13.0, 15.0, 17.0, 19.0, 21.0, 23.0, 25.0, 27.0, 29.0, 31.0};
    double B[] = {0.5, 0.25, 0.125, 0.0625, 0.5, 0.25, 0.125, 0.0625, 0.5, 0.25, 0.125, 0.0625, 0.5, 0.25, 0.125, 0.0625};
    int n = sizeof(A)/sizeof(double);
    int opcao;
    void (*foo)(double *,double *);
    printf("Escolha uma das opcoes: \n1-Raiz(A+B) \n2-(A+3*B) \n3-B^(2)/A\nOpcao: ");
    scanf("%d",&opcao);
    switch(opcao)
    {
    case !0:
    {
        foo=um;
        foo(A,B);
        break;
    }
    case 2:
    {
        foo=dois;
        foo(A,B);
        break;
    }
    case 3:
    {
        foo=tres;
        foo(A,B);
        break;
    }
    }
    return EXIT_SUCCESS;
}

void um(double *A,double *B)
{
    int i;
    for(i=0; i<16; i++)
    {
        A[i]=sqrt(A[i]+B[i]);
        printf("%lg\n",A[i]);
    }
}
void dois(double *A, double *B)
{
    int i=0;
    for(i; i<16; i++)
    {
        A[i]=A[i]+3*B[i];
        printf("%lg\n",A[i]);
    }
}
void tres(double *A, double *B)
{
    int i=0;
    for(i; i<16; i++)
    {
        A[i]=(B[i]*B[i])/A[i];
        if(i<15)
        {
        printf("%.6lg,",A[i]);
        }
        if(i==15)
        {
         printf("%.6lg",A[i]);
        }

    }
}
