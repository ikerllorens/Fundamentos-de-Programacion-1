//
//  Serie6a.c
//  
//
//  Created by Iker Llorens on 18/09/2012.
/*
 Este programa despliega un menú de funciones e imprime la función que
 eligió el usuario
*/

#include <stdio.h>

int eleccion;

int main(void)
{
    printf("\n¿Que función quieres que ejecute?"
           "\n1) Definir si un caracter es numérico."
           "\n2) Definir si un caracter es una vocal."
           "\n3) Definir si un número es par o impar."
           "\n4) Ordenar 4 números de forma ascendente."
           "\n5) Indicarte si eres un bebé, niño,"
           " adolescente, adulto o adulto mayor."
           "\n6) No ejecutar nada y salir.\n");
    scanf("%d", &eleccion);
    if (eleccion==1)
    {
        printf("\nElejiste que defina si un caracter es numérico\n");
    }
    if (eleccion==2)
    {
        printf("\nElejiste que defina si un caracter es una vocal\n");
    }
    if (eleccion==3)
    {
        printf("\nElejiste que defina si un número es par o impar\n");
    }
    if (eleccion==4)
    {
        printf("\nElejiste que ordene 4 números de forma ascendente\n");
    }
    if (eleccion==5)
    {
        printf("\nElejiste que te indique si eres un bebé, niño, adolescente,"
               " adulto o adulto mayor\n");
    }
    if (eleccion==6)
    {
        printf("\nElejiste que no ejecute nada y salga\n");
    }
    return 0;
}