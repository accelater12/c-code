#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a=0;                                           //a为int型的变量
	printf("请输入一个整数：");
	scanf("%d",&a);                                    //读取输入的整数
	printf("该整数加上10的结果是%d。",a+10);             //输出计算结果
	return 0;
}