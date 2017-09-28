#include<math.h>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define N 256

void maiuscula(char str[])
{
	int x=0;
	for(x=0; str[x]!= '\0'; x++)
	{
		if(str[x]>='A' && str[x]<'Z')
		str[x]= str[x]-('a'-'A');
	}
}
int main(){
char str[N];
int i;
printf("Digite a frase :");
fgets(str,N,stdin);
maiuscula(str);
for(i=0; i<strlen(str); i++){
 if(str[i]='A');
 {str[i]='4';}
 if(str[i]='E');
  {str[i]='3';
  if(str[i]='I');
  {str[i]='1';}
  if(str[i]='O');
  {str[i]='0';}
  if(str[i]='S');
  {str[i]='5';}
  if(str[i]='G');
  {str[i]='6';}
 }}
printf("%s\n",str);
return EXIT_SUCCESS;
}
