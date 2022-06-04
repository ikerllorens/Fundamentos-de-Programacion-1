#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//redireccionar a un archivo cat datos | ./a.out > parabola.dat


void parabola(int liminf, int limsup, float inc);
void senoidal(int liminf, int limsup, float inc);

int main(void)
{
  int opc,liminf, limsup;
  float inc;


  if (scanf("%d",&opc)!= 1)
    {
      printf("Error al leer la opcion, debe ser entero\n");
      exit(2);
    }
 
  switch (opc)
   {
     case 1:
       if (scanf("%d",&liminf)!= 1)
       {
	 printf("Error al leer el limite inferior, debe ser entero\n");
	 exit(2);
       }
       if (scanf("%d",&limsup)!= 1)
       {
	 printf("Error al leer el limite superior, debe ser entero\n");
	 exit(3);
       }
       if (scanf("%f",&inc)!= 1)
       {
	 printf("Error al leer el incremento, debe ser flotante\n");
	 exit(3);
       }
       parabola(liminf,limsup, inc);
       break;
   case 2:
     {
       if (scanf("%d",&liminf)!= 1)
	 {
	   printf("Error al leer el limite inferior, debe ser entero\n");
	   exit(2);
	 }
       if (scanf("%d",&limsup)!= 1)
	 {
	   printf("Error al leer el limite superior, debe ser entero\n");
	   exit(3);
	 }
       if (scanf("%f",&inc)!= 1)
	 {
	   printf("Error al leer el incremento, debe ser flotante\n");
	   exit(3);
	 }
       senoidal(liminf, limsup, inc);
     }
     default:
     printf("no implementado\n");
     break;
   }
}

void parabola(int liminf, int limsup, float inc)
{
  float x;
  float y;

  for (x=liminf; x<=limsup; x=x+inc)
    {
      y = pow(x,2);
      printf(" %5.2f \t %5.2f \n",x,y);
    }


}

void senoidal(int liminf, int limsup, float inc)
{
  float x;
  float y;
  float Amp;
  float fase;

  scanf("%f", &Amp);
  scanf("%f", &fase);
  for (x=liminf; x<=limsup; x=x+inc)
    {
      y=Amp*sin(x+fase);
      printf(" %5.2f \t %5.2f \n",x,y);
    }
}
//http://www.duke.edu/~hpgavin/gnuplot.html

