#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b;

	printf("请输入一个整数：");
	scanf("%d", &a);

	if (a >= 0)
		printf("该整数的绝对值为%d", a);
	else
		printf("该整数的绝对值为%d", b = -a);
	return 0;
}