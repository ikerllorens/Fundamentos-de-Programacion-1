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

int main(void)
{
    int perimetro;
    int contadorv;
    int contadorh;
    char patron;
    printf("\nDame la base del cadrado\n");
    scanf("%d", &perimetro);
    getchar();
    printf("\n¿De que caracteres quieres el perímetro?\n");
    scanf("%c", &patron);
    getchar();
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
    return 0;
}