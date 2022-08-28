#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a=0, b=0;
	int sum;                                //确定三个int型的变量
	
	puts("请输入两个整数。");
	printf("整数1:");   scanf("%d",&a);
	printf("整数2:");   scanf("%d",&b);
	sum = a + b;                            //两个整数的和
	printf("它们的和是%d", sum);


	return 0;


}