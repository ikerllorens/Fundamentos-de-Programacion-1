//Algoritmo Serie1a.c
//Creado por Iker Llorens el 12/09/2012
/*El objetivo de este programa es que el usiario ingrese un caracter
 y el programa le indicará si el caracter ingresado es una vocal o no*/

#include <stdio.h>

char LeerLetra(void);
int EsVocal(char letra);
void Imprime(int val, char letra);

int main(void)
{
  int val;
  char letra;
  letra=LeerLetra();
  val=EsVocal(letra);
  Imprime(val, letra);
  return 0;

}

char LeerLetra(void)
{
  char letra;
  printf("Dame una letra\n"); 
  scanf("%c", &letra);
  return letra;
}

int EsVocal(char letra)
{
  int val=0;//es consonante

  if((letra=='A')||(letra=='E')||(letra=='I')||(letra=='O')||(letra=='U')||(letra=='a')||(letra=='e')||(letra=='i')||(letra=='o')||(letra=='u'))
    {
      val=1;
      
    }
  else
    {
      val=0;
    }
  return val;
}


void Imprime(int val, char letra)
{
  if(val==1)
    {
      printf("\nLa letra que me diste es una vocal. Ten un buen día.\n");
    }
  if(val==0)
    {
      printf("\nLa letra que me diste no es una vocal. Ten un buen día.\n");
    }
}

