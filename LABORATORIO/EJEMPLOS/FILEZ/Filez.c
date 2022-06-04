/*
Programa que genera números del uno al diez en un archivo externo
*/

#include <stdio.h>
#include <stdlib.h>//Para usar exit

void EscribeArchivo(char nombre[]);

int main(void)
{
  char nombre[20];
  printf("Nombre del Archivo?\n");
  scanf("%s", nombre); //&nombre[0]
  EscribeArchivo(nombre);
  return 0;
}

void EscribeArchivo(char nombre[])
{
  int i;
  FILE *fp;
  if((fp=fopen(nombre, "w"))==NULL)
    {
      printf("Error no pude abrir %s\n", nombre);//Si no puede abrir el arvhivo
      exit(1);//Termina el programa y en vez de 0 regresa 1
    }
  for(i=1;i<=10;i++)
    {
      fprintf(fp, "%d\n", i);
    }
  fclose(fp); //Cierra el archivo para que exista
}
