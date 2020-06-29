#include "holberton.h"
/**
 * print_chessboard - prints the chess board
 * @a: row size?
 */
void print_chessboard(char (*a)[8])
{
	int b = 0, c = 0;

	while (b < 8)
	{
		_putchar(a[b][c]);
		c++;
		if (c == 8)
		{
			_putchar('\n');
			c = 0;
			b++;
		}
	}
}
