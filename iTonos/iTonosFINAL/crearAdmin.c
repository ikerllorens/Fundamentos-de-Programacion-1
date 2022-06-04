/**
 * @file crearAdmin.c
 *
 * @brief Este programa permite a un usuario general un nuevo nombre de usuario
 * y una nueva contraseña asociada a él. Ésta información la guarda en un nuevo 
 * archivo binario.
 *
 * @author Diego Martín Recillas, Iker Llorens Lara * @date 01/12/2010
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern void crearAdmin(void)
{
	char archivo[35];
	char usuario[30];
	char pwd[30];
	char contenido[60];
	FILE *fp;

	system("clear");

	#ifdef DEBUG//Compilacion condicional
		printf("Entro crearAdmin!\n");
	#endif

	printf("Nombre de Usuario:\n");
	fgets(usuario,sizeof(usuario),stdin);//Le el usuario de la entrada estandar.
	strcpy(archivo,usuario);//Copia usuario en archivo.
	strcat(archivo,".bin");//Le agrega a la variable archivo la terminacion .bin para que sea un archivo binario.

	if((fp=fopen(archivo,"w+b"))==NULL)//Validacion de apertura del archivo.
	{
		printf("ERROR! No se puedo abrir el archivo.\n");
		exit(1);
	}

	system("clear");
	printf("Contraseña:\n");
	fgets(pwd,sizeof(pwd),stdin);//Le la contraseña de la entrada estandar.

    strcpy(contenido,usuario);//Copia usario en la variable archivo.
    strcat(contenido,pwd);//Concatena el usuario con el password.
    fwrite(contenido,1,sizeof(contenido),fp);//Escribe el usuario y el password en un archivo.bin.

	fclose(fp);//Cierra el archivo.
	system("clear");
	printf("Nuevo Administrador creado!\n");
	return;
}