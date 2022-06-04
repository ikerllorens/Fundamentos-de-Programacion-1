//Creado por Iker Llorens el 26/09/2012
//Algoritmo PutCharInfinite.c
/*
Programa que prueba las funcionas getchar y putchar
*/

#include <stdio.h>

void capturaCar(void);

int main(void)
{
  capturaCar();
  return 0;
}

void capturaCar(void)
{
  char car;
  while(1)
    {
      car=getchar();
      putchar(car);
      putchar('\n');
    }
}
