#include <stdio.h>

long double factorial(int n);
int fibonacci(int n);

int main(void)
{
  int Amandar;
  int Chose;
  int RFibonacci;
  long double RFactorial;

  printf("\nDame un número:\n");
  scanf("%d", &Amandar);
  getchar();
  printf("\n¿Que quieres que haga con este número?"
	 "\n1)Sacar el número factorial"
	 "\n2)Sacar el número Fibonacci\n");
  scanf("%d", &Chose);
  getchar();
  switch(Chose)
    {
    case 1:
      {
	RFactorial=factorial(Amandar);
	printf("El resultado es: %Le", RFactorial);
	break;
      }
    case 2:
      {
	RFibonacci=fibonacci(Amandar);
	printf("El resultado es: %d", RFibonacci);
	break;
      }
    default:
      {
	break;
      }
    }
  return 0;
}

long double factorial(int n)
{
  long double fact;
  long double i;

  fact=1;
  for(i=0; i<=n; i++)
    {
      fact=fact*i;
    }
  printf("\n%Le", fact);
  return fact;
}

int fibonacci(int n)
{
  if(n<2)
    {
      return n;
    }
  else
    {
      return (fibonacci(n-1)+fibonacci(n-2));
    }
}
