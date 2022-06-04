//Creado por Iker Llorens Lara el 29/10/2012
//prom.c
/*
Este programa calcula un promedio y es llamada desde el programa eje2.c
*/


//Definición de Funciones
//Promedio
extern float SuperPromedio(float APromediar[])
{
  float Promedio;
  float Suma;
  int PromCounter;

  Promedio=0;
  Suma=0;
  for(PromCounter=0; PromCounter<10; PromCounter++)
    {
      Suma=Suma+APromediar[PromCounter];
    }
  Promedio=(Suma/10);
  return Promedio;
}
