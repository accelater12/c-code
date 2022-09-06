#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		if (i == 0)
		{
			for (j = 0; j <= 9; j++)
				if (j == 0)
					printf("  |");
				else
					printf("%3d", j);
			putchar('\n');
			printf("-----------------------------------\n");
		}
		else
		{
			for (j = 0; j <= 9; j++)
				if (j == 0)
					printf("%2d|", i);
				else
					printf("%3d",i * j);
			putchar('\n');
		}
	}
	return 0;
}