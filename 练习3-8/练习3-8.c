#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int x, y,z;
	int min;
	printf("请输入三个整数。\n");

	printf("整数1：");
	scanf("%d", &x);
	printf("整数2：");
	scanf("%d", &y);
	printf("整数3：");
	scanf("%d", &z);

	min = (x > y) ?  y : x;
	min = (min > z) ? z : min;

	printf("它们之间的最小值为%d。", min);
	


	return 0;
}