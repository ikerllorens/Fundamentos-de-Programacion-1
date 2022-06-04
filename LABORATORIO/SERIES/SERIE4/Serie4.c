//
//  Serie4.c
//  
//
//  Created by Iker Llorens on 12/11/2012.
/*
 Este programa genera valores de diferentes funciones: parábola, senoidal,
 una función sync, valores de un coseno y seno o un círculo
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void parabola(int liminf, int limsup, float inc);
void senoidal(int liminf, int limsup, float inc);
void sync(int liminf, int limsup, float inc);
void senoCoseno(int liminf, int limsup, float inc);
void circulo(int liminf, int limsup, float inc);

int main(void)
{
    int opc,liminf, limsup;
    float inc;
    
    /*
	printf("\n¿Que quieres que haga?"
           	"\n1) Una función cuadrática"
           	"\n2) Una función senoidal"
           	"\n3) Una función sync."
           	"\n4) Seno y Coseno"
           	"\n5) Un círculo\n");
	*/	
    if (scanf("%d",&opc)!= 1)
    {
        printf("Error al leer la opcion, debe ser entero\n");
        exit(2);
    }
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
    
    switch (opc)
    {
        case 1:
        {
            parabola(liminf,limsup, inc);
            break;
        }
        case 2:
        {
            senoidal(liminf,limsup, inc);
            break;
        }
        case 3:
        {
            sync(liminf,limsup, inc);
            break;
        }
        case 4:
        {
            senoCoseno(liminf,limsup, inc);
            break;
        }
        case 5:
        {
            circulo(liminf,limsup, inc);
            break;
        }
        default:
        {
            printf("No implementado\n");
            break;
        }
    }
    
    return 0;
}

void parabola(int liminf, int limsup, float inc)
{
    float x;
    float y;
    float A,B,C;
    
    if(scanf("%f", &A)!=1)
      {
	printf("Error al leer A!\n");
	exit(2);
      }
    if(scanf("%f", &B)!=1)
      {
	printf("Error al leer A!\n");
	exit(2);
      }
    if(scanf("%f", &C)!=1)
      {
	printf("Error al leer A!\n");
	exit(2);
      }
    for (x=liminf; x<=limsup; x=x+inc)
      {
        y = (A*pow(x,2))+(B*x)+C;
        printf(" %5.2f \t %5.2f \n",x,y);
      }
    return;
}

void senoidal(int liminf, int limsup, float inc)
{
    float x;
    float y;
    float amp;
    float fase;
    float frec;
    
    if (scanf("%f",&amp)!= 1)
    {
        printf("Error al leer la amplitud!\n");
        exit(2);
    }
    if (scanf("%f",&fase)!= 1)
    {
        printf("Error al leer la fase!\n");
        exit(2);
    }
    if (scanf("%f",&frec)!= 1)
    {
        printf("Error al leer la frecuencia!\n");
        exit(2);
    }
    
    for (x=liminf; x<=limsup; x=x+inc)
    {
        y = amp*sin(frec*(x+fase));
        printf(" %5.2f \t %5.2f \n",x,y);
    }
    return;
}

void sync(int liminf, int limsup, float inc)
{
    float x;
    float y;
    float amp;
    float fase;
    float frec;
    
    if (scanf("%f",&amp)!= 1)
    {
        printf("Error al leer la amplitud!\n");
        exit(2);
    }
    if (scanf("%f",&fase)!= 1)
    {
        printf("Error al leer la fase!\n");
        exit(2);
    }
    if (scanf("%f",&frec)!= 1)
    {
        printf("Error al leer la frecuencia!\n");
        exit(2);
    }
    
    for (x=liminf; x<=limsup; x=x+inc)
    {
        if(x==0)
        {
            printf(" %5.2f \t 1.00 \n",x);
            continue;
        }
        
        y = ((amp*sin(frec*(x+fase)))/(x));
        printf(" %5.2f \t %5.2f \n",x,y);
        
    }
    return;
}

void senoCoseno(int liminf, int limsup, float inc)
{
    float x;
    float y;
    float amp;
    float fase;
    float frec;
    
    if (scanf("%f",&amp)!= 1)
    {
        printf("Error al leer la amplitud!\n");
        exit(2);
    }
    if (scanf("%f",&fase)!= 1)
    {
        printf("Error al leer la fase!\n");
        exit(2);
    }
    if (scanf("%f",&frec)!= 1)
    {
        printf("Error al leer la frecuencia!\n");
        exit(2);
    }
    
    for (x=liminf; x<=limsup; x=x+inc)
    {
        y = amp*sin(frec*(x+fase));
        printf(" %5.2f %5.2f \n",x,y);
    }
    printf("\n");
    for (x=liminf; x<=limsup; x=x+inc)
    {
        y = amp*cos(frec*(x+fase));
        printf(" %5.2f %5.2f \n",x,y);
    }
    
    return;
}

void circulo(int liminf, int limsup, float inc)
{
    float x;
    float y;
    float r;
    
    if (scanf("%f",&r)!= 1)
    {
        printf("Error al leer el radio!\n");
        exit(2);
    }
    for (x=-r; x<=r; x=x+inc)
    {
        y = sqrt(-pow(x,2)+(pow(r,2)));
        printf(" %5.2f \t %5.2f \n",x,y);
    }
    printf("\n");
    for (x=-r; x<=r; x=x+inc)
    {
        y = -sqrt(-pow(x,2)+(pow(r,2)));
        printf(" %5.2f \t %5.2f \n",x,y);
    }
    return;
}
