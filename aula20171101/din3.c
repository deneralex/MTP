#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Tamanho inicial do vetor
    int tamVet = 10;
    // Primeira aloca��o do vetor
    int* piVetorInt = (int*)malloc(sizeof(int)*tamVet);
    if(!piVetorInt) {
        // N�o foi poss�vel alocar o novo bloco de mem�ria
        printf("N�o foi possivel alocar a memoria.");
        exit(1);
    }
    // Inicializa o novo vetor alocado
    memset(piVetorInt,0,sizeof(int)*tamVet);
    // Ponteiro para o novo vetor alocado
    int* piNovoVetor = NULL;
    // Numero digitado pelo usuario
    int iNum = 0;
    // Contador que indica a quantidade de numeros digitados
    int iCont = 0;
    // Armazena o tamanho original do vetor, utilizado para inicializa a nova regiao de memoria alocada
    int iTamOriginal = tamVet;

    do {
        printf("%s\niNum >> ", "Digite qualquer numero para adicionar ao vetor ou 0(zero) para sair.");
        scanf("%d%*c",&iNum);

        if(iNum == 0)
            break;

        // Armazena valor digitado pelo usuario
        piVetorInt[iCont++] = iNum;

        if(tamVet == iCont) {
            // Armazena tamanho original do vetor
            iTamOriginal = tamVet + 1;
            // Se vetor est� cheio, realoca a mem�ria
            tamVet += tamVet; // Novo tamanho = tamanho Atual * 2
            // Realoca nova �rea de mem�ria
            piNovoVetor = (int*)realloc(piVetorInt,sizeof(int)*tamVet);
            if(!piNovoVetor) {
                // N�o foi poss�vel realocar o bloco de mem�ria
                printf("N�o foi possivel alocar novo bloxo de memoria.");
                exit(1);
            }
            piVetorInt = piNovoVetor;
            memset(&piVetorInt[iTamOriginal],0,sizeof(int)*(tamVet-iTamOriginal));
        }
    }while(1); // Loop infinito

    printf("Valores digitados pelo usuario: ");
    for(iCont = 0; piVetorInt[iCont] != 0; iCont++)
        printf("\'%d\' ",piVetorInt[iCont]);

    printf("\nDigite qualquer tecla para sair...");
    getchar();
    return 0;
}

