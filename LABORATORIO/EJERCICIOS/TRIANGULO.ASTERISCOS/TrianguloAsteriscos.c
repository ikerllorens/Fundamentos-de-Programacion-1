// Creado por Iker Llorens el 24/09/2012
// TrianguloAsteriscos.c
/*
Este programa imprime un triangulo compuesto de asteriscos con una
base dada por el usuario
*/
#include <stdio.h>


int numero;
int contador1;
int contador2;

int main(void)
{
  printf("\nDame un número entero\n");
  scanf("%d", &numero);
  getchar();
  for(contador1=0; contador1<numero; contador1++)
    {
      for( contador2=0; contador2<=contador1; contador2++)
	{
	  printf("* ");
	}
      printf("\n");

    }
   return 0;

}
