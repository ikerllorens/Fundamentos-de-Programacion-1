//
//Algoritmo TrianguloReves.c
//Creado por Iker Llorens el 26/09/2012
//
/*
  Este programa imprime asteriscos en pantalla de forma que formen un triángulo
desde la base hasta la punta, es decir de mayor a menor.
*/

#include <stdio.h>

  int j;
  int lados;
  int i;
  int z;
  int control;

int main(void)
{
  printf("Dame el valor de los lados del triàngulo \n",lados);
  scanf("%d",&lados);
  control=lados;
  for(j=0;j<=lados;j++)
    {
      
      for (i=control;i>0;i--)
	{
	  printf("* ");
	  
  	}
      control--;
      printf("\n");    
    }
}
