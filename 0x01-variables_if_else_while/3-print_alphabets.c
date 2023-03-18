#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet using ascii values.
 *
 * Return: Always 0
 */
int main(void)
{
char az;
char AZ;

for (az = 'a'; az <= 'z'; az++)
{
putchar(az);
}
for (AZ = 'A'; AZ <= 'Z'; AZ++)
{
putchar(AZ);
}
putchar('\n');
return (0);
}
