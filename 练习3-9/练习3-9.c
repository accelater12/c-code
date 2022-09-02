#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, z;
	printf("请输入三个整数。\n");
	printf("整数1：");
	scanf("%d", &x);
	printf("整数2：");
	scanf("%d", &y);
	printf("整数3：");
	scanf("%d", &z );

	if (x == y && x == z)
		printf("三个整数相等");
	else if (x == y || x == z || y == z)
		printf("有两个整数相等");
	else
		printf("三个整数各不相同");


	return 0;
}


