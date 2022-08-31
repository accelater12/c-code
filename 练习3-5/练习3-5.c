#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c,min;
	
	printf("请输入三个整数。\n");
	printf("整数A:");  scanf("%d", &a);
	printf("整数B:");  scanf("%d", &b);
	printf("整数C:");  scanf("%d", &c);

	min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;

	printf("最小值为%d。", min);
	return 0;
}