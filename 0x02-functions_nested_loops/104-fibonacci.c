#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	unsigned long int i, bef = 1, aft = 2, l = 1000000000, bef1, bef2, aft1, aft2;

	printf("%ld", bef);

	for (i = 1 ; i < 91 ; i++)
	{
		printf(", %ld", aft);
		aft += bef;
		bef = aft - bef;
	}

	aft1 = (aft / l);
	aft2 = (aft % l);
	bef1 = (bef / l);
	bef2 = (bef % l);

	for (i = 92 ; i < 99 ; ++i)
	{
		printf(", %ld", aft1 + (aft2 / l));
		printf("%ld", aft2 % l);
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft2 + bef2;
		bef2 = aft2 - bef2;
	}
	printf("\n");
	return (0);
}
