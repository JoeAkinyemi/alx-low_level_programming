#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print a random number and states whether it is positive, negative or zero.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*code passes through here*/
	if (n > 0)
	{
		prinf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	retun (0);
}
