/**
 * @file guardar.c
 *
 * @brief este programa almacena el contenido del arreglo de CDs dados de alta
 * en el archivo biblioteca.txt pra almacenamiento en disco y cuando el
 * programa se abra de nuevo todos los cambios realizados se reflejen
 *
 * @author Diego Martín Recillas, Iker Llorens Lara * @date 29/11/2010
*/

#include "struct.h"
#include <stdio.h>

extern void guardar(catalogo disco[])
{
	FILE *bibliotecaPtr;
	int indice=0;//Contador

	#ifdef DEBUG
		printf("Entro Guardar!\n");//Compilación condicional para depuración
	#endif

	bibliotecaPtr=fopen("biblioteca.txt","w");

	for(indice=0;indice<SIZE;indice++)
	{
		if(disco[indice].artista[0]=='\0')
		{
			continue;
		}
        //Impresión del catálogo
		fprintf(bibliotecaPtr,"%d\n%s%s%s%s",indice,disco[indice].artista,
    	disco[indice].album,disco[indice].anio,disco[indice].genero);
	}
	fclose(bibliotecaPtr);
	return;
}