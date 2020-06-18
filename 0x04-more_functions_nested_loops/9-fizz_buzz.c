#include <stdio.h>
/**
 * main - my wet paper bag
 * Return: exits program
 */
int main(void)
{
	int n;

	for (n = 1 ; n <= 100 ; n++)
	{
		if (!(n % 3 == 0 || n % 5 == 0))
			printf("%d ", n);
		else if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else if (n % 5 == 0 && !(n == 100))
			printf("Buzz ");
		else
			printf("Buzz\n");
	}
	return (0);
}
