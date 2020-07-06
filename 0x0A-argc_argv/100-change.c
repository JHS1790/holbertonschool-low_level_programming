#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints coins for change
 * @argc: argument count
 * @argv: argument vector
 * Return: program exit
 */
int main(int argc, char *argv[])
{
	int coins = 0, change;

	if (argc != 2)
	{
		printf("Error");
		return(1);
	}
	change = atoi(argv[1]);
	coins += change / 25;
	change %= 25;
	coins += change / 10;
	change %= 10;
	coins += change / 5;
	change %= 5;
	coins += change / 1;
	change %= 1;
	printf("%d\n", coins);
	return(0);
}
