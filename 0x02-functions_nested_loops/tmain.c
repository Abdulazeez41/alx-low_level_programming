#include <stdio.h>


void print(void)
{
	int i,j,k,l,m;

	for (i = 0; i <= (1024 / 3); i++)
	{
		k = i * 3;
		l = l + k;
	}
	for (j = 0; j <= (1024 / 5); j++)
	{
		if(!(j % 3 == 0))
		{
			m = 5 * j;
			l = l + m;
		}
	}
	printf("%d ", l);
	printf("\n");
}

int main(void)
{
	print();
	return (0);
}
