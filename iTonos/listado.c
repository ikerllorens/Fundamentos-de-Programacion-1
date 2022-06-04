/**
 * @file listado.c
 *
 * @brief Este programa sirve para mostrar en pantalla los CDs dados de alta. 
 * Se pueden desplegar los CDs en orden ascendente por su número de Disco, año,
 * nombre del álbum, artista o género. El usuario elige de qué  manera quiere que 
 * se desplieguen sus CDs en pantalla. Para ordenar se utilizó el método de 
 * Bubble Sorting.
 *
 * @author Diego Martín Recillas, Iker Llorens Lara * @date 26/11/2010
*/

#include <stdio.h>
#include "struct.h"
#include <string.h>

void imprimeListadoString(catalogo discoCmp[]);

extern void listado(catalogo disco[])
{
	catalogo discoCmp[SIZE];
	catalogo temp[1];
	int indice=1;
	int opc;
	int opc2;
	int i=0,j=0;

	system("clear");
	#ifdef DEBUG 
		printf("Entro Listado!\n");//Compilación condicional para depuración
	#endif
    //Copia a nuevo arreglo para evitar confusión en el programa principal
	for(i=0;i<SIZE;i++) 
	{
		discoCmp[i].ndisco=disco[i].ndisco;
		strcpy(discoCmp[i].artista,disco[i].artista);
		strcpy(discoCmp[i].album,disco[i].album);
		strcpy(discoCmp[i].anio,disco[i].anio);
		strcpy(discoCmp[i].genero,disco[i].genero);
		discoCmp[i].estado=disco[i].estado;
	}

	printf("Como deseas desplegar los discos?\n1.-Por #Disco.\n2.-Por Artista.\n3.-Por Album.\n4.-Por Año\n5.-Por Genero\n");
	__fpurge(stdin); //Limpieza de búffer
	scanf("%d",&opc);

	switch(opc)
	{
		case 1: //Impresión mediante número de disco
		{
			while(1)
			{	
				if(disco[indice].estado==0)
				{
					if(opc2==1)
					{
						indice--;
					}
					if(opc2==2)
					{
						indice++;
					}
					continue;
				}
				if(indice<=0)
				{
					system("clear");
					printf("Principio del Catalogo!\n");
					indice++;
				}
				if(indice>=SIZE)
				{	
					system("clear");
					printf("Fin del Catalogo!\n");
					indice--;
				}
				if(indice>0 && indice<SIZE && disco[indice].estado==1)
				{
					system("clear");
					printf("#Disco:%d\nArtista:%sAlbum:%sAño:%sGenero:%s",indice,disco[indice].artista,
   			 		disco[indice].album,disco[indice].anio,disco[indice].genero);
				}

				printf("1.-Atras\t2.-Adelante\t3.-Salir\n");
				scanf("%1d",&opc2);

				switch(opc2)
				{
					case 1:
					{
						indice--;
						break;
					}
					case 2:
					{
						indice++;
						break;
					}
					case 3:
					{
						system("clear");
						return;
						break;
					}
					default:
					{
						break;
					}
				}
			}
			break;
		}
		case 2: //Impresión por artista de forma alfabética
		{
			for(i=(SIZE);i>0;i--)
			{
				for(j=1;j<=i;j++)
				{
					if((strcmp(discoCmp[j-1].artista,discoCmp[j].artista)) > 0)
					{
						temp[0]=discoCmp[j-1];
						discoCmp[j-1]=discoCmp[j];
						discoCmp[j]=temp[0];
					}
				}
			}
			imprimeListadoString(discoCmp);
			break;
		}
		case 3: //Impresión por nombre de álbum de forma alfabética
		{
			for(i=(SIZE);i>0;i--)
			{
				for(j=1;j<=i;j++)
				{
					if((strcmp(discoCmp[j-1].album,discoCmp[j].album)) > 0)
					{
						temp[0]=discoCmp[j-1];
						discoCmp[j-1]=discoCmp[j];
						discoCmp[j]=temp[0];
					}
				}
			}
			imprimeListadoString(discoCmp);
			break;
		}
		case 4: //Impresión por año de forma ascendente
		{
			for(i=(SIZE);i>0;i--)
			{
				for(j=1;j<=i;j++)
				{
					if((strcmp(discoCmp[j-1].anio,discoCmp[j].anio)) > 0)
					{
						temp[0]=discoCmp[j-1];
						discoCmp[j-1]=discoCmp[j];
						discoCmp[j]=temp[0];
					}
				}
			}
			imprimeListadoString(discoCmp);
			break;
		}
		case 5: //Impresión por género de  dorma alfabética
		{
			for(i=(SIZE);i>0;i--)
			{
				for(j=1;j<=i;j++)
				{
					if((strcmp(discoCmp[j-1].genero,discoCmp[j].genero)) > 0)
					{
						temp[0]=discoCmp[j-1];
						discoCmp[j-1]=discoCmp[j];
						discoCmp[j]=temp[0];
					}
				}
			}
			imprimeListadoString(discoCmp);
			break;
		}
        //Validación
		default: system("clear"); printf("OPCION NO VALIDA!\n"); break;

	}
	return;
}

//Función para imprimir el arreglo ordenado
void imprimeListadoString(catalogo discoCmp[])
{
	int i=0;
	int opc2=2;
	while(1)
	{
		if(discoCmp[i].estado==0 && i<SIZE)
		{
			if(opc2==1)
			{
				i--;
			}
			if(opc2==2)
			{
				i++;
			}
			continue;
		}
		if(i<0)
		{
			system("clear");
			printf("Principio del Catalogo!\n");
			i++;
		}
		if(i>=0 && i<SIZE && discoCmp[i].estado==1)
		{
			system("clear");
			printf("#Disco:%d\nArtista:%sAlbum:%sAño:%sGenero:%s",discoCmp[i].ndisco,discoCmp[i].artista,
   			discoCmp[i].album,discoCmp[i].anio,discoCmp[i].genero);
		}				
		if(i>=SIZE)
		{	
			system("clear");
			printf("Fin del Catalogo!\n");	
		}
   		printf("1.-Atras\t2.-Adelante\t3.-Salir\n");
		scanf("%1d",&opc2);				
		switch(opc2)
		{
			case 1:
			{
				if(i>SIZE)
				{
					i--;
				}
				i--;
				break;
			}
			case 2:
			{
			    if(i>SIZE)
				{
					i--;
				}
				i++;
				break;
			}
			case 3:
			{
				system("clear");
				return;
				break;
			}
			default:
			{
				break;
			}
		}			
	}

	return;	
}