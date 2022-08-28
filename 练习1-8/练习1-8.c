#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c;
	int sum;                                //确定四个int型的变量

	puts("请输入两个整数。");
	printf("整数1:");   scanf("%d", &a);
	printf("整数2:");   scanf("%d", &b);
	printf("整数3:");   scanf("%d", &c);
	sum = a + b + c;                            //三个整数的和
	printf("它们的和是%d", sum);


	return 0;
}