//
//  RepeticionNumeros.c
//  
//
//  Created by Iker Llorens on 14/10/2012.
/*
 Este programa recibe un número entero dado por el usuario y lo analiza e indica
 que dígitos contiene
*/

#include <stdio.h>
#include <math.h>

int Longitud(int num);
int Repeticiones(int num, int i, int size);
void Imprime(int i, int veces, int numero);

int main(void)
{
    int CosaAnalizar;
    int MacroCounter;
    int Grandeza;
    int SonMuchos;
    
    printf("\nDame el número a analizar:\n");
    scanf("%d", &CosaAnalizar);
    getchar();
    Grandeza=Longitud(CosaAnalizar);
    for (MacroCounter=0; MacroCounter<10; MacroCounter++)
    {
        SonMuchos=Repeticiones(CosaAnalizar, MacroCounter, Grandeza);
        Imprime(MacroCounter, SonMuchos, CosaAnalizar);
    }
    return 0;
}

int Longitud(int num)
{
    int CuantasCosas;
    int EstaVivo;
    
    CuantasCosas=1;
    EstaVivo=num;
    while (1)
    {
        EstaVivo=(EstaVivo/10);
        if (EstaVivo==0)
        {
            break;
        }
        else
        {
            CuantasCosas++;
        }
    }
    printf("\nEl número %d ", num);
    printf("tiene %d dígitos\n", CuantasCosas);
    return CuantasCosas;
}

int Repeticiones(int num, int i, int size)
{
    int Repeticiones;
    int Contadorsito;
    int DisposableHero;
    float Numerote;
    
    Repeticiones=0;
    Numerote=num;
    Numerote=(Numerote/(pow(10, size)));
    for (Contadorsito=0; Contadorsito<size; Contadorsito++)
    {
        Numerote=Numerote*10;
        if ((Numerote>=i)&&(Numerote<(i+1)))
        {
            Repeticiones++;
        }
        //printf("Numerote es %f\n", Numerote);
        DisposableHero=Numerote;
        Numerote=(Numerote-DisposableHero);
        //printf("Disposable es %d", DisposableHero);
    }
    return Repeticiones;
}

void Imprime(int i, int veces, int numero)
{
    printf("El dígito %d ", i);
    printf("se repite %d veces ", veces);
    printf("en %d\n", numero);
    return;
}