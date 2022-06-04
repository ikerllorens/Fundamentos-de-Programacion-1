//
//  Serie5a.c
//  
//
//  Created by Iker Llorens on 18/09/2012.
/*
 Este programa le indica al usuario después de que éste ingrese su edad si es un bebé, niño, adolscente, adulto o adulto mayor
*/

#include <stdio.h>

int edad;

int main(void)
{
    printf("\nDame tu edad\n");
    scanf("%d", &edad);
    if (edad<=2)
    {
        printf("\nEres un bebé\n");
    }
    if ((edad>2)&&(edad<=12))
    {
        printf("\nEres un niño\n");
    }
    if ((edad>12)&&(edad<=20))
    {
        printf("\nEres un adolescente\n");
    }
    if ((edad>20)&&(edad<=65))
    {
        printf("\nEres un adulto\n");
    }
    if (edad>65)
    {
        printf("\nEres un adulto mayor\n");
    }
    return 0;
}