//
//  DemasiadasCosas.c
//  
//
//  Created by Iker Llorens on 26/09/2012.
/*
 Este programa tiene muchas funciones. Muchas de éstas usan las funciones "getchar" y "putchar"
 excepto en las funciones donde no aplican o no se pueden aplicar.
 Las funciones de este programa son:
 1) Convertir una letra de Minúscula a Mayúscula
 2) Convertir una letra de Mayúscula a Minúscula
 3) Alternar una serie de caracteres entre Mayúscula y Minúsculas
 4) Cambiar la primera letra de cada palabra a Mayúscula
 5) Sumar los valores ANSII de una serie de caracteres numéricos
 6) Ordenar 4 números enteros de forma ascendente
 7) Crear un tablero de ajedrez
*/

#include <stdio.h>

//Función de Minúsculas a Mayúsculas
void MinusMayus(void);

//Función de Mayúsculas a Minúsculas
void MayusMinus(void);

//Función para alternar entre mayúsculas y minúsculas
void FrenzyMayusMinus(void);

//Función para convertir la primera letra de cada palabra
void Formalizador(void);

//Función para sumar caracteres numéricos
void ElSumador(void);

//Funciones Ordenar Números
int ObtenerPrimero(int num1, int num2, int num3, int num4);
int ObtenerCuarto(int num1, int num2, int num3, int num4);
int ObtenerSegundo(int num1, int num2, int num3, int num4, int lista1, int lista4);
int ObtenerTercero(int num1, int num2, int num3, int num4, int lista1, int lista4);
void ImprimirOrdenados(int lista1, int lista2, int lista3, int lista4);

//Funciones de Ajedrez
void MetalChess(void);

int main(void)
{
    //Variable Switch
    int opc;
    
    //Variables Ordenar Números
    int num1;
    int num2;
    int num3;
    int num4;
    
    int lista1;
    int lista2;
    int lista3;
    int lista4;
    
    //Programa
    printf("\n¿Que quieres que haga?, elije un número"
           "\n1) Convertir una letra de Minúscula a Mayúscula"
           "\n2) Convertir una letra de Mayúscula a Minúscula"
           "\n3) Alternar una serie de caracteres entre Mayúscula y Minúsculas"
           "\n4) Cambiar la primera letra de cada palabra a Mayúscula"
           "\n5) Sumar los valores ANSII de una serie de caracteres numéricos"
           "\n6) Ordenar 4 números enteros de forma ascendente"
           "\n7) Crear un tablero de ajedrez\n");
    scanf("%d", &opc);
    getchar();
    switch (opc)
    {
        case 1:
        {
            printf("\nElejiste que convierta una letra minúscula a mayúscula\n");
            MinusMayus();
            break;
        }
        
        case 2:
        {
            printf("\nElejiste que convierta una letra mayúscula a minúscula\n");
            MayusMinus();
            break;
        }
            
        case 3:
        {
            printf("\nElejiste que alternara una serie de caracteres\n");
            printf("Recuerda de terminar la serie de caracteres con . \n");
            FrenzyMayusMinus();
            break;
        }
            
        case 4:
        {
            printf("\nElejsite que cambiara la primera letra de cada palabra a "
                   "mayúscula\n");
            printf("Recuerda de terminar la serie de caracteres con . \n");
            Formalizador();
            break;
        }
            
        case 5:
        {
            printf("\nElejiste que cambie caracteres numéricos y sume su valor ASCII\n");
            printf("Recuerda de terminar la serie de caracteres con . \n");
            printf("También ten en cuenta que sólo sumo los caracteres numéricos\n");
            ElSumador();
            break;
        }
        
        case 6:
        {
            printf("\nElejiste que ordenara cuatro números de forma ascendente\n");
            lista1=0;
            lista2=0;
            lista3=0;
            lista4=0;
            printf("\nDame 4 números enteros y te los ordenaré de forma ascendente:\n");
            scanf("%d",&num1);
            getchar();
            scanf("%d",&num2);
            getchar();
            scanf("%d",&num3);
            getchar();
            scanf("%d",&num4);
            getchar();
            lista1=ObtenerPrimero(num1, num2, num3, num4);
            lista4=ObtenerCuarto(num1, num2, num3, num4);
            lista2=ObtenerSegundo(num1, num2, num3, num4, lista1, lista4);
            lista3=ObtenerTercero(num1, num2, num3, num4, lista1, lista4);
            ImprimirOrdenados(lista1, lista2, lista3, lista4);
            break;
        }
            
        case 7:
        {
            printf("\nElejiste que imprima un tablero un ajerdrez\n");
            MetalChess();
            break;
        }
        default:
        {
            printf("\nLa opción que tecleaste no es válida\n");
            break;
        }
    }
    return 0;
}

