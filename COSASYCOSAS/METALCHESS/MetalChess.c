//
//  MetalChess.c
//  
//
//  Created by Iker Llorens on 26/09/2012.
//  
//

#include <stdio.h>

int MasterOfPuppets; //Contador maestro
int ContadorAss;
int SlayerCounter;
int CuadroPeque;  //Tamaño de los cuadro pequeños
int MegaCuadro;  //Cuantos cuadros necesitas
int Horizontal;
int Linea;

int main(void)
{
    MasterOfPuppets=0;
    CuadroPeque=0;
    MegaCuadro=0;
    printf("Dame la base de cada cuadro");
    scanf("%d", &CuadroPeque);
    getchar();
    printf("Dime de cuantos cuadros quieres el tablero");
    scanf("%d", &MegaCuadro);
    getchar();
    while (MasterOfPuppets<MegaCuadro)
    {
        for (Horizontal=1; Horizontal<MegaCuadro; Horizontal++)
        {
            for (Linea=0; Linea<MegaCuadro; Linea++)
            {
            for (ContadorAss=0; ContadorAss<CuadroPeque; ContadorAss++)
            {
                printf("* ");
            }
            for (SlayerCounter=0; SlayerCounter<CuadroPeque; SlayerCounter++)
            {
                printf("- ");
            }
            }
            printf("\n");
        }
        MasterOfPuppets++;
        if (MasterOfPuppets>=MegaCuadro)
        {
            break;
        }
        else
        {
            for (Horizontal=1; Horizontal<MegaCuadro; Horizontal++)
            {
                for (Linea=0; Linea<MegaCuadro; Linea++)
                {
                for (SlayerCounter=0; SlayerCounter<CuadroPeque; SlayerCounter++)
                {
                    printf("- ");
                }
                for (ContadorAss=0; ContadorAss<CuadroPeque; ContadorAss++)
                {
                    printf("* ");
                }
                }
                printf("\n");
            }
            
        }
        MasterOfPuppets++;
    }
    return 0;
}