#include<math.h>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define N 256
int main(){
int i,TamStr;
char str[N];
printf("Entre com a frase");
fgets(str,N,stdin);
TamStr=strlen(str);
for(i=0; i<TamStr; i++)
{str[i] = toupper(str[i]);}
for(i=0; i<TamStr; i++){
if(str[i]=='A')
{
str[i]=str[i]-13;
}
if(str[i]=='I')
{
str[i]=str[i]-24;
}
if(str[i]=='E')
{
str[i]=str[i]-18;
}
if(str[i]=='O')
{
str[i]=str[i]-31;
}
if(str[i]=='S')
{
str[i]=str[i]-30;
}
if(str[i]=='G')
{
str[i]=str[i]-17;
}
}
printf("%s\n",str);
return EXIT_SUCCESS;
}












