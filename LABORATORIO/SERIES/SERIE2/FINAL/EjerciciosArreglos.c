//
//  EjerciciosArreglos.c
//  
//
//  Created by Iker Llorens on 06/10/2012.
/*
 Este programa despliega un menú del cual el usuario elige una opción de las 
 siguientes:
 1)Clasificar caracteres numéricos
 2)Convertir un número decimal a binario
 3)Convertir un número binario a decimal
 4)Convertir una frase a mayúsculas
 5)Convertir una frase a mayúsculas y minúsculas de manera alternada (HoLa)
*/

#include <stdio.h>
#include <math.h>


//Funciones Generales
void ArrayCleaner(int ASucio[], int PasaTamano);
void ArrayCleanerCharacter(char ASucio[], int PasaTamano);

//Funcion Inciso 1
void SeraNumero(void);

//Funciones Inciso 2
void DecimalConverter(void);
void PrintBinary(int Llega2[]);

//Funciones Inciso 3
void BinaryConverter(void);
void Potenciador(int Llega3[], int CuantosBits);

//Funciones Inciso 4
void MakingAllMayus(void);
void Cambiador(char Llega4[]);

//Funciones Inciso 5
void Alternador(void);

int main(void)
{
    int elec;
    printf("\n¿Que quieres que haga?\n"
           "1)Clasificar caracteres numéricos\n"
           "2)Convertir un número decimal a binario\n"
           "3)Convertir un número binario a decimal\n"
           "4)Convertir una frase a mayúsculas\n"
           "5)Convertir una frase a mayúsculas y "
           "minúsculas de manera alternada (HoLa)\n");
    scanf("%d", &elec);
    switch (elec)
    {
        case 1:
        {
            SeraNumero();
            printf("\nElejiste que clasificara caracteres\n");
            break;
        }
        case 2:
        {
            printf("\nElejiste que convierta un número de base diez a binario\n");
            DecimalConverter();
            break;
        }
        case 3:
        {
            printf("\nElejiste que convierta un número binario a decimal\n");
            BinaryConverter();
            break;
        }
        case 4:
        {
            printf("\nElejiste que convierta una frase a mayúsculas\n");
            MakingAllMayus();
            break;
        }
        case 5:
        {
            printf("\nElejiste que alternara entre mayúsculas y minúsculas\n");
            Alternador();
            break;
        }
        default:
        {
            break;
        }
    }
    return 0;
}

//Funciones Generales
void ArrayCleaner(int ASucio[], int PasaTamano)
{
    int CleanerControl;
    for (CleanerControl=0; CleanerControl<=PasaTamano; CleanerControl++)
    {
        ASucio[CleanerControl]=0;
    }
    return;
}

void ArrayCleanerCharacter(char ASucio[], int PasaTamano)
{
    int CleanerControl;
    for (CleanerControl=0; CleanerControl<=PasaTamano; CleanerControl++)
    {
        ASucio[CleanerControl]=0;
    }
    return;
}

//Función Inciso 1
void SeraNumero(void)
{
    int MasaCaracteres[10];
    int ControlSera;
    char Dudoso;
    int tamano1;
    tamano1=10;
    ArrayCleaner(MasaCaracteres, tamano1);
    printf("\nDame una serie de caracteres y los clasificaré"
           " si son numéricos o no\n");
    while (1)
    {
        Dudoso=getchar();
        if (Dudoso=='.')
        {
            break;
        }
        if ((Dudoso>='0')&&(Dudoso<='9'))
        {
            MasaCaracteres[Dudoso-'0']=MasaCaracteres[Dudoso-'0']+1;
        }
        else
        {
            MasaCaracteres[10]=MasaCaracteres[10]+1;
        }
    }
    for (ControlSera=0; ControlSera<=9; ControlSera++)
    {
        printf("%d - ", ControlSera);
        printf("%d\n", MasaCaracteres[ControlSera]);
    }
    printf("Otros caracteres - ");
    printf("%d\n", MasaCaracteres[10]);
    return;
}

//Funciones Inciso 2
void DecimalConverter(void)
{
    int dividendo;
    int numero;
    int binario[16];
    int tamano2;
    int ControlDecimal;
    
    printf("\nDame un número entero y lo convertiré a binario\n");
    tamano2=16;
    ArrayCleaner(binario, tamano2);
    numero=0;
    dividendo=0;
    scanf("%d", &numero);
    getchar();
    dividendo=numero;
    if ((numero>=0)&&(numero<65536))
    {
        for (ControlDecimal=0; dividendo>0; ControlDecimal++)
        {
            binario[ControlDecimal]=(dividendo%2);
            dividendo=(dividendo/2);
        }
        PrintBinary(binario);
    }
    else
    {
        printf("\nEl número que me diste es muy grande o muy pequeño\n");
    }
    return;
}

