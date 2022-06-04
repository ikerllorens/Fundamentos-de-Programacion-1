/**
 * @file login.c
 *
 * Funcion que captura un usuario y un password dado y convierte el nombre del
 * usuario en un archivo binario para poder comparlo con una base de datos 
 * usuarios predeterminados.
 *
 * @author Diego Martín Recillas, Iker Llorens Lara * @date 26/11/2010
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verifica(char archivo[]);
extern int login(void)
{
	int autorizado=0;
	char usuario[30];
	char pwd[30];
    char contenido[60];//Contenido del archivo=usuario+password.
	char archivo[35];//archivo es igual al usuario+la terminacion .bin.
	FILE *fp;

    #ifdef DEBUG//Compilacion condicional
        printf("Entro Login!\n");
    #endif    
	if((fp=fopen("login.bin","w+b"))==NULL)//Validacion de apertura del archivo login.bin.
	{
		printf("ERROR! No se puedo abrir el archivo (login.bin).\n");
		exit(1);
	}
	system("clear");

	printf("Nombre de Usuario:\n");
	fgets(usuario,sizeof(usuario),stdin);//Le el usuario de la entrada estandar.

	printf("Contraseña:\n");
	fgets(pwd,sizeof(pwd),stdin);//Le la contraseña de la entrada estandar.

    strcpy(contenido,usuario);//Copia usuario en contenido.
    strcat(contenido,pwd);//Concatena el usuario y el password en una sola variable.
    fwrite(contenido,1,sizeof(contenido),fp);//Escribe usuario y password en un archivo.

	fclose(fp);//Cierra el archivo login.bin
	strcpy(archivo,usuario);//Copia el usuario en la variable archivo.
	strcat(archivo,".bin");//Agrega una termiacion .bin para indicar que es un archivo binario.
	autorizado=verifica(archivo);//Llama la funcion para verificar el usuario y el password, manda archivo.
	return autorizado;//Regresa el valor dado por autorizado que a su vez es obtenido de la funcion verifica.
}

int verifica(char archivo[])
{
    FILE *fusuario;
    FILE *flogin;
    char *usuario;
    char *login;
    long lenFusr;
    long lenFlog;
    size_t result;
    int verificar;

    if((fusuario=fopen(archivo, "r+b"))==NULL)//Validacion de existencia del usuario, usando su correspondiente archivo.bin.
    {
    	system("clear");
    	printf("El Usuario no existe.\n");
    	return;
    }
    if((flogin=fopen("login.bin", "r+b"))==NULL)//Validacion de apertura del archivo login.bin.
    {
    	printf("ERROR! No se puede abrir el archivo (login.bin).\n");
		exit(1);    	
    }

    #ifdef DEBUG//Compilacion condicional
        printf("Abrio Archivos\n");
    #endif    
    fseek(fusuario,0,SEEK_END);//Escanea de principio a fin el archivo ya existente dado por el usuario.
    fseek(flogin,0,SEEK_END);//Escanea de principio a fin el archivo que se genera al ingresar los datos a verificar del usuario.

    lenFusr=ftell(fusuario);//Obtiene el tamaño del archivo dado por el usuario en bytes.
    lenFlog=ftell(flogin);//Obtiene el tamaño del archivo ya existente dado por el usuario.

    rewind(fusuario);
    rewind(flogin);

    usuario=(char*)malloc(sizeof(char)*lenFusr);//Asignar a usuario memoria del tamaño del archivo usuario.
    login=(char*)malloc(sizeof(char)*lenFlog);//Asignar a login memoria del tamaño del archivo login.

    system("clear");

    if(usuario==NULL)//validacion de la funcion malloc para var usuario.
    {
    	printf("Failed to allocate memory for var:usuario.\n");
    }
    if(login==NULL)//validacion de la funcion malloc para var login.
    {
    	printf("Failed to allocate memory for var:login.\n");
    }

    result=fread(usuario,1,lenFusr,fusuario);
    if(result!=lenFusr)//validacion de lectura.
    {
    	printf("Error de lectura de usuario.result: %d\n",result);
    }
    result=fread(login,1,lenFlog,flogin);
    if(result!=lenFlog)//validacion de lectura.
    {
    	printf("Error de lectura de login.result: %d\n",result);
    }

   	if(strcmp(usuario,login)!=0)//Comprobacion de usuario y contraseña.
   	{
   		verificar=0;
   		printf("Nombre de Usuario y/o Contraseña Incorrectos!\n");
   	}
   	else
   	{
   		printf("Bienvenido!\n");
   		verificar=1;
   	}

    fclose(fusuario);//Cierra el archivo dado por el usuario.bin
    fclose(flogin);//Cierra el archivo login.bin

    return verificar;//Regresa verificar, un 0 si es incorrecto el usuario o la contraseña o un 1 si son correctos.
}