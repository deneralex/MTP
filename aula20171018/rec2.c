#include<stdio.h>
#include<stdlib.h>

void reverter(char * str) {
if(*str)
{reverter(str+1);
printf("%c",*str);
}
}

int main(){
char str[256];
printf("Digite a string");
scanf("%s",&str);
reverter(str);
return 0;
}
