//
//  Tarea6.c
//  
//
//  Created by Iker Llorens on 13/10/2012.
/*
 Este programa tiene dos funciones de las cuales el usuario elije una despúes de
 haberle proporcionado una serie de números enteros. La computadora puede 
 sumar hasta cierta cantidad de números o puede ordenar cierta cantidad de 
 números definidos por el usuario de manera ascendente
*/

#include <stdio.h>
#define SIZE 100

//Limpiador
void ArrayCleaner(int ASucio[], int PasaTamano);

//Función 1
void SumadorLoco(int CosasASumar[], int HastaCuantos);

//Función 2
void AntiCaos(int Caos[], int CuantosSon);


int main(void)
{
    int elecc;
    int EntraArreglo[SIZE];
    int ContadorDeCaptura;
    int Terminator;
    
    
    ArrayCleaner(EntraArreglo, SIZE);
    printf("\nDame una serie de números, para terminar ingresa el número 0\n");
    for (ContadorDeCaptura=0; ContadorDeCaptura<SIZE; ContadorDeCaptura++)
    {
        printf("Dame el número que va a estar en la posición %d\n", ContadorDeCaptura);
        scanf("%d", &EntraArreglo[ContadorDeCaptura]);
        getchar();
        if (EntraArreglo[ContadorDeCaptura]==0)
        {
            break;
        }
    }
    printf("\n¿Que quieres que haga con éstos números?"
           "\n1)Sumar hasta cierto número de términos"
           "\n2)Ordenarlos de forma ascendente\n");
    scanf("%d", &elecc);
    switch (elecc)
    {
        case 1:
        {
            printf("¿Hasta que término quieres que sume?\n");
            scanf("%d", &Terminator);
            SumadorLoco(EntraArreglo, Terminator);
            break;
        }
        case 2:
        {
            printf("¿Hasta que término quieres que ordene?\n");
            scanf("%d", &Terminator);
            AntiCaos(EntraArreglo, Terminator);
            break;
        }
        default:
            break;
    }
    printf("\n");
    return 0;
}


//Limpiador
void ArrayCleaner(int ASucio[], int PasaTamano)
{
    int CleanerControl;
    for (CleanerControl=0; CleanerControl<=PasaTamano; CleanerControl++)
    {
        ASucio[CleanerControl]=0;
    }
    return;
}

//Función 1
void SumadorLoco(int CosasASumar[], int HastaCuantos)
{
    int SumCounter;
    int Sumota;
    
    Sumota=0;
    for (SumCounter=0; SumCounter<HastaCuantos; SumCounter++)
    {
        Sumota=Sumota+CosasASumar[SumCounter];
    }
    printf("\nLa suma de los números es: %d\n", Sumota);
    return;
}

//Función 2
void AntiCaos(int Caos[], int CuantosSon)
{
    int Temporal;
    int MasterOfPuppets;
    int DisposableHero;
    
    Temporal=0;
    for (DisposableHero=CuantosSon; DisposableHero>0; DisposableHero--)
    {
        for (MasterOfPuppets=1; MasterOfPuppets<=DisposableHero; MasterOfPuppets++)
        {
            if (Caos[(MasterOfPuppets-1)]>Caos[MasterOfPuppets])
            {
                Temporal=Caos[(MasterOfPuppets-1)];
                Caos[(MasterOfPuppets-1)]=Caos[MasterOfPuppets];
                Caos[MasterOfPuppets]=Temporal;
            }
        }
    }
    printf("\nTe doy los números ordenados de forma ascendente");
    for (DisposableHero=0; DisposableHero<=CuantosSon; DisposableHero++)
    {
        printf("\n%d" ,Caos[DisposableHero]);
    }
    return;
}
