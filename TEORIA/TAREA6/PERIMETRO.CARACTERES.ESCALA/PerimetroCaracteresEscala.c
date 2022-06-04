//
//  PerimetroCaracteres.c
//  
//
//  Created by Iker Llorens on 29/09/2012.
/*
 Este programa imprime un caudrado hueco y el perímetro está compuesto de
 caracteres definidos por el usuario
*/

#include <stdio.h>

void ImpresionCuadrado(int perimetro, char patron);

int main(void)
{
    int perimetro;
    float NumeroDado;
    float escala;
    char patron;
    printf("\nDame la base del cadrado\n");
    scanf("%f", &NumeroDado);
    getchar();
    printf("\n¿De que caracteres quieres el perímetro?\n");
    scanf("%c", &patron);
    getchar();
    if (NumeroDado<24)
    {
        perimetro=NumeroDado;
        ImpresionCuadrado(perimetro, patron);
    }
    else
    {
        perimetro=NumeroDado*(24/NumeroDado);
        ImpresionCuadrado(perimetro, patron);
        escala=NumeroDado/24;
        printf("Tu cuadrado tiene una escala de 1:%f\n", escala);
    }
    return 0;
}

void ImpresionCuadrado(int perimetro, char patron)
{
    int contadorv;
    int contadorh;
    for (contadorh=0; contadorh<perimetro; contadorh++)
    {
        printf("%c ", patron);
    }
    printf("\n");
    for (contadorv=2; contadorv<perimetro; contadorv++)
    {
        printf("%c ", patron);
        for (contadorh=2; contadorh<perimetro; contadorh++)
        {
            printf("  ");
        }
        printf("%c ", patron);
        printf("\n");
    }
    for (contadorh=0; contadorh<perimetro; contadorh++)
    {
        printf("%c ", patron);
    }
    printf("\n");
    return;
}