include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int x, i;

	for (x = 48 ; x <= 56 ; x++)
	{
		for (i = 49 ; i <= 57 ; i++)
		{
			if (i > x)
			{
				putchar(x);
				putchar(i);
				if (x != 56 || i != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
