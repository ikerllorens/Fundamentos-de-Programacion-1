/**
 * @file main.c
 *
 * @brief Este es el programa principal del programa cds.out. Aquí se ejecuta el
 * menú principal y se llaman a la mayoría de las funciones. El programa puede
 * recibir argumentos y actuar en base a ello. Al principio el programa carga
 * la biblioteca desde el archivo biblioteca.txt y al final lo sobreescribe y
 * guarda las modificaciones hechas durante el uso del programa.
 *
 * @author Diego Martín Recillas, Iker Llorens Lara * @date 27/11/2010
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "struct.h"

extern void cargar(catalogo disco[]);
extern void guardar(catalogo disco[]);
extern void alta(catalogo disco[]);
extern void modificar(catalogo disco[]);
extern void baja(catalogo disco[]);
extern void listado(catalogo disco[]);
extern void bitacora(catalogo disco[],int indice,int cambio);
extern int login(void);
extern void crearAdmin(void);
extern void ayuda(void);
extern void creditos(void);

int main(int argc, char **argv)
{
	catalogo disco[SIZE];
	int i;
    int opc;
    int autorizado;
    
    if (argc>2) //Validacion para evitar más argumentos de los necesarios
    {
        printf("Hay demasiados argumentos, porfavor ingrea sólo un argumento");
        exit(1);
    }
    
    autorizado=0; //Variable que indica si se ha iniciado sesión
	for(i=0;i<SIZE;i++) //Inicializacion del arreglo para evitar basura en arreglo
	{
        disco[i].ndisco=i;
		disco[i].artista[0]='\0';
		disco[i].album[0]='\0';
		disco[i].anio[0]='\0';
		disco[i].genero[0]='\0';
		disco[i].estado=0;
	}
    cargar(disco); //Cargar biblioteca.txt
    
    if (argc==2) //Si hay un argumento entra al condicional
    {
        if ((strcmp("-h", argv[1]))==0) //Si el argumento es -h mostrar la ayuda
        {
            ayuda();
            exit(0);
        }
        if ((strcmp("-c", argv[1]))==0)//Si el argumento es -h mostrar los creditos
        {
            creditos();
            exit(0);
        }
        //Si el argumento es -cds mostrar la lista de éstos
        if ((strcmp("-cds", argv[1]))==0)
        {
            listado(disco);
            exit(0);
        }
        else //Validación de argumento
        {
            printf("%s: no es un argumento valido!\n", argv[1]);
            exit(1);
        }
    }
    system("clear");
    printf("Bienvenido a iTonos, creado por Diego Martín e Iker Llorens.\n\nPresiona enter para continuar..."); //Bienvenida
    getchar(); //Espera hasta que el usuario presione enter
    system("clear");
    while (1) //Menú principal
    {
        printf("Que deseas hacer?\n");
        printf("\t1.-Alta de los títulos de CDs.\n");
        printf("\t2.-Modificacion de los titulos de CDs.\n");
        printf("\t3.-Baja de un CD catalogado.\n");
        printf("\t4.-Mostrar listado de CDs en pantalla.\n");
        printf("\t5.-Acceso como administrador.\n"); 
        printf("\t6.-Cerrar Sesión.\n");
        printf("\t7.-Nuevo Administrador.\n");
        printf("\t8.-Ayuda al Usuario.\n"); 
        printf("\t9.-Salida del sistema.\n"); 
        scanf("%d", &opc);
        switch (opc)
        {
            case 1:
            {
                if (autorizado==0)
                {
                    system("clear");
		            printf("No estás autorizado para realizar esto. Porfavor inicia sesión\n");  
                }
                else
                {
                    system("clear");
                    alta(disco);
                }
                break;
            }
            case 2:
            {
                if (autorizado==0)
                {
                    system("clear");
		            printf("No estás autorizado para realizar esto. Porfavor inicia sesión\n");
                }
                else
                {
                    system("clear");
                    modificar(disco);
                }
                break;
            }
            case 3:
            {
                if (autorizado==0)
                {
                    system("clear");
		            printf("No estás autorizado para realizar esto. Porfavor inicia sesión\n");
                }
                else
                {
                    system("clear");
		            baja(disco);
                }
                break;
            }
            case 4:
            {
                system("clear");
                listado(disco);
                break;
            }
            case 5:
            {
                getchar();
                autorizado=login();
		        break;
            }
            case 6:
            {
	           system("clear");
	           if(autorizado==0)
		       {
		          printf("No has iniciado sesión\n");
		       }
	           if(autorizado==1)
		       {
		          printf("Vuelve pronto!\n");
		          autorizado=0;
		       }
	           break;
            }
	        case 7:
	        {  
                if (autorizado==0)
                {
                    system("clear");
                    printf("No estás autorizado para realizar esto. Porfavor inicia sesión\n");
                }
                else
                {
                    getchar();
                    crearAdmin();
                }
	            break;
	        }
       	    case 8:
	        {
                ayuda();
                break;
	        }
            case 9: //Al salir guarda la biblioteca
            {
               guardar(disco);
               exit(0);
               break;    
            }
            default: //Validación de opciones
	        {
	           system("clear");
	           printf("Opción no válida!! Elije otra\n");
               break;
	        }
        }    
    }
	return 0;
}