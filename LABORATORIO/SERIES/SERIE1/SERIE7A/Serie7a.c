//
//  Serie7a.c
//  
//
//  Created by Iker Llorens on 18/09/2012.
/*
 Este programa junta todos los programas de las serie, es decir, dentro de este programa se encuentran Serie1a.c, Serie2a.c, Serie3a.c, Serie4a.c, Serie5a.c y Serie6a.c
 Este programa tiene la capacidad de desplegar una lista de funciones y el usuario elegirá una de ellas y el programa ejecutará esa función y le entregará el resultado correspondiente
Las funciones que este programa puede desempeñar son: 
 Determinar si un caracter dado por el usuario es numérico
 Determinar si un caracter dado por el usuario es una vocal
 Determinar si un número dado por el usuario es par o impar
 Ordenar 4 números dados por el usuario de forma ascendente
 Determinar si una edad dada usuario entra en la categoría de bebé, niño, adolescente, adulto o adulto mayor
 No hacer nada y salir
*/

#include <stdio.h>

//Funciones
//Funciones Serie1a.c
char LeerLetra(void);
int EsVocal(char letra);
void Imprime(int val, char letra);

//Funciones Serie2a.c
char LeerCaracter(void);
int EsNumero(char caracter);
void ImprimeMensaje(char caracter, int val);

//Funciones Serie3a.c
void DivisionNumero(int num);

//Funciones Serie4a.c
int ObtenerPrimero(int num1, int num2, int num3, int num4);
int ObtenerCuarto(int num1, int num2, int num3, int num4);
int ObtenerSegundo(int num1, int num2, int num3, int num4, int lista1, int lista4);
int ObtenerTercero(int num1, int num2, int num3, int num4, int lista1, int lista4);

//Funciones Serie5a.c
void Edad(void);

//Variables
int eleccion;

//Variables Serie1a.c
int val;
char letra;

//Variables Serie2a.c
int val;
char caracter;

//Variables Serie3a.c
int num;

//Variabñes Serie4a.c
int num1;
int num2;
int num3;
int num4;
int lista1;
int lista2;
int lista3;
int lista4;

//Variables Serie5a.c
// No hay

int main(void)
{
    printf("\n¿Que función quieres que ejecute?"
           "\n1) Definir si un caracter es una vocal."
           "\n2) Definir si un caracter es numérico."
           "\n3) Definir si un número es par o impar."
           "\n4) Ordenar 4 números de forma ascendente."
           "\n5) Indicarte si eres un bebé, niño,"
           " adolescente, adulto o adulto mayor."
           "\n6) No ejecutar nada y salir.\n");
    scanf("%d", &eleccion);
    if (eleccion==1)
    {
        getchar();
        printf("\nElejiste que defina si un caracter es una vocal\n");
	letra=LeerLetra();
	val=EsVocal(letra);
	Imprime(val, letra);
    }
    if (eleccion==2)
    {
        getchar();
        printf("\nElejiste que defina si un caracter es numérico\n");
        caracter=LeerCaracter();
        val=EsNumero(caracter);
        ImprimeMensaje(caracter, val);
    }
    if (eleccion==3)
    {
        printf("\nElejiste que defina si un número es par o impar\n");
        printf("\nDame un número entero y te diré si es par o impar\n");
        scanf("%d",&num);
        DivisionNumero(num);
    }
    if (eleccion==4)
    {
        printf("\nElejiste que ordene 4 números de forma ascendente\n");
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
    }
    if (eleccion==5)
    {
        printf("\nElejiste que te indique si eres un bebé, niño, adolescente,"
               " adulto o adulto mayor\n");
        Edad();
    }
    if (eleccion==6)
    {
        printf("\nElejiste que no ejecute nada y salga\n");
    }
    return 0;
}

//FuncionesSerie1a.c
char LeerLetra(void)
{
  char letra;
  printf("Dame una letra\n");
  scanf("%c", &letra);
  return letra;
}

int EsVocal(char letra)
{
  int val;
  if((letra=='A')||(letra=='E')||(letra=='I')||(letra=='O')||(letra=='U')||(letra=='a')||(letra=='e')||(letra=='i')||(letra=='o')||(letra=='u'))
    {
      val=1;
      
    }
  else
    {
      val=0;
    }
  return val;
}

void Imprime(int val, char letra)
{
  if(val==1)
    {
      printf("\nLa letra que me diste es una vocal. Ten un buen día.\n");
    }
  if(val==0)
    {
      printf("\nLa letra que me diste no es una vocal. Ten un buen día.\n");
    }
}

//Funciones Serie2a.c
char LeerCaracter(void)
{
    char car;
    printf("\nDame un caracter y te diré si es numérico\n");
    scanf("%c",&car);
    return car;
    
}

int EsNumero(char caracter)
{
    int prueba;
    if ((caracter=='0')||(caracter=='1')||(caracter=='2')||(caracter=='3')||
        (caracter=='4')||(caracter=='5')||(caracter=='6')||(caracter=='7')||
        (caracter=='8')||(caracter=='9'))
    {
        prueba=1;
    }
    else
    {
        prueba=0;
    }
    return prueba;
}

void ImprimeMensaje(char caracter, int val)
{
    if (val==0)
    {
        printf("\nEl caracter %c no es un caracter numérico\n", caracter);
        
    }
    else
    {
        printf("\nEl caracter %c es un caracter numérico\n", caracter);
    }
}

//Funciones Serie3a.c
void DivisionNumero(int num)
{
    int residuo;
    residuo=num%2;
    if (residuo==0)
    {
        printf("El número %d es un número par\n", num);
    }
    else
    {
        printf("El número %d es un número impar\n", num);
    }
}

//Funciones Serie4a.c
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

//Funciones Serie5a.c
void Edad(void)
{
    int edad;
    printf("\nDame tu edad\n");
    scanf("%d", &edad);
    if (edad<=2)
    {
        printf("\nEres un bebé\n");
    }
    if ((edad>2)&&(edad<=12))
    {
        printf("\nEres un niño\n");
    }
    if ((edad>12)&&(edad<=20))
    {
        printf("\nEres un adolescente\n");
    }
    if ((edad>20)&&(edad<=65))
    {
        printf("\nEres un adulto\n");
    }
    if (edad>65)
    {
        printf("\nEres un adulto mayor\n");
    }
}
