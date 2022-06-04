#include <stdio.h> 
#include <stdlib.h>//Para usar exit */

void LeeArchivo(char nombre[]);
void EscribeArchivo(char nombre[]);

int main(void)
{
  char nombre[20];
  printf("Nombre del Archivo?\n");
  scanf("%s", nombre); //&nombre[0]
  EscribeArchivo(nombre);
  LeeArchivo(nombre);
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
  return;
}

void LeeArchivo(char nombre[])
{
  int i;
  int suma;
  FILE *fp;

  suma=0;
  fp=fopen(nombre, "r");
  while((fscanf(fp, "%d", &i))==1)
    {
      suma=suma+i;
    }
  printf("Suma: %d\n", suma);
  fclose(fp); 
return;
}

/*
//La Copiadora

void Copia(char origen[], char destino)
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
}
*/
