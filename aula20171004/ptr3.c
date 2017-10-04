#include<stdio.h>
#include<stdlib.h>

int main() {
int vetor[] = {0x0F,0xFF,0xFFFF,0xFFFFFF,0x80000001,0xFFFFFFFF};
unsigned char *ponteiro;
int nbytes = sizeof(vetor);
int i,contagem=0;
printf("End. inicial do vetor: %p\n");
for(i=0, ponteiro=(unsigned char *) vetor; i<nbytes; i++){
if(ponteiro[i]) {
contagem++;}
//if(* ponteiro+i)== 0x00); contagem++;
printf("End.: %p, dado: %d, %X\n", ponteiro+i, ponteiro[i], *(ponteiro+i));
}
printf(" De %d bytes, %d estão com 0x01. \n", nbytes,contagem);
return 0;
}
