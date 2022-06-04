//AreaRectangulo.c
//Created by Iker Llorens on 10/09/2012

/*

Programa que pide la base y la altura de un rectangulo,
calcula su área y la imprime

Lo que esta pasando aquí es que se divide el programa en 3 partes
   Ingreso de datos
   Proceso de Caálculo de Area
   Impresión del resultado

*/

//Directivas de Preprocesador
#include <stdio.h>

//Prototipos de Funciones (Cuando se definen)
int pideNumero(void); //El "int" significa que devuelve un numero entero
int calculaAreaRect(int base, int altura);
void imprimeArea(int base, int altura, int area);


int main(void)
{
  //Variables locales
  int b,h,area;

  printf("Programa que calcula el área del un rectangulo\n");

  printf("Dame la base del rectángulo\n");
  b=pideNumero();

  printf("Dame la altura del rectángulo \n");
  h=pideNumero();

  area=calculaArea(b,h);

  imprimeArea(b,h,area);

 return 0 ;

}

//Implementación de funciones

int pideNumero(void)
{
  int numero;

  printf("Dame un valor entero\n");
  scanf("%d",&numero);
return numero;
}

int calculaArea(int base, int altura)
{
  int area=0;
  area=base*altura;
  return area;

}
void imprimeArea(int base, int altura, int area)
{

  printf("El area de un rectángulo de base %d y altura %d \n", base, altura);
  printf("es igual a %d \n",area);
}


