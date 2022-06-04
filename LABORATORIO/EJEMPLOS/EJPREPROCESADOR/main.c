#include "funciones.h"

int main(void)
{
  bandera f;
  contador complicated;
  for(complicated=0; complicated<=10; complicated++)
    {
      f=complicated%2;
      imprimeMsj(f);
    }  
return 0;
}
