#include <stdio.h>


void print(void)
{
	int i = 48;
	int j = 48;

	while ((i < 58) && (j < 58))
	{
		putchar(i);
		putchar(j);
		if ((i == 57) && (j == 57))
		{
			i++;
			j++;
		}
		else
		{
		putchar(44);
		putchar(32);
		i++;
		}
	}
	putchar('\n');
}

int main(void)
{
	print();
	return (0);
}
