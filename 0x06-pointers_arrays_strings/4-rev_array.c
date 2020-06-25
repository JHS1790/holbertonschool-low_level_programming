 #include "holberton.h"
/**
 * reverse_array - reverses array
 * @a: array to be reversed
 * @n: length of array
 */
void reverse_array(int *a, int n)
{
	int *b = a, p = 0, c;

	while (p <= n)
	{
		b++;
		p++;
	}
	b = b - 2;
	p = p - 2;
	for (; p >= (n / 2); p--)
	{
		c = *a;
		*a = *b;
		*b = c;
		a++;
		b--;
	}
}
