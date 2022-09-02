#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void f(int x)
{
	if (x <= 10)
		printf("它们的差小于等于10。");
	else
		printf("它们的差大于10。");
}

int main()
{
	int a, b, c;                  //c为差
	printf("请输入两个整数。\n");
	printf("整数1：");
	scanf("%d", &a);
	printf("整数2：");
	scanf("%d", &b);
	
	if (a> b&&a==b)
	{
		c = a - b;
		f(c);
	}
	else
	{
		c = b - a;
		f(c);
	}

	return 0;
}