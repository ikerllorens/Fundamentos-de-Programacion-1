// Creado por Iker Llorens el 1/10/2012
/*
Este programa obtiene una palabra e invertirla por medio de arreglos
*/

#include <stdio.h>
#define LONGITUD 100


int main(void)
{
  char palabra[LONGITUD];
  int control;

  for(control=0; control<LONGITUD; ++control)
    {
      palabra[control]=getchar();
      if(palabra[control]=='.')
	{
	  break;
	}
    }
  putchar('\n');
  palabra[control+1]=0;
  for(control=LONGITUD; control>=0; --control)
    {
      putchar(palabra[control]);
    }
  putchar('\n');
  return 0;
}

