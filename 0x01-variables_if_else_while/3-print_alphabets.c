#include <stdio.h>

int main(void)
{
  /**
    * main - print alphabet capital & small
    * Return: 0 in success
  */
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
        putchar(letter);
    for (letter = 'A'; letter <= 'Z'; letter++)
        putchar(letter);
    putchar('\n');

    return 0;
}
