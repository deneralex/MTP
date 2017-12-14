#include <stdio.h>
#include<stdlib.h>
struct complexo
   {
        double re;
        double im;
   };

void inicializaComplexo(struct complexo *nc)
  {
       nc->re = 0;
       nc->im = 0;
   }

void leiaComplexo(struct complexo *nc)
   {
       scanf("%lf", &nc->re);
       scanf("%lf", &nc->im);
   }

void escrevaComplexo(struct complexo *nc)
   {
       printf("%lf+%lfi", nc->re, nc->im);
   }

struct complexo* somaComplexos(struct complexo *nc, struct complexo *ncA)
   {
       struct complexo *ncR = (struct complexo*)malloc(sizeof(struct complexo));
       ncR->re = nc->re + ncA->re;
       ncR->im = nc->im + ncA->im;
       return ncR;
   }

int main(void)
   {
       struct complexo x, y, *pz;
       leiaComplexo(&x);
       leiaComplexo(&y);
       pz = somaComplexos(&x, &y);
       escrevaComplexo(pz);
       putchar('\n');
       return 0;
}
