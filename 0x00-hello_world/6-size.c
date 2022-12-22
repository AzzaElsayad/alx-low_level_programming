#include <stdio.h>

/**
 * main - main block
 *  Return: 0
 */

int main(void)
{
	int i;
	  char c;
	    float f;
	      long int l;
		long long int ll;
		 printf("size of a char : %lu byte(s)\n", sizeof(c));
		 printf("size of a int : %lu byte(s)\n", sizeof(i));
		 printf("size of a long int : %lu byte(s)\n", sizeof(l));
		 printf("size of a long long int : %lu byte(s)\n", sizeof(ll));
		 printf("size of a float : %lu byte(s)\n", sizeof(f));
	return (0);
}
