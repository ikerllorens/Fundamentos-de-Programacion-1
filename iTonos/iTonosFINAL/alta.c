/**
 * @file alta.c 
 *
 * @brief Este programa le permite al usuario dar de alta CDs al usuario
 * su funcionamiento consiste en primero pedir al usuario el número de disco
 * que desea dar de alta y le indica al usuario cual es el siguiente
 * espacio vacío. En caso de que el usuario ingrese el número de un CD que ya
 * esté anteriormente dado de alta el programa indica un error. Acto seguido, el
 * programa pide el nombre del artista, el nombre del álbum, el año y por último
 * el género. Todo esto se guarda en un arreglo esctructurado definido en 
 * struct.h. Al finalizar el proceso de dado de alta, se invoca la función
 * bitácora.
 *
 * @author Diego Martín Recillas, Iker Llorens Lara * @date 26/11/2010
*/

#include "struct.h"
#include <stdio.h>

extern void bitacora(catalogo disco[],int indice,int cambio);

extern void alta(catalogo disco[])
{
	int indice;
	int cambio=1; //Variable de control, utilizada en la función bitácora
	int i; //Contador

	#ifdef DEBUG //Compilación condicional
		printf("Entro Alta!\n");
	#endif
    
	printf("Que # de Disco deseas dar de ALTA?\n");
	
    //Sugerencia de próximo disco vacío
    for(i=1;i<SIZE;i++)
	{
		if(disco[i].estado==0)
		{
			printf("Proximo #Disco disponible: %d\n", i);
			break;
		}
	}
	scanf("%d",&indice);

    //Captura de datos
	if(disco[indice].estado==1)
	{
		system("clear");
		printf("ERROR!DISCO#:%d EN USO.\n", indice); //Validación
		return;
	}
	system("clear");
	getchar();
	printf("Disco #: %d\n", indice);
	printf("Artista:\n");
	fgets(disco[indice].artista, sizeof(disco[indice].artista), stdin);
	printf("Album:\n");
	fgets(disco[indice].album, sizeof(disco[indice].album), stdin);
	printf("Año:\n");
	fgets(disco[indice].anio, sizeof(disco[indice].anio), stdin);
	printf("Genero:\n");
	fgets(disco[indice].genero, sizeof(disco[indice].genero), stdin);
	disco[indice].estado=1; //El CD queda dado de alta, control.
	system("clear");
	printf("Disco dado de Alta!\n");

    //Llamda a función bitácora
    bitacora(disco,indice,cambio);

	return;
}