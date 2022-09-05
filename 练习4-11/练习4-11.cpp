#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a;
	printf("请输入一个正整数：");
	scanf("%d", &a);

	if (a >= 0)
	{
		
		while (a>=0)
		{
			putchar('*');
			putchar('\n');
			a--;
		}
		putchar('\n');
	}

	return 0;
}