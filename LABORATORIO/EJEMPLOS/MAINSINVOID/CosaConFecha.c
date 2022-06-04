#include <stdio.h>

void ImprimeFecha(int llegada[]);

int main(int argc, char *argv[])
{
  int i;
  int a;
  int valida;
  int fecha[3];

  valida=0;
  for(i=1; i<argc; i++)
    {
      a=sscanf(argv[i], "%d", &fecha[i-1]);
      valida=valida+a;
    }
  if(valida==3)
    {
      ImprimeFecha(fecha);
    }
  return 0;
}

void ImprimeFecha(int llegada[])
{
  printf("%d/", llegada[0]);
  switch(llegada[1])
    {
    case 1:
      {
	printf("Ene/");
	break;
      }
    case 2:
      {
	printf("Feb/");
	break;
      }
    case 3:
      {
	printf("Mar/");
	break;
      }
    case 4:
      {
	printf("Abr/");
	break;
      }
    case 5:
      {
	printf("May/");
	break;
      }
    case 6:
      {
	printf("Jun/");
	break;
      }
    case 7:
      {
	printf("Jul/");
	break;
      }
    case 8:
      {
	printf("Ago/");
	break;
      }
    case 9:
      {
	printf("Sep/");
	break;
      }
    case 10:
      {
	printf("Oct/");
	break;
      }
    case 11:
      {
	printf("Nov/");
	break;
      }
    case 12:
      {
	printf("Dic/");
	break;
      }
    default:
      {
	break;
      }
    }
   printf("%d\n", llegada[2]);
   return;
}
