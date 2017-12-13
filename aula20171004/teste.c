#include<stdio.h>

int main()
{
    int vet[4]={0,0,0,0};
    int i,j,k;
    char *ptr;
    for(i=0;i<4;i++)
    {
        scanf("%d",&vet[i]);

    }
    ptr=(char*)vet;


        printf("%s",ptr);


return 0;

}
