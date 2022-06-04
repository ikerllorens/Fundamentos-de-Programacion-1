#include <stdio.h>

int main(int argc, char *argv[])
{
  int i;
  int a;
  int j;
  int suma;

  suma=0;
  for(i=1; i<argc; i++)
    {
      a=sscanf(argv[i],"%d",&j);
      if(a==1)
	{
	  suma=suma+j;
	}    
    }
  printf("La suma es %d\n", suma);
  return 0;
}
