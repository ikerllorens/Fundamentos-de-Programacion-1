/**
 * @file modificar.c
 *
 * @brief Este programa permite al usuario modificar los CDs que fueron dados
 * anteriormente de alta. El usuario elije que campo modificar y si el usuario
 * desea modificar otro álbum vuelve al principio del programa
 *
 * @author Diego Martín Recillas, Iker Llorens Lara * @date 26/11/2010
*/

#include <stdio.h>
#include "struct.h"

extern void modificar(catalogo disco[])
{
	int indice;
	int cambio=2;
	int opc=0, opc2=0;

	#ifdef DEBUG
		printf("Entro Modificar!\n"); //Compilación condicional para depuración
	#endif

	printf("Que # de Disco deseas Modificar?\n");
	scanf("%d",&indice);

	printf("Disco #: %d\n", indice);
	printf("Artista: %s", disco[indice].artista);
	printf("Album: %s", disco[indice].album);
	printf("Año: %s", disco[indice].anio);
	printf("Genero: %s", disco[indice].genero);

	while(1)
	{
		if(opc2==2)
		{
			break;
		}
		printf("Que deseas Modificar?\n1.-Artista.\n2.-Album.\n3.-Año.\n4.-Genero\n5.-Nada\n");
		__fpurge(stdin);
		scanf("%d",&opc);
		getchar();
		switch(opc)
		{
			case 1: //Modificación de artista
			{
				printf("Nuevo Artista?:\n");
				fgets(disco[indice].artista, sizeof(disco[indice].artista), stdin);
				break;
			}
			case 2: //Modificación de nombre de álbum
			{
				printf("Nuevo Album?:\n");
				fgets(disco[indice].album, sizeof(disco[indice].album), stdin);
				break;
			}
			case 3: //Modificación de año
			{
				printf("Nuevo Año?:\n");
				fgets(disco[indice].anio, sizeof(disco[indice].anio), stdin);
				break;
			}
			case 4: //Modificación de género
			{
				printf("Nuevo Genero?:\n");
				fgets(disco[indice].genero, sizeof(disco[indice].genero), stdin);
				break;
			}
			case 5: //Salir
			{
				system("clear");
				return;
			}
			default:
			{
				printf("OPCION NO VALIDA!\n"); //Validación de opción
				return;
			}
		}
		printf("Deseas modificar algo mas?\n1.-SI\n2.-NO\n");
		__fpurge(stdin);
		scanf("%d",&opc2);
	
	}
	printf("Disco Modificado!\n");
    bitacora(disco,indice,cambio);
    system("clear");
	return;
}