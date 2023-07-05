#include <stdio.h>

modify_my_char_var(char *cc, char ccc)  
{
	*cc = 'o';
	ccc = 'l';
	printf("Address of '*cc' in modify my var function: %p\n", cc);
	printf("Address of 'ccc' %p\n", &ccc);
	printf("Value of 'cc' in modify my var function: %c\n", *cc);
}

/**
 *  * main - Solve me
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';

	printf("Address of 'p' before modification: %p\n", p);
	printf("Address of 'c' %p\n", &c);
	printf("Value of 'c' before modification: %c\n", c);
	printf("Value of 'p' before modification: %c\n", p);
	modify_my_char_var(p, c);
	printf("Address of 'p' after modification: %p\n", p);
	printf("Address of 'c' after modification: %p\n", &c);
	printf("Value of 'c' after modification: %c\n", c);
	printf("Value of 'p' after modification: %c\n", p);
	return (0);
}
