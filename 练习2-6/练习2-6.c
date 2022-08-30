#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a;

	printf("请输入您的身高：");
	scanf("%d", &a);

	printf("您的标准体重为%3.1f。", (a - 100)*0.9);
	return 0;
}
