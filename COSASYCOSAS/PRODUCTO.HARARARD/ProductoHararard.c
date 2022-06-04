//
//  ProductoHararard.c
//  
//
//  Created by on 15/11/2012.
//
//

#include <stdio.h>
#include <stdlib.h>

void Inicializa(int Sucio[][13]);
void Lector(int matriz1[][13]);
void Multiplica(int matriz1[][13], int matriz2[][13], int resultados[][13]);

int main(void)
{
    int matriz1[13][13];
    int matriz2[13][13];
    int resultados[13][13];
    int counter;
    int master;
    
    Inicializa(matriz1);
    Inicializa(matriz2);
    Inicializa(resultados);
    Lector(matriz1);
    Lector(matriz2);
    Multiplica(matriz1, matriz2, resultados);
    for (master=0; master<13; master++)
    {
        for (counter=0; counter<13; counter++)
        {
            printf("%d\t|", resultados[master][counter]);
        }
        putchar('\n');
    }
    return 0;
}

void Inicializa(int Sucio[][13])
{
    int contador;
    int maestro;
    int temporal;
    
    for (maestro=0; maestro<13; maestro++)
    {
        for (contador=0; contador<13; contador++)
        {
            Sucio[maestro][contador]=0;
        }
    }
    return;
}

void Lector(int matriz1[][13])
{
    int contador;
    int maestro;
    int temporal;
    
    for (maestro=0; maestro<13; maestro++)
    {
        for (contador=0; contador<13; contador++)
        {
            printf("Dame el número en la posición [%d] [%d]", maestro, contador);
            scanf("%d", &temporal);
            matriz1[maestro][contador]=temporal;
        }
    }
    return;
}
void Multiplica(int matriz1[][13], int matriz2[][13], int resultados[][13])
{
    int contador;
    int maestro;
    int temporal;
    
    for (maestro=0; maestro<13; maestro++)
    {
        for (contador=0; contador<13; contador++)
        {
            resultados[maestro][contador]=(matriz1[maestro][contador]*matriz2[maestro][contador]);
        }
    }
    return;
}