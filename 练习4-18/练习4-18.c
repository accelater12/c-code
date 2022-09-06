#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a;
	int i, j;
	printf("让我们来画一个三角形。\n");
	printf("三角形有几层:");
	scanf("%d", &a);
	;

	for (i = 1; i <=a; i++)
	{
		for (j = 1; j <= a - i; j++)
			printf(" ");             //用于输出“  ”
		for (j = 1; j <= 2 * i - 1; j++)
			putchar('*');            //用于输出“*”

		putchar('\n');
	}
	return 0;
}
