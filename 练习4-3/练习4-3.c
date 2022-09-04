#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b,c;
	int sum = 0;
	printf("请输入两个整数。\n");
	printf("整数1：");
	scanf("%d", &a);
	c = a;
	printf("整数2：");
	scanf("%d", &b);

	do {
		sum += a;
		a++;
	} while (a <=b);                   //计算整数和 

	printf("大于等于%d，小于等于%d的整数和为%d。", c, b, sum);

	return 0;
}