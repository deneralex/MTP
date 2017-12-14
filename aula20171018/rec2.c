#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverter(char * str) {
if(*str)
{
reverter(str+1);
printf("%c",*str);
}
}

int main(){
char str[256];
printf("Digite a string \n");
fgets(str,256,stdin);
reverter(str);
return 0;
}
