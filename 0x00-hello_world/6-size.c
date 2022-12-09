#include <stdio.h>
/**
 * main - Entry
 * Return - Always 0
 */
intmain(void)
{
	printf("Size of a float: %ld bytes(s)\n",sizeof(float));
	printf("Size of a long long int: %ld bytes(s)\n",sizeof(long long int));
	printf("Size of a long int: %ld bytes(s)\n",sizeof(long int));
	printf("Size of a int: %li bytes(s)\n",sizeof(int));
	printf("Size of a char: %ld bytes(s)\n",sizeof(char));
	return (0);
}
