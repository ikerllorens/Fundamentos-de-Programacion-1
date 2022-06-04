//
//  Serie4a.c
//  
//
//  Created by Iker Llorens on 16/09/2012.
/*
 Este programa lee 4 números enteros dados por el usuario y utilozando varias funciones y
 operaciones lógicas, ordena de manera ascendente los cuatro números y se los muestra al
 usuario de esa forma.
*/

#include <stdio.h>

int num1;
int num2;
int num3;
int num4;

int lista1;
int lista2;
int lista3;
int lista4;

int ObtenerPrimero(int num1, int num2, int num3, int num4);
int ObtenerCuarto(int num1, int num2, int num3, int num4);
int ObtenerSegundo(int num1, int num2, int num3, int num4, int lista1, int lista4);
int ObtenerTercero(int num1, int num2, int num3, int num4, int lista1, int lista4);

int main(void)
{
    lista1=0;
    lista2=0;
    lista3=0;
    lista4=0;
    printf("\nDame 4 números enteros y te los ordenaré de forma ascendente:\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    scanf("%d",&num4);
    lista1=ObtenerPrimero(num1, num2, num3, num4);
    lista4=ObtenerCuarto(num1, num2, num3, num4);
    lista2=ObtenerSegundo(num1, num2, num3, num4, lista1, lista4);
    lista3=ObtenerTercero(num1, num2, num3, num4, lista1, lista4);
    printf("\nTe regreso los números que me diste ordenados de forma ascendente:");
    printf("\n%d", lista1);
    printf("\n%d", lista2);
    printf("\n%d", lista3);
    printf("\n%d\n", lista4);
    return 0;
}

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



