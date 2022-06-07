#include <stdio.h>
#include "main.h"

/**
  * print_alphabet - this print alpha in lowercase
  *
  * Return: void
  */

void print_alphabet(void)
{
	char a = 'a';
	char z = 'z';

	while (a <= z)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
