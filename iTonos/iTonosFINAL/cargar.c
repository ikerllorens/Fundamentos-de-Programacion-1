/**
 * @file cargar.c
 *
 * @brief Este programa carga los datos de la biblioteca, en la que se encuentran
 * los datos de la biblioteca y los carga en un arreglo dependiendo de su índice.
 * Es decir, la posición del CD dentro del arreglo depende del índice del CD
 * que el usuario especificó al darlo de alta
 *
 * @author Diego Martín Recillas, Iker Llorens Lara * @date 28/12/2010
*/

#include <stdio.h>
#include "struct.h"
#include <string.h>
#include <stdlib.h>

extern void cargar(catalogo disco[])
{
	FILE *bibliotecaPtr; //Puntero a archivo biblioteca.txt
	int indice=0;
	int i=0;
	char trash;

	#ifdef DEBUG
		printf("Entro Cargar!\n");//Compilación condicional para depuración
	#endif

	bibliotecaPtr=fopen("biblioteca.txt","r");
	if(bibliotecaPtr==NULL)
	{
		printf("ERROR! AL ABRIR EL ARCHIVO.\n"); //Validación de archivo
		exit(1);
	}

	while(feof(bibliotecaPtr)==0)
	{
		fscanf(bibliotecaPtr, "%d%c",&indice,&trash);
		//printf("Indice:%d\n",indice);//Pruebas
		fgets(disco[indice].artista, 50 ,bibliotecaPtr);
		//printf("Artista:%s",disco[indice].artista);//Pruebas
		fgets(disco[indice].album, 50 ,bibliotecaPtr);
		//printf("Album:%s",disco[indice].album);//Pruebas
		fgets(disco[indice].anio, 50 ,bibliotecaPtr);
		//printf("Año:%s",disco[indice].anio);//Pruebas
		fgets(disco[indice].genero, 50 ,bibliotecaPtr);
		//printf("Genero:%s",disco[indice].genero);//Pruebas
		disco[indice].estado=1;
		//printf("\nEstado: %d",disco[indice].estado);	//Pruebas	
	}

	fclose(bibliotecaPtr); //Cerrar Archivo

	#ifdef DEBUG
		printf("Termina Cargar!\n");//Compilación condicional para depuración
	#endif
	return;
}