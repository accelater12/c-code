#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b;
	printf("请输入两个整数。\n");
	
	
	printf("整数A：");      //可以先输出字符，再输入a值，不必一次输出完。
	scanf("%d", &a);       //输入a的值
	printf("整数B：");
	scanf("%d", &b);      //输入b的值        


	printf("它们的和是%d，积是%d。", a + b, a * b);
	return 0;

}