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
printf("%d is positive", n);
if (n == 0)
printf("%d is zer", n);
if (n < 0)
printf("%d is negative", n);
return (0);
}
