#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
srand(time(0));
int x=rand()%100;
int menor= 101, maior=293;
int y= menor+rand()%(maior-menor+1);
printf("Entre 0 e 99 : %d\n",x);
printf("Entre 101 e 293 : %d\n",y);
return 0;
}
