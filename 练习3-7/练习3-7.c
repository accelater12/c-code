#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int x, y;
	printf("请输入两个整数。\n");

	printf("整数1：");
	scanf("%d", &x);
	printf("整数2：");
	scanf("%d", &y);

	if (x < y)
		printf("它们的差是%d", y - x);
	else
		printf("它们的差是%d", x- y);


	return 0;
}