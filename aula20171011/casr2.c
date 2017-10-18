#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
void imprime(int l, int c, char str[])
{
int p,i,j,a;
a=strlen(str);
for(i=0; i<l; i++)
{
    for(j=0; j<c; j++)
    {

     p=rand()%a;
     printf("%c", str[p]);
    }
    printf("\n");
}

}


int main(){
srand(time(0));
char caracteres[] = ": $ # $ : 4 b . ' :. : $ # $: 4b. ':.";
int l,c;
printf("Digite a quantidade de linhas e a quantidade de colunas");
scanf("%d %d", &l, &c);
imprime(l,c,caracteres);
return 0;
}
