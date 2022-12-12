#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *Main - Assign a random number to n
 *Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%c is positive \n", n);
if (n == 0)
printf("%c is zero \n", n);
if (n < 0)
printf("%c is negative \n", n);
return (0);
}
