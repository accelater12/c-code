#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a;
	
	printf("请输入一个实数：");
	scanf("%lf", &a);

	printf("该实数为%f。", a);

	return 0;

}