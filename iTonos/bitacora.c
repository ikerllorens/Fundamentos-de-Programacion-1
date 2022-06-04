/**
 * @file bitacora.c
 *
 * @brief Este programa tiene como fin la creación de la bitácora donde
 * se muestran los cambios hechos en la biblioteca mediante otras funciones.
 * Esta función utiliza la biblioteca time.h para utilizar su función time()
 * que permite imprimir la fecha y la hora en la que se llama. El programa recibe
 * como argumentos el catálogo, el índice del catalogo que fue modificado y 
 * cual fue el cambio realizado. El programa imprime en un archivo llamado
 * bitacora.txt todos los cambios y va anexando cada cambio aunque el  usuario
 * cierre el programa se conservan los datos de la sesión anterior.
 *
 * @author Diego Martín Recillas, Iker Llorens Lara * @date 30/11/2010
*/

#include "struct.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void timestamp(FILE* bitacoraPtr);
extern void bitacora(catalogo disco[],int indice,int cambio)
{
  FILE *bitacoraPtr; //Puntero al archivo bitacora.txt

  #ifdef DEBUG
    printf("Entro Bitacora!\n"); //Compilación condicional para depuración
  #endif

  if((bitacoraPtr=fopen("bitacora.txt","a"))==NULL) //Validación de archivo
  {
    printf("Fallo al abir bitacora.txt!\n");
    exit(1);
  }
  //Impresión de bitácora dependiendo que cambio fue realizado
  if(cambio==1)
    {
      timestamp(bitacoraPtr);
      fprintf(bitacoraPtr,"Alta.\nDisco#%d\nArtista:%sAlbum:%sAño:%sGenero:%s\n",indice,disco[indice].artista,
              disco[indice].album,disco[indice].anio,disco[indice].genero);
    }
  if(cambio==2)
    {
      timestamp(bitacoraPtr);
      fprintf(bitacoraPtr,"Modifico.\nDisco#%d\nArtista:%sAlbum:%sAño:%sGenero:%s\n",indice,disco[indice].artista,
              disco[indice].album,disco[indice].anio,disco[indice].genero);
    }
  if(cambio==3)
    {
      timestamp(bitacoraPtr);
      fprintf(bitacoraPtr,"Baja.\nDisco#%d\nArtista:%sAlbum:%sAño:%sGenero:%s\n",indice,disco[indice].artista,
              disco[indice].album,disco[indice].anio,disco[indice].genero);
    }

  // Cierrre de archivo
  fclose(bitacoraPtr);

  return;
}

//Genera e imprime usando el tiempo actual de la máquina
void timestamp(FILE* bitacoraPtr) 
{
  time_t ltime;
  ltime=time(NULL);
  fprintf(bitacoraPtr,"%s",asctime( localtime(&ltime) ) );

  return;
}
