#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b,c ,d;

	printf("请输入两个整数a和b：");
	scanf("%d %d", &a, &b);

	if (a == b)
	{
		c = (a == b);
		printf("若两数相等时，其相等运算符的结果为%d\n",c);

	}
	else
	{
		c = (a == b);
		printf("若两数不相等时，其相等运算符的结果为%d\n", c);
		if (a > b)
		{
			d = (a > b);
			printf("若a>b时，其>运算符的结果为%d", c);
		}
		else
		{
			d = (a > b);
			printf("若a<b时，其>运算符的结果为%d", c);
		}
	}
	     
          
	




	return 0;
}