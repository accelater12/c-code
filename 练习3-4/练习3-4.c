#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b;
	printf("请输入两个整数：\n");
	printf("整数A:");  scanf("%d", &a);
	printf("整数B:");  scanf("%d", &b);

	if (a == b)
		printf("A和B相等");
	else
	{
		if (a > b)
			printf("A大于B");
		else
			printf("A小于B");
	}


	return 0;
}