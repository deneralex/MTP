#include <stdio.h>
#include <stdlib.h>
int fib(int indice) {
static int memoria[36] = {0,1,2};
int condicao = (memoria[indice] || !indice);
int resposta = (condicao)? memoria[indice] :
fib(indice-1) + 2*fib(indice-2)+3*fib(indice-3);
return resposta;
}
int main()
{
	int n=4,k;
	k=fib(n);
	printf("%d",k);
}
