//Creado por Iker Llorens Lara el 29/10/2012
//eje2.c
/*
Este programa determina que números del arreglo dado por el usuario son
mayores al promedio
Este programa determina el número mayor y el menor de un arreglo
Este programa determina que números del arreglo dado por el usuario son
mayores al promedio
*/

//Directivas al Preprocesador
#include <stdio.h>

//Prototipos de funciones
extern float SuperPromedio(float APromediar[]);
extern void AntiCaos(float Caos[], float *PuntMay, float *PuntMen);
extern int SeraMayor(float Llegada[], float MayoresQue[], float Media);

//Main
int main(void)
{
  float Arreglin[10];
  float Grandes[10];
  float Mean;
  float Mayor;
  float Menor;
  float *PuntMay;
  float *PuntMen;
  int Blah;
  int Cuantos;

#ifdef CREDITS//Impresión de créditos
  printf("\n\nPrograma creado por Iker Llorens, el día 29 de Octubre "
	 "de 2012 para el examen de programación, espero tener buena "
	 "calificación. :)\n\n");
#endif
  PuntMay=&Mayor;
  PuntMen=&Menor;
  printf("\nDame 10 números\n");
  for(Blah=0; Blah<10; Blah++)
    {
      scanf("%f", &Arreglin[Blah]);
    }
  Mean=SuperPromedio(Arreglin);
  printf("\nEl promedio es: %f", Mean);
  AntiCaos(Arreglin, &Mayor, &Menor);
  printf("\nEl número mayor es: %f", Mayor);
  printf(" y el menor es: %f\n", Menor);
  Cuantos=SeraMayor(Arreglin, Grandes, Mean);
  Cuantos=Cuantos-1;	
  printf("\nHay %d números que se encuentran arriba del promedio\n", Cuantos);
  printf("Dichos números son:");
  for(Blah=0; Blah<(Cuantos); Blah++)
    {
      printf("\n%f", Grandes[Blah]);
    }
  printf("\n");
  return 0;
}
