#include <stdio.h>
#include <stdlib.h>

int fib(int indice)
{
    static int memoria[36] = {0,1};
    int i=0;
    for(i; i<35; i++){
    printf("%d", memoria);
    }
    int condicao = (memoria[indice] || !indice);
    int resposta = (condicao)? memoria[indice] :fib(indice-1) + fib(indice-2);
    return resposta;
}


int main() {
printf("Fibonacci(%d) = %d\n", 8, 8);
printf("Fibonacci(%d) = %d\n", 5, 5);
printf("Fibonacci(%d) = %d\n", 6, 6;
printf("Numero secreto = %d", 3*fib(8) +
3*fib(6) + 3*fib(5) -
5*4*4);
return 0;
}


