//
//  Histogramador.c
//  
//
//  Created by Iker Llorens on 16/10/2012.
/*
 Este programa genera 10 numeros aleratorios del uno al diez y genera un 
 histograma dependiendo de que números se generaron
*/

#include <stdio.h>

int rand10(void);
void Histogramador(void);
void ArrayCleaner(int ASucio[], int PasaTamano);

int main(void)
{
    Histogramador();
    return 0;
}

void ArrayCleaner(int ASucio[], int PasaTamano)
{
    int CleanerControl;
    for (CleanerControl=0; CleanerControl<=PasaTamano; CleanerControl++)
    {
        ASucio[CleanerControl]=0;
    }
    return;
}

void Histogramador(void)
{
    int ArregloFeo[10];
    int Llenador;
    int DisposableHero;

   ArrayCleaner(ArregloFeo, 10);
    for(Llenador=0; Llenador<10; Llenador++)
    {
        ArregloFeo[Llenador]=rand10();
        printf("%d\n", ArregloFeo[Llenador]);
    }
    for(Llenador=0; Llenador<10; Llenador++)
    {
        printf("%d| ", (Llenador+1));
        for(DisposableHero=0; DisposableHero<ArregloFeo[Llenador]; DisposableHero++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int rand10(void)
{ static int firstcall=1;
    if (firstcall)
    {
        srand((unsigned int)time(NULL));
        firstcall = 0;
    }
    return ( rand()%10 +1);
}