#include<stdlib.h>
#include<stdio.h>
#include <ctype.h>
int main()
{
    char * str; //declara um ponteiro para char
    int i=0;
    str=(char*)calloc(1,sizeof(int));//o ponteiro para char recebe um endereço na memoria reservado dinamicamente pelo calloc
    printf("Entre com uma frase:\n");
    while(!0)//laço infinito
    {
        scanf("%c", str+i);//
        str=(char*)realloc(str, sizeof(char)*1);
        if((str+i)==NULL)//se o valor retornado para o ponteiro for NULL
        {
            printf("\n\nSem memoria suficiente!\n\n");
            return EXIT_SUCCESS;
        }
        if(*(str+i)=='*')
            break;
        i++;
    }
    *(str+i)='\0';
    while(i>=0)
    {
        *(str+i)= toupper(*(str+i));
        i--;
    }

    printf("Frase salva na memoria (maiuscula): %s \n\n",str);
    free(str);
    return EXIT_SUCCESS;
}
