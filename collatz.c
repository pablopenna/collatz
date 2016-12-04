#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void collatz(int * num)
{
	if(*num%2==0)
	{
		*num = *num / 2;
	}
	else
	{
		*num = *num * 3 + 1;
	}
}

int main()
{
	int numero = 0;
	printf("Insert a number to use the Conjecture of Collatz on it:");
	bool proceder = false;

	if(scanf("%d",&numero)==1)
	{
		printf("It IS a Number: %d \n", numero);
		proceder=true;

	}
	else
	{
		printf("It is NOT a Number: %d \n", numero);
	}
	if(proceder)
	{
		printf("\nBeginning operations...");
		printf("\n-> %d", numero);
		while(numero>1)
		{
			collatz(&numero);
			printf("\n-> %d", numero);
		}
		printf("\n");
	}
	return 0;
}