//Función de Minúscula a Mayúscula (Switch 1)
void MinusMayus(void)
{
    char VarMinus;
    printf("\nDame una letra minúscula\n");
    VarMinus=getchar();
    getchar();
    if ((VarMinus>=97)&&(VarMinus<=122))
    {
        VarMinus=VarMinus-32;
        putchar(VarMinus);
        putchar('\n');
    }
    else
    {
        printf("\nEl caracter que me diste no es una letra minúscula\n");
    }
    return;
}

//Función de Mayúscula a Minúscula (Switch 2)
void MayusMinus(void)
{
    char VarMayus;
    printf("\nDame una letra mayúscula\n");
    VarMayus=getchar();
    getchar();
    if ((VarMayus>=65)&&(VarMayus<=90))
    {
        VarMayus=VarMayus+32;
        putchar(VarMayus);
        putchar('\n');
    }
    else
    {
        printf("\nEl caracter que me diste no es una letra mayúscula\n");
    }
    return;
}

//Función para alternar caracteres (Switch 3)
void FrenzyMayusMinus(void)
{
    char frenzy;
    printf("\nDame la serie de caracteres\n");
    while (1)
    {
        frenzy=getchar();
        if ((frenzy>=65)&&(frenzy<=90))
        {
            frenzy=frenzy+32;
            putchar(frenzy);
            continue;
        }
        if ((frenzy>=97)&&(frenzy<=122))
        {
            frenzy=frenzy-32;
            putchar(frenzy);
            continue;
        }
        if (!((frenzy>=65)&&(frenzy<=90)||(frenzy>=97)&&(frenzy<=122)||(frenzy==46)))
        {
            frenzy=frenzy;
            putchar(frenzy);
            continue;
        }
        if (frenzy==46)
        {
            break;
        }
    }
    putchar('\n');
    
}

//Función para convertir la primera letra de cada palabra (Switch 4)
void Formalizador(void)
{
    char letrita;
    letrita=getchar();
    while (1)
    {
        if (!((letrita>=97)&&(letrita<=122)))
        {
            putchar(letrita);
        }
        if ((letrita>=97)&&(letrita<=122))
        {
            letrita=letrita-32;
            putchar(letrita);
        }
        while (1)
        {
            letrita=getchar();
            if (letrita==32)
            {
                putchar(letrita);
                letrita=getchar();
                if (!((letrita>=97)&&(letrita<=122)))
                {
                    putchar(letrita);
                }
                if ((letrita>=97)&&(letrita<=122))
                {
                    letrita=letrita-32;
                    putchar(letrita);
                }
                continue;
            }
            if ((letrita!=32)&&(letrita!=46))
            {
                putchar(letrita);
                
            }
            if (letrita=='.')
            {
                putchar(letrita);
                putchar('\n');
                return;
            }
            
        }
    }
}

//Función para sumar caracteres numéricos (Switch 5)
void ElSumador(void)
{
    char FalseChar;
    int LaSuma;
    
    LaSuma=0;
    while (1)
    {
        FalseChar=getchar();
        if ((FalseChar>=48)&&(FalseChar<=57))
        {
            LaSuma=LaSuma+FalseChar;
        }
        if ((FalseChar<48)&&(FalseChar>57)&&(FalseChar!='.'))
        {
            continue;
        }
        if (FalseChar=='.')
        {
            break;
        }
    }
    printf("\nLa suma de los números es %d\n", LaSuma);
}

//Funciones Ordenar Números (Switch 6)
int ObtenerPrimero(int num1, int num2, int num3, int num4)
{
    int L1;
    if ((num1<num2)&&(num1<num3)&&(num1<num4))
    {
        L1=num1;
    }
    if ((num2<num1)&&(num2<num3)&&(num2<num4))
    {
        L1=num2;
    }
    if ((num3<num1)&&(num3<num2)&&(num3<num4))
    {
        L1=num3;
    }
    if ((num4<num1)&&(num4<num2)&&(num4<num3))
    {
        L1=num4;
    }
    return L1;
}

