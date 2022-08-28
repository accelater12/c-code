#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0;
	
	printf("请输入一个整数");
	scanf("%d", &a);
	printf("该整数的结果是：%d", a - 10);
	
	return 0;
}