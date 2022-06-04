//Creado por Iker Llorens el 3/12/2012
//Algoritmo ap3.c
/*
Este programa funciona para registrar las ventas realizadas 
de café y que tipos de cafe y tamaños fueron vendidos. El programa
automáticamente imprime y envía a los baristas los trabajos pendientes
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "struct.h"

extern void nuevacompra(int i, int *puntero1, char nombrerchivo[]);
 
int main(int argc, char *argv[])
{
	char nombrerchivo[300]="lote.txt";
	int opc;
	int numcom; //Contador de compras
	int *puntnumcom; //Puntero a contador de compras
	int contador;
	int total;

	if (argc==2)
	{
		strcpy(nombrerchivo, argv[1]);
	}
	numcom=0;
	puntnumcom=&numcom;
	total=0;
	while(1)
	{
		if (total<100)
		{
			//printf("main: %d\n", *puntnumcom);
			printf("¿Que operación desea realizar?\n"
				   "1) Registrar nueva compra\n"
				   "2) Salir del sistema\n");
			scanf("%d", &opc);
			getchar();
			switch (opc)
			{
				case 1:
				{
					nuevacompra(total, puntnumcom, nombrerchivo);
					break;
				}
				case 2:
				{
					exit(0);
					break;

				}
				default:
				{
					break;
				}
			}
		}
		else
		{		
			break;
		}
	}
		total++;
	return 0;
}


