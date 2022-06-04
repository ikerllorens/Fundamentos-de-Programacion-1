#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

void Copia(char origen[], char destino[]);

int main(int argc, char *argv[])
{
  char origen[200], destino[200];
  if(argc=!3)
    {
      printf("LaCopiadora: missing file operand");
    }
  else
    {
      strcpy(origen, argv[1]);
      strcpy(destino, argv[2]);
      Copia(origen, destino);
    }  
  return 0;
}


void Copia(char origen[], char destino[])
{
  FILE *f1, *f2;
  char c;
  
  f1=fopen(origen, "r");
  f2=fopen(destino, "w");
  if(f1==NULL || f2==NULL)
    {
      printf("No pude leer %s o esciribir %s\n", origen, destino);
      exit(1);
    }
  while((c=getc(f1))!=EOF)
    {
      putc(c, f2);
    }
  fclose(f1);
  fclose(f2);
  return;
}
