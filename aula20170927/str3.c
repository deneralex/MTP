#include<math.h>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define N 256

int main(){
char str[N];
int i;
printf("Digite a frase :");
fgets(str,N,stdin);

for(i=0; i<strlen(str); i++){

if(str[i]<78&&str[i]>65)
{
str[i]=(str[i]+13);
}
else
{
 if((str[i]>78 && str[i]<90))
str[i]=(str[i]-13);
}

if(str[i]>97 && str[i]<110)
{
str[i]=(str[i]+13);
}
else
{
 if((str[i]>110 && str[i]<123))
str[i]=(str[i]-13);
}

 }
str[i-1]= '\0';
printf("%s\n", str);
return EXIT_SUCCESS;
}



