#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado() {
	return rand()%6 + 1;
}

int main() {
    srand(time(0));
    int b=0,a=0,cont =0, i;
    char c;
    printf("Simulador de dado vs. 1.0 - Digite ENTER 5 vezes para rodar o dado "
	);
	do {
    a=0,b=0;
	for(i=0; i<5; i++){
    scanf("%c", &c);
    b=dado();
    a=a+b;
	printf("... %d\n", b);
	}
	if(a>18 && a<23){
    printf("Voce ganhou! \n");
    break;
    }
    cont++;
     } while(cont!= 3 || a>18 && a<23);
     if(cont==3){
    printf("Voce perdeu! \n");}

    return EXIT_SUCCESS;
}







