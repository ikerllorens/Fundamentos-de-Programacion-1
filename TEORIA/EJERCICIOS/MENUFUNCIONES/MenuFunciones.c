//
//  MenuFunciones.c
//  
//
//  Created by Iker Llorens on 22/09/2012.
/*
 Este programa despliega un menú de funciones. EL usuario elije entre obtener el
 cuadrado de un número entero, encontrar el factorial o la serie fibonacci. Este 
 programa también tiene la capacidad de ejecutar esas funciones.
*/

#include <stdio.h>

int numero;
int eleccion;

void CuadradoNumero(int numero);
void FactorialNumero(int numero);
void FibonacciNumero(int numero);

int main(void)
{
    printf("\nDame un número entero\n");
    scanf("%d", &numero);
    getchar();
    printf("\n¿Que quieres que haga con este número?"
           "\n1)Elevarlo al cuadrado"
           "\n2)Encontrar el factorial"
           "\n3)Mostrar la serie Fibonacci\n");
    scanf("%d", &eleccion);
    getchar();
    if (eleccion==1)
    {
        CuadradoNumero(numero);
    }
    if (eleccion==2)
    {
        FactorialNumero(numero);
    }
    if (eleccion==3)
    {
        FibonacciNumero(numero);
    }
    return 0;
}

void CuadradoNumero(int numero)
{
    int cuadrado;
    cuadrado=(numero*numero);
    printf("\nEl cuadrado del número %d ", numero);
    printf("es %d\n", cuadrado);
}

void FactorialNumero(int numero)
{
    int factorial;
    int contador;
    factorial=1;
    for (contador=1; contador<=numero; contador++)
    {
        factorial=(factorial*contador);
    }
    printf("\nEl factorial del número %d ", numero);
    printf("es %d\n", factorial);
}

void FibonacciNumero(int numero)
{
    int primero;
    int segundo;
    int siguiente;
    int contador;
    primero=0;
    segundo=1;
    siguiente=0;
    printf("\nLa serie Fibonacci hasta el número %d es\n", numero);
    if (numero<=1)
    {
        printf("%d\n", siguiente);
    }
    else
    {
        printf("%d\n", primero);
        printf("%d\n", segundo);
        for (contador=1; numero>contador; contador++)
        {
            siguiente=(primero+segundo);
            primero=segundo;
            segundo=siguiente;
            printf("%d\n", siguiente);
        }
    }
}