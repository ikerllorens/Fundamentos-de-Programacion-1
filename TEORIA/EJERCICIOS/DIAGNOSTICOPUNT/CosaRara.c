#include <stdio.h>
void cambia1(int datoA, int datoB);
void cambia2(int *puntA, int *puntB);
int main(void)
{
int a = 5, b = 15;
cambia1(a,b);
printf("a= %d b= %d\n", a, b);
cambia2(&a,&b);
printf("a= %d b= %d\n", a, b);
return 0;
}
void cambia1(int datoA, int datoB)
{
int temp;
temp = datoA;
datoA = datoB;
datoB = temp;
return;
}
void cambia2(int *puntA, int *puntB)
{
int temp;
temp = *puntA;
*puntA = *puntB;
*puntB = temp;
return;
}
