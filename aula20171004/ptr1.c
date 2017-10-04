#include<stdio.h>
#include<stdlib.h>

int main() {
unsigned int dado= 0xFACA8421;
unsigned char  *ponteiro; // ponteiro para byte
int i;
printf(" Endereco.: %p, dado em decimal(unsigned): %u\n", &dado, dado);
ponteiro = (unsigned char*)&dado;
for(i=0; i<sizeof(dado);i++){
printf("End.: %p => %u(decimal), %X(hexadecimal)\n",
ponteiro+i, *(ponteiro+i), ponteiro[i]);
}
return EXIT_SUCCESS;
}
