#include <stdio.h>

/**
 * main - print all single digit numbers base 16 using putchar, followed by a newline
 *
 * Return: always 0
 */

int main(void)
{
int x = 0;

for (x = '0'; x <= '9'; x++)
{
putchar(x);
}
for (x = 'a'; x <= 'f'; x++)
{
putchar(x);
}

putchar('\n');

return (0);
}
