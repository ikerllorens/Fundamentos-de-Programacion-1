/**
 * @file ayuda.c
 *
 * @brief Este programa despliega un menú de ayuda al usuario. El usuario elije 
 * sobre que tema necesita ayuda. El programa limpia el contenido de la terminal
 * para evitar confusiones y luego despliega la ayuda sobre lo que el usuario
 * solicitó.
 *
 * @author Diego Martín Recillas, Iker Llorens Lara * @date 04/12/2010
*/


#include <stdio.h>
#include <stdlib.h>

extern void ayuda(void)
{   
    int ayuda; //Variable para el switch

    #ifdef DEBUG //Compilación condicional para depurar
        printf("Entro Ayuda!\n");
    #endif
        
    while (1)
    {
        system("clear"); //Limpia la pantalla
        printf("Sobre qué funcionalidad necesitas ayuda? (Teclea un número y presiona enter)\n"
               "\t1) Funcionamiento general del programa\n"
               "\t2) Alta de una CD\n"
               "\t3) Modificación de un CD catalogado\n"
               "\t4) Baja de un CD catalogado\n"
               "\t5) Mostrar listado de CDs en pantalla\n"
               "\t6) Acceso como administrador\n"
               "\t7) Cerrar sesión\n"
               "\t8) Nuevo Administrador\n"
               "\t9) Volver al menú principal\n");
        scanf("%d", &ayuda); 
        getchar(); //Limpiar buffer
        switch (ayuda)
        {
            case 1:
            {
                system("clear");
                printf("Este programa tiene como objetivo catalogar álbumes del usuario. El programa funciona a partir de un menú principal desde el cual el usuario selecciona una opción, se ejecuta y lo devuelve al menú principal, donde puede elegir realizar más funciones o salir del programa. Al salir del programa los registros  de los CD se guardan en un archivo externo para que cuando el usuario vuelva a abrir el programa, los CDs que ingresó y catalogó anteriormente se encuentren catalogados y dados de alta.\n\nPresiona enter para continuar...");
                getchar(); //Esperar a que el usuario presione enter
                break;
            }
            case 2:
            {
                system("clear");
                printf("Esta función le permite al usuario dar de alta CDs nuevos a la colección. El usuario ingresa el número de catalogación en el cual quiere darlo de alta (por si el usuario gustase llevar un control de ello) y presionar enter. Después el usuario ingresa el artista del álbum, el nombre del álbum, el año y el género y presionar enter entre cada campo llenado. Se necesita iniciar sesión como administrador para utilizar esta función.\n\nPresiona enter para continuar...");
                getchar();
                break;
            }
            case 3:
            {
                system("clear");
                printf("Esta función permite al usuario modificar los CDs previamente dados de alta en el catálogo. Dentro de ésta función el usuario elige el número de CD a modificar. El programa le dará al usuario la opción de modificar el campo que deseo sin necesitar moverse por los todos los campos. Después el programa preguntará si el usuario desea hacer alguna otra modificación. En caso contrario el programa lo llevará al menú principal. Se necesita iniciar sesión como administrador para utilizar esta función.\n\nPresiona enter para continuar...");
                getchar();
                break;
            }
            case 4:
            {
                system("clear");
                printf("Esta función permite al usuario dar de baja un CD dado de alta en su catálogo. El usuario debe decirle el número de CD que quiere dar de baja. El programa le preguntará al usuario si está seguro de dar de baja el CD, y en caso de que el usuario confirme la acción el CD será dado de baja. Se necesita iniciar sesión como administrador para utilizar esta función.\n\nPresiona enter para continuar...");
                getchar();
                break;
            }
            case 5:
            {
                system("clear");
                printf("Esta función despliega al usuario todos los CDs que están dado de alta en su catálogo. Se pueden desplegar los CDs en orden ascendente por su número de Disco, año, nombre del álbum, artista o género. El usuario elige de qué  manera quiere que se desplieguen sus CDs en pantalla.\n\nPresiona enter para continuar...");
                getchar();
                break;
            }
            case 6:
            {
                system("clear");
                printf("Para iniciar sesión como administrador se debe ingresar el usuario debe ingresar su nombre de usuario con el que está registrado y presionar la tecla enter. A continuación deberá proporcionar su contraseña. El programa verificará si el usuario existe y si la contraseña proporcionada es correcta y en caso de serlo el usuario podrá utilizar las funciones que necesitan privilegio de administrador\n\nPresiona enter para continuar...");
                getchar();
                break;
            }
            case 7:
            {
                system("clear");
                printf("Si el usuario inició sesión como administrador puede cerrar su sesión y seguir ejecutando las funciones que no requieren inicio de sesión o cambiar de usuario administrador. Si el usuario no ha iniciado sesión aún el programa se lo indicará\n\nPresiona enter para continuar...");
                getchar();
                break;
            }
            case 8:
            {
                system("clear");
                printf("Si el usuario lo desea puede dar de alta a otro usuario administrador. Se pedirá el nombre de usuario nuevo y su contraseña y se guardará en un archivo binario. Se necesita iniciar sesión como administrador para utilizar esta función.\n\nPresiona enter para continuar...");
                getchar();
                break;
            }
            case 9:
            {
                system("clear");
                return;
            }
            default:
            {
                printf("Elección inválida"); //Validación
                break;
            }
        }
    }
    system("clear");
    return;
}