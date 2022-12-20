#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme
 * Return: 0
 */

int main(void)
{
	int password[100];
	int x, sum, n;

	sum = 0;

	srand (time(NULL));

	for (x = 0 ; x < 100 ; x++)
	{
		password[x] = rand() % 78;
		sum += (password[x] + '0');
		putchar(password[x] + '0');
		
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n +'0');
			break;
		}
	}
	return (0);
}
