//
//  Algoritmo Serie1b.c
//  
//
//  Created by Iker Llorens on 13/09/2012.
/*
 Este programa indica si el caracter ingresado por el usuario es
 un caracter númerico o no
*/

#include <stdio.h>

char LeerCaracter(void);
int EsNumero(char caracter);
void ImprimeMensaje(char caracter, int val);

int main(void)
{
    int val;
    char caracter;
    caracter=LeerCaracter();
    val=EsNumero(caracter);
    ImprimeMensaje(caracter, val);
    return 0;
    
}

char LeerCaracter(void)
{
    char car;
    printf("\nDame un caracter y te diré si es numérico\n");
    scanf("%c",&car);
    return car;
    
}

int EsNumero(char caracter)
{
    int prueba;
    if ((caracter=='0')||(caracter=='1')||(caracter=='2')||(caracter=='3')||
        (caracter=='4')||(caracter=='5')||(caracter=='6')||(caracter=='7')||
        (caracter=='8')||(caracter=='9'))
    {
        prueba=1;
    }
    else
    {
        prueba=0;
    }
    return prueba;
}

void ImprimeMensaje(char caracter, int val)
{
    if (val==0)
    {
        printf("\nEl caracter %c no es un caracter numérico\n", caracter);
        
    }
    else
    {
        printf("\nEl caracter %c es un caracter numérico\n", caracter);
    }
}

