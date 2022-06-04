//Creado por Iker Llorens el 19/09/2012
/*
Este programa saca el promedio de un grupo de números dados por
el usuario
*/

#include <stdio.h>

float numero;
float suma;
float cuantos;
float promedio;
float contador;

void Promedio(float cuantos);

int main(void)
{
  cuantos=0;
  printf("\n¿De cuantos números necesitas el promedio?\n");
  scanf("%f", &cuantos);
  getchar();
  Promedio(cuantos);
}

void Promedio(float cuantos)
{
  suma=0;
  numero=0;
  promedio=0;
  contador=0;
  while(contador<cuantos)
    {
      printf("\nDame un número\n");
      scanf("%f", &numero);
      getchar();
      suma=suma+numero;
      contador++;
    }
  promedio=(suma/cuantos);
  printf("El promedio es %f\n", promedio);
}
