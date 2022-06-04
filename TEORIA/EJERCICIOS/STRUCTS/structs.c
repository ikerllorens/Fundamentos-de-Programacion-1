//Creado por Iker Llorens el 12/11/2012

typedef struct {
  char artista[80];
  char titulo[80];
  int anio;
  char genero[20];
} coleccionmusica;
coleccionmusica cd[100], *point;

#include <stdio.h>

void CapturaNombre(void);
void Imprime(int cuantosvan);

int main(void)
{
 
  int registro;

  scanf("%d", &registro);
  point=&cd[registro];
  CapturaNombre(artista);
  CapturaNombre(titulo);
  scanf("%d", &anio);
  CapturaNombre(genero);
  Imprime(registro);
  return 0;
}

void CapturaNombre(char texto[])
{
  int cont=0;
  char c;
  while((c=getchar())!='\n')
    {
      texto[cont]=c;
      ++cont;
    }
  return;
}

void Imprime(int cuantosvan)
{
  int cosa;
  for(cosa=0; cosa<=cuantosvan; cosa++)
    {
      printf("%s", point->artista);
      printf("\t|%s", point->titulo);
      printf("\t|%d", point->anio);
      printf("\t|%s\n", point->genero);
    }
  return;
}
