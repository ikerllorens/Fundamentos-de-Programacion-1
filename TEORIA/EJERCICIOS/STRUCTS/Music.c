#include <stdio.h>
#include <strings.h>

typedef struct
{
  char artista[200];
  char titulo[200];
  int anio;
  char genero[100];
}coleccion;

void actualiza(coleccion *pp);
void imprime(coleccion *pp);
void actualizaArreglo(coleccion datos[], int i);
void ActualizaArregloPuntero(coleccion datos[], int i);
void leeNombre(char texto[]);

int main(void)
{
  coleccion cd[100], *p;
  char cantante[200], nombre[200];
  printf("%s\n", nombre);
  gets(nombre);
  printf("%s\n", nombre);
  leeNombre(cantante);
  printf("%s\n", cantante);
  actualiza(&cd[9]);
  imprime(&cd[9]);
  actualizaArreglo(cd, 0);
  return 0;
}

void leeNombre(char texto[])
{
  int cont=0;
  char c;
  while((c=getchar())!=

	}
}

void actualiza(coleccion *pp)
{
  strcpy(pp->artista, "OMD");
  strcpy(pp->titulo, "Souvenir");
pp->anio
  }

void imprime(coleccion *pp)
{

}
void atualizaArreglo(coleccion datos[], int i)
{
  strcpy(datos[i].artista, "Gary Numan");
str
  }

void actualizaArregloPuntero(coleccion datos[], int i)
{
  coleccion *pp;

  pp=&datos[i];
  strcpy(pp->artista, "New Order");
  strcpy(pp->titulo, "Le Orme");
  pp->anio=1989;
strcp
