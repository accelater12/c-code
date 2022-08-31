#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c,d, max;

	printf("请输入四个整数。\n");
	printf("整数A:");  scanf("%d", &a);
	printf("整数B:");  scanf("%d", &b);
	printf("整数C:");  scanf("%d", &c);
	printf("整数D:");  scanf("%d", &d);

	max = a;
	if (b >max)
		max = b;
	if (c > max)
		max = c;
	if (d > max)
		max = d;

	printf("最大值为%d。", max);
	return 0;
}