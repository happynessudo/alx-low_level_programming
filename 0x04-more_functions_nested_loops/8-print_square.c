#include "main.h"

/**
 * print_square - prints hashes squares.
 * @size: size of the square.
 *
 * Return: no return.
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		_putchar(35);
	}
	if (i != size - 1)
		_putchar('\n');
}
