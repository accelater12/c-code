
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b;
	int n, m;

	printf("请输入两个整数。\n");
	printf("整数A:");
	scanf("%d", &a);           //输入整数A
	printf("整数B:");
	scanf("%d", &b);            //输入整数B

	n = a * 100;
	m = b;
	printf("A的值是B的%d%%", n / m);

	return 0;
}