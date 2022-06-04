//
//  TablaCuadradoCubo.c
//  
//
//  Created by Iker Llorens on 21/09/2012.
/*
 Este programa calcula el cuadrado y cubo de una serie de números desde el cero
 hasta que el número ingresado por el usuario.
*/

#include <stdio.h>

int CalculaPotencia(int contador, int potencia);
void ImprimeTabla(int contador, int cuadrado, int cubo);

int numero;
int contador;
int cuadrado;
int cubo;
int potencia;

int main(void)
{
    contador=0;
    printf("\nDame un número entero\n");
    scanf("%d", &numero);
    getchar();
    printf("\nNúmero  |Cuadrado |Cubo");
    while (contador<=numero)
    {
        potencia=2;
        cuadrado=CalculaPotencia(contador, potencia);
        potencia=3;
        cubo=CalculaPotencia(contador, potencia);
        ImprimeTabla(contador, cuadrado, cubo);
        contador++;
    }
    printf("\n");
    return 0;
}

int CalculaPotencia(int contador, int potencia)
{
    int resultado;
    if (potencia==2)
    {
        resultado=(contador*contador);
    }
    if (potencia==3)
    {
        resultado=(contador*contador*contador);
    }
    return resultado;
}

void ImprimeTabla(int contador, int cuadrado, int cubo)
{
    printf("\n%d\t|", contador);
    printf("%d\t", cuadrado);
    printf("  |%d", cubo);
}