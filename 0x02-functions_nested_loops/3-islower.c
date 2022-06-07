#include <stdio.h>

/**
  * _is_lower - it helps check for the lower cases in a string
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
