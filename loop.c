#include <stdio.h>

int main()
{

	int a, b, c;

	for (a = 0; a <= 2; a = a + 1)
	{
		for (b =0; b <= 2; b = b + 1)

		{
			for (c =0; c <= 2; c = c + 1)
			{
				printf("%d%d%d", a, b, c);

			}
			printf("\n");	

		}

	}

	return 0;
}
