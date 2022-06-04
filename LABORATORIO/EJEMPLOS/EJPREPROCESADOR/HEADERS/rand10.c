#include <time.h>
#include <stdlib.h>
#include "local.h"

int rand10(void)
{ 	static int firstcall=1;
	if (firstcall)
	{
		srand((unsigned int)time(NULL));
		firstcall = 0;
	}
	return ( rand()%10000 +1);
}

	
