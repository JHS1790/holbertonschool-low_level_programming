#include "holberton.h"
/**
 * jack_bauer - ends my sanity with the click of a button!
 * Return: void
 */
void jack_bauer(void)
{
	int fir;
	int sec;
	int thr;
	int frt;

	fir = 0;
	while (fir < 3)
	{
		sec = 0;
		while (sec <= 9)
		{
			thr = 0;
			while (thr < 6)
			{
				frt = 0;
				while (frt < 10)
				{
					_putchar('0' + fir);
					_putchar('0' + sec);
					_putchar(58);
					_putchar('0' + thr);
					_putchar('0' + frt);
					_putchar(10);
					frt++;
				}
				thr++;
			}
			sec++;
			if (fir == 2 && sec == 4)
				return;
		}
		fir++;
	}
}
