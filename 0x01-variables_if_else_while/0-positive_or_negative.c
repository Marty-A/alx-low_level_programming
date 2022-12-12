#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Assign a random number to n
 *Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%ld is positive \n", n);
if (n == 0)
printf("%ld is zero \n", n);
if (n < 0)
printf("%ld is negative \n", n);
return (0);
}
