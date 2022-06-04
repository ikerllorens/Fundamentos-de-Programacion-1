//Creado por Iker Llorens el 3/12/2012
//Algoritmo compras.c
/*
Este programa registra las compras y y al momento en que detecte 
que se ingresaron 3 compras, envñia una instrucción a los baristas
*/

#include <stdio.h>
#include <string.h>
#include "struct.h"


extern void imprime(char nombrearchivo[]);

extern void nuevacompra(int i, int *puntero1, char nombrearchivo[])
{
	

int temp;
	int mientras;
	char nombre[100];

	mientras=*puntero1;
	printf("Nombre del cliente:\n");
	fgets(nombre, sizeof(nombre), stdin);
	strcpy(compra[i].nickname, nombre);
	//printf("%s\n", nombre);
	printf("Tipo de café que desea el cliente:\n"
		   "1) Express\n"
		   "2) Capuchino\n"
		   "3) Latte\n");
	scanf("%d", &temp);
	getchar();
	compra[i].tipo=temp;
	printf("Tamaño de café que desea el cliente:\n"
		   "1) Chico\n"
		   "2) Mediano\n"
		   "3) Grande\n");
	scanf("%d", &temp);
	compra[i].size=temp;
	getchar();

	strcpy(lotcom[mientras].nickname, compra[i].nickname);
	lotcom[mientras].tipo=compra[i].tipo;
	lotcom[mientras].size=compra[i].size;

	mientras++;
	*puntero1=mientras;
	//printf("%d\n", *puntero1);
	if(*puntero1==3)
	{
		*puntero1=1;
		imprime(nombrearchivo);
	}
	return;
}
