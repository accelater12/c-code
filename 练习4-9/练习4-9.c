#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b;
	printf("请输入一个正整数：");
	scanf("%d", &a);

	if (a >= 0)
	{
		b = 2;
		while (b <= a)
		{
			printf("%d ",b );
			b += 2;
		}
		putchar('\n');
	}
	else
		printf("请不要输入负数");
	return 0;
}