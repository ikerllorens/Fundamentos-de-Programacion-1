//
//  PiramideAsteriscos.c
//  
//
//  Created by Iker Llorens on 14/10/2012.
/*
 Este programa genera una pirámide de una n altura que define el usuario
*/

#include <stdio.h>

void Piramide(int SkyLevel);

int main(void)
{
    int altura;
    
    printf("\n¿Cual es la altura de tu pirámide?\n");
    scanf("%d", &altura);
    Piramide(altura);
    return 0;
}

void Piramide(int SkyLevel)
{
    int Unforgiven;
    int DreamCounter;
    int MissionControl;
    int SpaceControl;
    int NotSoImportant;
    
    SpaceControl=SkyLevel;
    for (DreamCounter=0; DreamCounter<SkyLevel; DreamCounter++)
    {
        for (NotSoImportant=0; NotSoImportant<SpaceControl; NotSoImportant++)
        {
            printf("  ");
        }
        for (Unforgiven=0; Unforgiven<=(MissionControl*2); Unforgiven++)
        {
            printf("* ");
        }
        printf("\n");
        MissionControl++;
        SpaceControl--;
    }
    return;
}