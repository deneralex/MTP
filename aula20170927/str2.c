
#include<conio.h>
#include<stdio.h>
#include<string.h>
#define N 256
char vogais[]="aeiou";
char consoantes[]="bcdfghjklmnpqrstvwxyz";

void minuscula(char str[])
{
	int x=0;
	for(x=0; str[x]!= '\0'; x++)
	{
		if(str[x]>='A' && str[x]<'Z')
		str[x]=str[x]+('a'-'A');
	}
}
int fbranco(char str[])
{
int i,cont=0;
for(i=0; i<=strlen(str); i++){
if(str[i]== ' ')
cont++;
}
return cont;
}
int fvogal(char frase[])
{
int i,j,contador=0;
for (i=0;i<strlen(frase);i++)
        for (j=0;j<=strlen(vogais);j++)
            if (frase[i]==vogais[j] && frase[i]!=0) contador++;
   return contador;
}
int fconsoante(char frase[])
{
int i,j,contador=0;
for (i=0;i<strlen(frase);i++)
        for (j=0;j<=strlen(consoantes);j++)
            if (frase[i]==consoantes[j] && frase[i]!=0) contador++;
   return contador;
}

int fdigito(char frase[])
{
int i,j,contador=0;
for (i=0;i<=strlen(frase);i++)
if('!'<= frase[i]&& frase[i]<='/'&& frase[i]!= ' ') contador++;
   return contador;
}

int main(){
int i=0,vogal,consoante,digito,branco;
char str[N];
printf("Entre com uma frase: ");
fgets(str,N,stdin);
minuscula(str);
vogal=fvogal(str);
consoante=fconsoante(str);
branco=fbranco(str);
digito=fdigito(str);
printf("V %d C %d D %d E %d",vogal,consoante,digito,branco);
return 0;
}



