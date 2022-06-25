#include <stdio.h>

/**
  * _islower - it helps check for the lower cases in a string
  * @c: this check for the character
  * Return: if it is lower case, otherwise 0
  */
int _islower(int c)
{
	/* According to the ASCII, a character is stored as integer*/
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
