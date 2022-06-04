//
//  Inciso1.c
//  
//
//  Created by Iker Llorens on 10/10/2012.
/*
 Este programa genera 20 números aleatorios y se los despliega al usuario,
 el usuario puede teclear un número y el programa verificará si el número 
 tecleado se encuentra en el arreglo generado
*/

#include <stdio.h>

//Funciones del Inciso
int rand10(void);
int buscaNum(int Arr[], int valorABuscar, int sizeArreglo);

//Limpiador
void ArrayCleaner(int ASucio[], int PasaTamano);

int main(void)
{
    int NumeroX;
    int Contadorsito;
    int Arreglito[20];
    int Tamano;
    int posicion;
    
    Tamano=20;
    ArrayCleaner(Arreglito, Tamano);
    for (Contadorsito=0; Contadorsito<20; Contadorsito++)
    {
        Arreglito[Contadorsito]=rand10();
        printf("%d.- ", Contadorsito);
        printf("%d\n", Arreglito[Contadorsito]);
        
    }
    printf("\n¿Cual es el número que quieres buscar?\n");
    scanf("%d", &NumeroX);
    posicion=buscaNum(Arreglito, NumeroX, Tamano);
    if (posicion==-1)
    {
        printf("El número que me diste no está en el arreglo\n");
    }
    else
    {
        printf("El número está en la posicón %d\n", posicion);
    }
        return 0;
}

//Funcion Rand
int rand10(void)
{ 	static int firstcall=1;
	if (firstcall)
	{
		srand((unsigned int)time(NULL));
		firstcall = 0;
	}
	return ( rand()%1000 +1);
}

//Función BuscaNum
int buscaNum(int Arr[], int valorABuscar, int sizeArreglo)
{
    int ContadorPeque;
    int resultado;
    
    resultado=-1;
    for (ContadorPeque=0; ContadorPeque<sizeArreglo; ContadorPeque++)
    {
        if (Arr[ContadorPeque]==valorABuscar)
        {
            resultado=ContadorPeque;
            break;
        }
    }
    return resultado;
}

//Limpiador
void ArrayCleaner(int ASucio[], int PasaTamano)
{
    int CleanerControl;
    for (CleanerControl=0; CleanerControl<=PasaTamano; CleanerControl++)
    {
        ASucio[CleanerControl]=0;
    }
    return;
}
