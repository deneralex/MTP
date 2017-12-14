#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
int main()
{
FILE *f;
f=fopen("meutexto.txt", "a+b");
if(f==NULL)
{
printf("Erro na abertura \n\n");
exit(1);
}
char c, *str = NULL;
int i = 0,j = 1,d;
printf("O conteudo ja existente no arquivo meutexto.txt e: \n");
while(d!=EOF)
{
d=fgetc(f);
printf("%c",d);
}
	str = (char *) malloc(10 * sizeof(char) + 1);

	printf("\nDigite o texto: ");

	while ((c = getchar()) != '*' && c != EOF && c != '\0')//c e preenchido pelo getchar, enquanto o carcatere for diferente de *, c diferente do ultimo caractere e do '\0'
	{

		if (j == 10)
		{
			str = (char *) realloc(str, strlen(str) + 10 * sizeof(char) + 1);//realoca o numero de caracteres atual + 10 bytes(dez caracteres)
			j = 1;
		}
		*(str + i * sizeof(char)) = c;
		fputc(str[i],f);
		if(*(str+i)=='*'){
        break;
        }
		i++;
		j++;
	}
	*(str + i * sizeof(char)) = '\0';
     while(i>=0)
    {
        *(str+i)= toupper(*(str+i));
        i--;
    }
	fclose(f);
	free(str);
	return 0;
}


