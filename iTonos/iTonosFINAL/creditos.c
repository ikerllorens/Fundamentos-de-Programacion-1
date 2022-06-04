/**
 * @file creditos.c
 *
 * @brief Este programa despliega los créditos de los creadores de cds.out, 
 * coloquialmente llamado iTonos.
 *
 * @author Diego Martín Recillas, Iker Llorens Lara * @date 04/12/2010
*/

#include <stdio.h>

extern void creditos(void)
{
    system("clear");
    #ifdef DEBUG
    	printf("Entro Creditos!\n");//Compilación condicional para depuración
    #endif
    printf("Programa creado por Diego Martín Recillas e Iker Llorens Lara como proyecto final de la materia Fundamentos de Programación y Laboratorio.\n\nLa entrega de este proyecto se realizó el día 5 de Diciembre de 2012, para los profesores Guillermo Gómez y Edgar Ortiz.\n\n\nGracias a los beta testers (enterrados 6 metros bajo tierra en un lugar lejano) por detectar los errores. Es importante mencionar que no se hirieron Macs ni terminales de Antares en la realización de este proyecto. Desafortunadamente no podemos decir lo mismo de las Windows.\n\nEsperamos obtener una buena calificación (o sufrirán el mismo destino de los beta testers) y gracias a los dos profesores por el semestre. :)\n\nPresione una tecla para continuar...");
    getchar(); //Hasta que el usuario presiones enter
    return;
}