//
//  Conversor.c
//  
//
//  Created by Iker Llorens on 16/10/2012.
/*
 Este programa es un conversor de unidades con un menú cíclico. Las unidades que
 puede convertir son:
 1) Metros a Centimetros
 2) Kilos a Libras
 3) Centigrados a Fahrenheit
*/

#include <stdio.h>

float convMtsaCms(float mts);
float convKgsaPnds(float kgs);
float convCentaFahr(float cent);
void menu(int eleccion);

int main(void)
{
    int elecc;
    float CosaAConvertir;
    
    elecc=0;
    do{
        printf("\n¿Que quieras que haga?"
               "\n1) Metros a Centimetros"
               "\n2) Kilos a Libras"
               "\n3) Centigrados a Fahrenheit"
               "\n4) Salir\n");
        scanf("%d",&elecc);
        getchar();
        menu(elecc);
    }
    while(elecc != 4);
    return 0;
}

void menu(int eleccion)
{
    float CosaAConvertir;
    
    switch (eleccion)
    {
        case 1:
        {
            printf("Introduzca un valor en metros: ");
            scanf("%f",&CosaAConvertir);
            getchar();
            CosaAConvertir = convMtsaCms(CosaAConvertir);
            printf("%f Centimetros\n",CosaAConvertir);
            break;
        }
        case 2:
        {
            printf("Introduzca un valor en Kilos: ");
            scanf("%f",&CosaAConvertir);
            getchar();
            CosaAConvertir = convKgsaPnds(CosaAConvertir);
            printf("%f Libras\n",CosaAConvertir);
            break;
        }
        case 3:
        {
            printf("Introduzca un valor en Grados Centigrados (Enteros): ");
            scanf("%f",&CosaAConvertir);
            getchar();
            CosaAConvertir = convCentaFahr(CosaAConvertir);
            printf("%f Grados Fahrenheit \n",CosaAConvertir);
            break;
        }
        default:
        {
            break;
        }
    }
}

float convMtsaCms(float mts)
{
    mts = mts * 100;
    return mts;
}
float convKgsaPnds(float kgs)
{
    kgs = kgs * 2.204;
    return kgs;
}
float convCentaFahr(float cent)
{
    cent = cent*9/5+32;
    return cent;
}