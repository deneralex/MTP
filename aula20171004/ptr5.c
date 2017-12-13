#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
# define n 1000
 int main()
 {

 int vet[n],i,j=0,k=0;
 unsigned char *bytes, escolha;
 srand(time(0));
 for(i=0; i<n; i++)
 {
     vet[i]=rand()%(RAND_MAX);
 }
 unsigned char cont[n]={0};
 bytes=(unsigned char*)vet;

 printf("Escolha um numero de 0 a 255: \n");
 scanf("%i", &escolha);

 for(j=0; j<1000; j++,bytes+=4){
 if(*bytes == escolha)   {
   printf("0x%p : %i \n", bytes, *bytes);
   k++;

 }
 }
printf("Esses %d bytes sao iguais a %d e estao localizados entre o endereço 0x%p ate o endereço 0x%p na memoria", k,escolha, vet[0], vet[+999]);
 }
