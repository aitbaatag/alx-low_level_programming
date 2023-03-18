#include <stdio.h>
/**
 * main - Entry point Prints numbers of base 10 starting at 0
 *
 * Return: Always 0
 */
int main(void)
{
int i;
i = 0;
while (i < 10)
{
printf("%d", i);
i++;
}
putchar('\n');
return (0);
}
