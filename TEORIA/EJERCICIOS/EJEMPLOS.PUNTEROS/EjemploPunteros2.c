//
//  EjemploPunteros.c
//  
//
//  Created by Iker Llorens on 08/10/2012.
//
//

#include <stdio.h>

int main(void)
{
    int datoNumero = 23, otroDato;
    int *punt, *v;
    
    punt=&datoNumero;
    otroDato=*punt;
    printf("datoNumero = %d en la dirección = %p\n", datoNumero, &datoNumero);
    printf("punt es la dirección = %p\n", punt);
    v = NULL;
    printf("Contenido de v = %d en la dirección = %p\n", *v, v);
    return 0;
}