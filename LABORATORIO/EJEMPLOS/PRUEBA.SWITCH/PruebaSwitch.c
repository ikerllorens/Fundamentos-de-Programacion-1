//Creado por Iker Llorens el 26/09/2012
//Algoritmo PruebaSwitch.c
/*
  Programa que prueba cómo funciona "switch" en c
*/

#include <stdio.h>

void evalua(void);

int main(void)
{
  evalua();
  return 0;
}

void evalua(void)
{
  int i;
  for(i=0; i<10; i++)
    {
      printf("Antes de break\n");
      if(i==5)
	{
	  break;
	}
    }
}