int ObtenerSegundo(int num1, int num2, int num3, int num4, int lista1, int lista4)
{
    int L2;
    if (((lista1==num1)&&(lista4==num4))||((lista1==num4)&&(lista4==num1)))
    {
        if (num2<num3)
        {
            L2=num2;
        }
        else
        {
            L2=num3;
        }
    }
    if (((lista1==num1)&&(lista4==num3))||((lista1==num3)&&(lista4==num1)))
    {
        if (num2<num4)
        {
            L2=num2;
        }
        else
        {
            L2=num4;
        }
    }
    if (((lista1==num1)&&(lista4==num2))||((lista1==num2)&&(lista4==num1)))
    {
        if (num3<num4)
        {
            L2=num3;
        }
        else
        {
            L2=num4;
        }
    }
    if (((lista1==num2)&&(lista4==num4))||((lista1==num4)&&(lista4==num2)))
    {
        if (num1<num3)
        {
            L2=num1;
        }
        else
        {
            L2=num3;
        }
    }
    if (((lista1==num2)&&(lista4==num3))||((lista1==num3)&&(lista4==num2)))
    {
        if (num1<num4)
        {
            L2=num1;
        }
        else
        {
            L2=num4;
        }
    }
    if (((lista1==num3)&&(lista4==num4))||((lista1==num4)&&(lista4==num3)))
    {
        if (num1<num2)
        {
            L2=num1;
        }
        else
        {
            L2=num2;
        }
    }
    return L2;
}

int ObtenerTercero(int num1, int num2, int num3, int num4, int lista1, int lista4)
{
    int L3;
    if (((lista1==num1)&&(lista4==num4))||((lista1==num4)&&(lista4==num1)))
    {
        if (num2>num3)
        {
            L3=num2;
        }
        else
        {
            L3=num3;
        }
    }
    if (((lista1==num1)&&(lista4==num3))||((lista1==num3)&&(lista4==num1)))
    {
        if (num2>num4)
        {
            L3=num2;
        }
        else
        {
            L3=num4;
        }
    }
    if (((lista1==num1)&&(lista4==num2))||((lista1==num2)&&(lista4==num1)))
    {
        if (num3>num4)
        {
            L3=num3;
        }
        else
        {
            L3=num4;
        }
    }
    if (((lista1==num2)&&(lista4==num4))||((lista1==num4)&&(lista4==num2)))
    {
        if (num1>num3)
        {
            L3=num1;
        }
        else
        {
            L3=num3;
        }
    }
    if (((lista1==num2)&&(lista4==num3))||((lista1==num3)&&(lista4==num2)))
    {
        if (num1>num4)
        {
            L3=num1;
        }
        else
        {
            L3=num4;
        }
    }
    if (((lista1==num3)&&(lista4==num4))||((lista1==num4)&&(lista4==num3)))
    {
        if (num1>num2)
        {
            L3=num1;
        }
        else
        {
            L3=num2;
        }
    }
    return L3;
}

int ObtenerCuarto(int num1, int num2, int num3, int num4)
{
    int L4;
    if ((num1>num2)&&(num1>num3)&&(num1>num4))
    {
        L4=num1;
    }
    if ((num2>num1)&&(num2>num3)&&(num2>num4))
    {
        L4=num2;
    }
    if ((num3>num1)&&(num3>num2)&&(num3>num4))
    {
        L4=num3;
    }
    if ((num4>num1)&&(num4>num2)&&(num4>num3))
    {
        L4=num4;
    }
    return L4;
}

void ImprimirOrdenados(int lista1, int lista2, int lista3, int lista4)
{
    printf("\nTe regreso los números que me diste ordenados de forma ascendente:");
    printf("\n%d", lista1);
    printf("\n%d", lista2);
    printf("\n%d", lista3);
    printf("\n%d\n", lista4);
}

//Función de Ajedrez (Switch 7)
void MetalChess(void)
{
    int Cuadrito;
    int Tablero;
    int MasterOfPuppets;
    int ContadorJ;
    int SlashDotCounter;
    int MiniCounter;
    
    printf("\nDame la base de cada cuadrito\n");
    scanf("%d", &Cuadrito);
    getchar();
    printf("Dame de cuantos cuadros quieres el tablero\n");
    scanf("%d", &Tablero);
    getchar();
    for (MasterOfPuppets=0; MasterOfPuppets<Tablero; MasterOfPuppets++)
    {
        for (ContadorJ=0; ContadorJ<Cuadrito; ContadorJ++)
        {
            for (SlashDotCounter=0; SlashDotCounter<Tablero; SlashDotCounter++)
            {
                for (MiniCounter=0; MiniCounter<Cuadrito; MiniCounter++)
                {
                    if (((MasterOfPuppets+SlashDotCounter)%2)==0)
                    {
                        printf("* ");
                    }
                    else
                    {
                        printf("- ");
                    }
                }
            }
            printf("\n");
        }
    }
}

//BE HAPPY!!!! ;)