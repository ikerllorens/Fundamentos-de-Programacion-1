/*

19/09/2012
Iker Llorens
Este programa imprime en pantalla un mensaje de Hola Mundo!

*/

//Este solo sorve para comentarios de una sola linea (no se cierran)

//Directivas al preprocesador

// Bibliotecas
#include  <stdio.h>

// Constantes
// No hay en este programa


//Prototipos de Funciones
void imprimeMensaje(void);


//Inicio del programa
int main(void)
{

  imprimeMensaje();
  return 0;
}
//Implementación de mis funciones

void imprimeMensaje(void)
{
  int contador;
  contador=0;
  while (contador<3)
    {
        printf("Hola Mundo!! :)  \n");
	contador++;
    }
}
