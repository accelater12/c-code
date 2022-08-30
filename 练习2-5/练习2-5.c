#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b;
	printf("请输入两个整数。\n");

	printf("整数A:");
	scanf("%d", &a);

	printf("整数B:");
	scanf("%d", &b);

	printf("A是B的%f%%", (double)100*a/b);

	return 0;
}