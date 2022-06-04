//Creado por Iker Llorens el 3/12/2012
//Algoritmo imprime.c
/*
Este programa imprime las instrucciones de los baristas en un archivo 
llamado por default "lote.txt", y en caso de que el usuario haya definido
un nombre antes de ejecutar el programa, ése nombre es el utilizado
*/

#include <stdio.h>
#include <string.h>
#include "struct.h"

extern void imprime(char nombrearchivo[])
{
	FILE *arChivo;
	int i;

	arChivo=fopen(nombrearchivo, "w");

	printf("Se mandó un lote a los baristas\n");
	for (i=0; i<3; i++)
	{
		//printf("%s", lotcom[i].nickname);
		fprintf(arChivo, "%s", lotcom[i].nickname);
		switch(lotcom[i].tipo)
		{
			case 1:
			{
				fprintf(arChivo, "Exprés\n");
				break;
			}
			case 2:
			{
				fprintf(arChivo, "Capuchino\n");
				break;
			}
			case 3:
			{
				fprintf(arChivo, "Latte\n");
				break;
			}
			default:
			{
				break;
			}
		}
		switch(lotcom[i].size)
		{
			case 1:
			{
				fprintf(arChivo, "Chico\n");
				break;
			}
			case 2:
			{
				fprintf(arChivo, "Mediano\n");
				break;
			}
			case 3:
			{
				fprintf(arChivo, "Grande\n");
				break;
			}
			default:
			{
				break;
			}
		}
		putchar('\n');
	}
	fclose(arChivo);
	return;
}