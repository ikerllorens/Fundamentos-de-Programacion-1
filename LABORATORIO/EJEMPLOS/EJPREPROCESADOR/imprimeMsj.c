#include "local.h"
#include <stdio.h>

int imprimeMsj(bandera a)
{
#ifdef DEBUG
  printf("ImprimeMsj\n");
#endif

  if(a)
    {
      printf("La bandera es verdadera\n");
    }
  else
    {
      printf("La bandera es falsa\n");
    }
  return 0;
}
