#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - da mane git, ya zee?
 * @argc: dat sound ya mak wen da grots be actin up
 * @argv: dat sound da buggy mak wen da mekboy don drive too gud
 * Return: Da Waggh never goz bak, ya 'ear?!
 */
int main(int argc, char *argv[])
{
	int a, b, c;
	int (*op_funk)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL || argv[2][1] != 0)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op_funk = get_op_func(argv[2]);
	c = op_funk(a, b);
	printf("%d\n", c);
	return (0);
}
