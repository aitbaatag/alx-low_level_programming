#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, i, l;

	for (x = 48; x < 58; x++)
	{
		for (i = 49; i < 58; i++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > i && i > x)
				{
					putchar(x);
					putchar(i);
					putchar(l);
					if (x != 55 || i != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
