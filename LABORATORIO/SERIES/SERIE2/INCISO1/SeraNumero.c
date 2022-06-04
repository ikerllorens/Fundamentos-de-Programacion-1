//Creado por Iker Llorens el 3/10/2012
/*
 Este programa lee los caracteres por el usuario y los clasifica si son un
número o otro caracter
*/

#include <stdio.h>



int main(void)
{
int MasaCaracteres[11];
int control;
char caracter;
  for(control=0; control<11; control++)
    {
      MasaCaracteres[control]=0;
    }
  while(1)
    {
      caracter=getchar();
      //__fpurge(stdin);
      if(caracter=='.')
	{
	  //printf("llegue al if 1\n");
	  break;
	}
      if((caracter>='0')&&(caracter<='9'))
	{
	  MasaCaracteres[caracter-'0']=MasaCaracteres[caracter-'0']+1;
	  //printf("llegue al if 2\n");
	}
      else
	{
	  MasaCaracteres[11]=MasaCaracteres[11]+1;
	  //printf("llegue al if 3\n");
	}
    }
  for(control=0; control<=10; control++)
    {
      printf("%d - ", control);
      printf("%d\n", MasaCaracteres[control]);
    }
  printf("Otros caracteres - ");
  printf("%d\n", MasaCaracteres[11]);
  return 0;
}
