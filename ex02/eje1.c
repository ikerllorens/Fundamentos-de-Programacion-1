//Creado por Iker Llorens Lara el 29/10/2012
//eje1.c
/*
Este programa calcula el número de pi utilizando iteraciones
usando la fórmula de Leibniz
*/

//Directivas al Preprocesador
#include <stdio.h>

//Prototipos de funciones
float PiMaker(void);
float SuperPiMaker(void);

//Función Main
int main(void)
{
  float PiResult;
  int eleccion;

  printf("\nQue método quieres?"
	 "\n1)Por 50,000 iteraciones"
	 "\n2)Hasta que el error sea menor a .0001\n");
  scanf("%d", &eleccion);
  getchar();
  switch(eleccion)
    {
    case 1:
      {
	PiResult=PiMaker();
	break;
      }
    case 2:
      {
	PiResult=SuperPiMaker();
	break;
      }
    default:
      {
	break;
      }
    }
  printf("\nEl valor de pi es %f\n", PiResult);
  return 0;	
}

//Funciones
//Generador de Pi
float PiMaker(void)
{
  float Pi;
  float Divisor;
  int Counter;

  Pi=0;
  Divisor=1;
  Counter=0;
  for(Counter=0; Counter<50000; Counter++)
    {
      if((Counter%2)==0)
	{
	  //printf("%f", Divisor);
	  Pi=Pi+(4/Divisor);
	}
      else
	{
	  Divisor=(Divisor*(-1));
	  //printf("%f", Divisor);
	  Pi=Pi+(4/Divisor);
	  Divisor=(Divisor*(-1));
	}
      //printf("\n%f", Pi);
      Divisor=Divisor+2;

    }
  return Pi;
}

float SuperPiMaker(void)
{
  float Pi;
  float Divisor;
  float Error;
  float Anterior;
  int Counter;

  Pi=0;
  Counter=0;
  Divisor=1;
  Error=4;
  Anterior=2;
  while(1)
    {
      if(Counter!=0)
	{
	  Anterior=Pi;
	}
      if(Error<.0001)
	{
	  break;
	}
      if((Counter%2)==0)
	{
	  //printf("%f", Divisor);
	  Pi=Pi+(4/Divisor);
	  Error=(Pi-Anterior);
	}
      else
	{
	  Divisor=(Divisor*(-1));
	  //printf("%f", Divisor);
	  Pi=Pi+(4/Divisor);
	  Divisor=(Divisor*(-1));
	}
      Divisor=Divisor+2;
      Counter++;
      //printf("\n%f", Error);
    }
  return Pi;
}

