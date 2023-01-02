#include "main.h"
/**
* _memset - a function that fills memory with a constant byte
* @x: char
* @y: char
* @z: int
* Return: a pointer to memory area s
**/
char *_memset(char *x, char y, unsigned int z)
{
	unsigned int i;

	for (i = 0; i < z ; i++)
	{
		x[i] = y;
	}
	return (x);
}
