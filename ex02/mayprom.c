//Creado por Iker Llorens Lara el 29/10/2012
//mayprom.c
/*
Este programa determina que números del arreglo dado por el usuario son
mayores al promedio, esta funcion es llamada desde eje2.c
*/

//Definición de Funciones
//Mayor que promedio

extern int SeraMayor(float Llegada[], float MayoresQue[], float Media)
{
  int Maestro;
  int Timex;

  Maestro=0;
  for(Timex=0; Timex<10; Timex++)
    {
      if(Llegada[Timex]>Media)
	{
	  MayoresQue[Maestro]=Llegada[Timex];
	  Maestro++;
	}
    }
  Maestro=Maestro+1;
  return Maestro;
}
