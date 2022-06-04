/**
 * @file baja.c
 *
 * @brief Este programa permite al usuario dar de baja CDs que ya ha dado de alta
 * anteriormente. EL usuario ingresa un número de CD y el programa muestra la
 * información del CD para qu el usuario vea si es el álbum correcto a eliminar.
 * En caso de que el usuario confirme que quiere eliminar el CD, la posición en
 * memoria donde se encontraba almacenado el CD queda vacía y disponible para
 * que el usuario dé de alta otro disco. Al terminar la función se llama a la 
 * función bitácora.
 *
 * @author Diego Martín Recillas, Iker Llorens Lara * @date 27/11/2010
*/

#include "struct.h"
#include <stdio.h>

//Definición de la función bitácora
extern void bitacora(catalogo disco[],int indice,int cambio);

extern void baja(catalogo disco[])
{
	int indice;
	int cambio=3;
	int opc=0;

	#ifdef DEBUG
		printf("Entro Baja!\n"); //Compilación condicional para depuración
	#endif

	getchar(); //Liberación del búffer
	printf("Que # de Disco deseas dar de BAJA?\n");
	scanf("%d",&indice);

    //Muestra de la información del disco que el usuario dará de baja
	printf("Este es el CD que deseas dar de BAJA?\n");
	printf("Disco #: %d\n", indice);
	getchar();
	printf("Artista: %s", disco[indice].artista);
	printf("Album: %s", disco[indice].album);
	printf("Año: %s", disco[indice].anio);
	printf("Genero: %s", disco[indice].genero);
	printf("1.-SI\t2.-NO\n");
	scanf("%d",&opc);

	system("clear");
	switch(opc)
	{
		case 1:
			{
			bitacora(disco,indice,cambio);
			disco[indice].artista[0]='\0';
			disco[indice].album[0]='\0';
			disco[indice].anio[0]='\0';
			disco[indice].genero[0]='\0';
			disco[indice].estado=0; //CD dado de baja, control.
			printf("Disco dado de Baja!\n");
		}
		case 2:
		{
			break;
		}
		default:
		{
			printf("OPCION NO VALIDA!\n"); //Validación
			break;
		}
	}
	return;
}