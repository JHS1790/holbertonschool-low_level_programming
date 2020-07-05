#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints name of function
 * @argc: argument count
 * @argv: argument vector
 * Return: program exit
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		putchar('0');
		putchar('\n');
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!(argv[i][j] > 47 && argv[i][j] < 58))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
