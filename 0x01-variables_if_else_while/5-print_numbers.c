#include <stdio.h>

/**
 * main - print all single digit numbers, followed by a newline
 *
 * Return: always 0
 */

int main(void)
{
char digit = 0;

for (digit = 0; digit <= 9; digit++)
{
printf("%d", digit);
}
putchar('\n');

return (0);
}
