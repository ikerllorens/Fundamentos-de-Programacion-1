//
//  Serie3a.c
//  Created by Iker Llorens on 15/09/2012.
//
/*
 Este programa le pide un número entero al usuario y le indica si es un número
 par o impar utilizando el operador "módulo"
*/

#include <stdio.h>

int num;

void DivisionNumero(int num);

int main(void)
{
    printf("\nDame un número entero y te diré si es par o impar\n");
    scanf("%d",&num);
    DivisionNumero(num);
    return 0;
}

void DivisionNumero(int num)
{
    int residuo;
    residuo=num%2;
    if (residuo==0)
    {
        printf("El número %d es un número par\n", num);
    }
    else
    {
        printf("El número %d es un número impar\n", num);
    }
}

