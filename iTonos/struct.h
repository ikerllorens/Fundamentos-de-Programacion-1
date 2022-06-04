/**
 * @file struct.h
 *
 * @brief Esta biblioteca contiene la estructura de datos que se utiliza en todo el 
 * programa
 *
 * @author Diego Martín Recillas, Iker Llorens Lara * @date 27/11/2010
*/

#define SIZE 100
typedef struct
{
	int ndisco; //Número de disco, sirve como índice en el arreglo principal
	char artista[50]; //El nombre del artista
	char album[50]; //El nombre del álbum
	char anio[50]; //Año del álbum
	char genero[50]; //Género del álbum
	int estado;
    /*
     Sirve como control, sólo puede tener valor de 0 o 1, si es 0 no hay ningún
     CD almacenado en esa posición, si es 1 el CD está dado de alta
    */
}catalogo;