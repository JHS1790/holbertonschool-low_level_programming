#include <stdio.h>
/**
 * main - prints name of function
 * @argc: argument count
 * @argv: argument vector
 * Return: program exit
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
