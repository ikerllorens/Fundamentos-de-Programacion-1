//
//  Potencia2.c
//  
//
//  Created by Iker Llorens on 14/10/2012.
/*
 Este programa saca el calor exponencial de un número dado por el usuario
*/

#include <stdio.h>
#include <math.h>

void Exponencial(int numero);
int GeneradorFactorial(int HastaCuantos);
int Potenciador(int Elevador, int numerin);

int main(void)
{
    int envio;
    
    printf("\n¿Que valor exponencial quieres?\n");
    scanf("%d", &envio);
    Exponencial(envio);
    return 0;
}

void Exponencial(int numero)
{
    float CosaFactorial;
    float Potencia;
    float SumaEspanto;
    float Division;
    int Contador;
    
    SumaEspanto=0;
    for (Contador=0; Contador<=numero; Contador++)
    {
        CosaFactorial=GeneradorFactorial(Contador);
        printf("%f\n", CosaFactorial);
        Potencia=Potenciador(Contador, numero);
        printf("%f\n", Potencia);
        Division=(Potencia/CosaFactorial);
        printf("%f\n", Division);
        SumaEspanto=(SumaEspanto+Division);
        printf("%f\n\n", SumaEspanto);
    }
    printf("\nEl valor exponencial de %d ", numero);
    printf("es %f\n", SumaEspanto);
    return;
}

int GeneradorFactorial(int HastaCuantos)
{
    int Factorial;
    int CuantosVan;
    
    Factorial=1;
    for (CuantosVan=1; CuantosVan<=HastaCuantos; CuantosVan++)
    {
        Factorial=(Factorial*CuantosVan);
    }
    return Factorial;
}

int Potenciador(int Elevador, int numerin)
{
    int Resultado;
    
    Resultado=pow(numerin, Elevador);
    return Resultado;
}