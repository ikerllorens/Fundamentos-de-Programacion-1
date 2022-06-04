#include "funciones.h"

int main(void)
{
  Numerote CosaEspantosa;
  Numerote veces;

  CosaEspantosa=rand10();
#ifdef DEBUG
  printf("%d\n", CosaEspantosa);
#endif
  printf("\nAdivina el número que estoy pensando. Pista es de 1 a 10000\n");
  veces=AdivinaNum(CosaEspantosa);
  printf("Yay!! Lo lograste en %d intentos\n", veces);
  return 0;
}

int AdivinaNum(int cosa)
{
  Numerote trial;
  contador intentos;

  intentos=0;
  while(1)
    {
      intentos++;
      scanf("%d", &trial);
      getchar();
      if (trial==cosa)
	{
	  break;
	}
      else
	{
	  if(trial>cosa)
	    {
	      printf("Nop. Es más pequeño. :)\n");
	    }
	  if(trial<cosa)
	    {
	      printf("Nop. Es más grande. :)\n");
	    }
	}
    }
  return intentos;
}
