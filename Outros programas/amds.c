#include <stdlib.h>
#include <string.h>
#define N 3

typedef
struct stTexto
{int id;
char mat[12];}
Texto;
void imprime(Texto * dado, int qtde) {
if(qtde > 0)
{imprime(dado+1,qtde-1);
printf(": (%d) %s ", dado->id, dado->mat);}
else printf(":\n");}
int main()
{
Texto grupo[N];
int i;
for(i = 0; i < N; i++)
grupo[i].id = i;
strcpy(grupo[0].mat,"11711ETE008");
strcpy(grupo[1].mat,"11711EEL023");
strcpy(grupo[2].mat,"11711EEL006");
imprime(grupo, N);
return 0;}