void PrintBinary(int Llega2[])
{
    int BinPrintContr;
    
    for (BinPrintContr=15; BinPrintContr>=0; BinPrintContr--)
    {
        printf("%d ", Llega2[BinPrintContr]);
    }
    printf("\n");
    return;
}

//Funciones Inciso 3
void BinaryConverter(void)
{
    int ControlBinary;
    int tamano3;
    int ToDecimal[16];
    int NoBits;
    char bit;
    
    printf("\nDame un número binario y lo convertiré a decimal\n");
    tamano3=16;
    ControlBinary=0;
    ArrayCleaner(ToDecimal, tamano3);
    printf("\n¿De cuantos bits es tu número?\n");
    scanf("%d", &NoBits);
    getchar();
    printf("\nDame el número binario\n");
    for (ControlBinary=(NoBits-1); ControlBinary>=0; ControlBinary--)
    {
        bit=getchar();
        ToDecimal[ControlBinary]=(bit-'0');
        //printf("%d", ToDecimal[ControlBinary]);
    }
    Potenciador(ToDecimal, NoBits);
    return;
}

void Potenciador(int Llega3[], int CuantosBits)
{
    int Kontrol;
    int Sumatoria=0;
    int NuevoNumero=0;
    for (Kontrol=0; Kontrol<CuantosBits; Kontrol++)
    {
        NuevoNumero=Llega3[Kontrol]*pow(2, Kontrol);
        Sumatoria=Sumatoria+NuevoNumero;
        //printf("---> %d %d",NuevoNumero, Sumatoria);
    }
    printf("%d\n", Sumatoria);
}

//Funcionces Inciso 4
void MakingAllMayus(void)
{
    char BolaCarcteres[1000];
    int tamano4;
    int MayusControl;
    
    printf("\nDame una serie de caracteres y la pondré en mayúsculas");
    printf("\nRecuerda terminar con un . la serie\n");
    tamano4=1000;
    ArrayCleanerCharacter(BolaCarcteres, tamano4);
    for (MayusControl=0; MayusControl<tamano4; MayusControl++)
    {
        BolaCarcteres[MayusControl]=getchar();
        if (BolaCarcteres[MayusControl]=='.')
        {
            break;
        }
    }
    Cambiador(BolaCarcteres);
    return;
}

void Cambiador(char Llega4[])
{
    int TVKontrol;
    int MicroControl;
    
    MicroControl=0;
    for (TVKontrol=0; TVKontrol<1000; TVKontrol++)
    {
        if (Llega4[TVKontrol]=='.')
        {
            break;
        }
        if ((Llega4[TVKontrol]>=97)&&(Llega4[TVKontrol]<=122))
        {
            Llega4[TVKontrol]=(Llega4[TVKontrol]-32);
        }
        else
        {
            Llega4[TVKontrol]=Llega4[TVKontrol];
        }
        MicroControl++;
    }
    for (TVKontrol=0; TVKontrol<=MicroControl; TVKontrol++)
    {
        printf("%c", Llega4[TVKontrol]);
    }
    printf("\n");
}

//Función Inciso 5
void Alternador(void)
{
    char palabra[100];
    int AltCounter;
    int CosaParaDividir=0;
    int CualEsCual=0;
    int ContadorPublico=0;
    int tamano5;
    
     printf("\nDame una serie de caracteres y alternaré los caracteres");
    printf("\nRecuerda terminar con un . la serie\n");     
    for(AltCounter=0;AltCounter<100;AltCounter++)
    {
        palabra[AltCounter]=getchar();
        if (palabra[AltCounter]=='.')
        {
            break;
        }
        ContadorPublico++;
    }
    
    for(AltCounter=0;AltCounter<ContadorPublico;AltCounter++)
    {
        
        CosaParaDividir++;
        CualEsCual=(CosaParaDividir%2);
        
        if(CualEsCual==0)
        {
            putchar(palabra[AltCounter]);
            continue;
        } 
        
        if((palabra[AltCounter]>='a') && (palabra[AltCounter]<='z'))
        {
            palabra[AltCounter]=palabra[AltCounter]-32;
            putchar(palabra[AltCounter]);
        }
        else
        {
            putchar(palabra[AltCounter]);
        }
        
    }
    putchar('\n');
    return;
}


//Be Happy!!!!