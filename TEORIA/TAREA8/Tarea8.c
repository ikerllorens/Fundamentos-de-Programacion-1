//
//  Tarea8.c
//  
//
//  Created by Iker Llorens on 20/10/2012.
/*
 Este programa captura una frase o serie de caracteres tecleados por el usuario
 y utilizando arreglos averigua si es un palíndromo o no.
*/

#include <stdio.h>
#define LONG 200

int EsPalindromo(char FullArray[], int DesdeDonde);
void ArrayCleanerCharacter(char ASucio[], int PasaTamano);

int main(void)
{
    char Cosa[LONG];
    char TempChar;
    int Comprobacion;
    int DisposableHero;
    
    ArrayCleanerCharacter(Cosa , LONG);
    printf("\nDame una frase para analizar si es palíndromo\n");
    DisposableHero=0;
    while ((TempChar=getchar())!='.')
    {
        Cosa[DisposableHero]=TempChar;
        DisposableHero++;
    }
    Cosa[DisposableHero]='\0';
    DisposableHero=DisposableHero-1;
    Comprobacion=EsPalindromo(Cosa, DisposableHero);
    if (Comprobacion==1)    
    {
        printf("\nLa frase que me diste es palíndromo\n");
    }
    else
    {
        printf("\n La frase que me diste no es palíndromo\n");
    }
    return 0;
}

void ArrayCleanerCharacter(char ASucio[], int PasaTamano)
{
    int CleanerControl;
    for (CleanerControl=0; CleanerControl<PasaTamano; CleanerControl++)
    {
        ASucio[CleanerControl]='\0';
    }
    return;
}

int EsPalindromo(char FullArray[], int DesdeDonde)
{
    char Volteado[LONG];
    int ContaduriaPublica;
    int Augmentin;
    int Comprueba,i;
  	
    Comprueba=1;
    Augmentin=DesdeDonde;
    for (ContaduriaPublica=0; ContaduriaPublica<=DesdeDonde; ContaduriaPublica++)
    {
        Volteado[ContaduriaPublica]=FullArray[Augmentin];
        Augmentin--;
        //printf("%c", Volteado[ContaduriaPublica]);
    }
    ContaduriaPublica=0;//ESAquí
    Augmentin=Augmentin-1;
    for (i=0; i>=0; i--)
    {
        //printf("%d", Comprueba);
        if (Volteado[ContaduriaPublica]==FullArray[i])
        {
            Comprueba=(Comprueba*1);
        }
        else
        {
            Comprueba=(Comprueba*0);
        }
        ContaduriaPublica++;
    }
    return Comprueba;
}
