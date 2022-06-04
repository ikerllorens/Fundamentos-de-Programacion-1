//
//  CuadradoAsteriscos.c
//  
//
//  Created by Iker Llorens on 22/09/2012.
/*
 Este programa imprime un cuadrado de asteriscos con una base definida
 por el usuario utilizando ciclos.
*/

#include <stdio.h>

int numero;
int contadorh;
int contadorv;

int main(void)
{
    printf("\nDame un número entero\n");
    scanf("%d", &numero);
    getchar();
    for (contadorv=0; contadorv<numero; contadorv++)
    {
        for (contadorh=0; contadorh<numero; contadorh++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


