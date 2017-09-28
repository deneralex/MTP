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
 if(str[i]='A');
 {str[i]='4';}
 if(str[i]='E');
  {str[i]='3';}
  if(str[i]='I');
  {str[i]='1';}
  if(str[i]='O');
  {str[i]='0';}
  if(str[i]='S');
  {str[i]='5';}
  if(str[i]='G');
  {str[i]='6';}
 }
printf("%s\n",str);
return EXIT_SUCCESS;
}

//if(str[i]>='a' && str[i]<'n'){str[i]=str[i]+('N'-'A');}
 //if(str[i]>='m' && str[i]<'z'){str[i]=str[i]-('N'-'A');}

