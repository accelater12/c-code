#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int f(int x, int y)
{
	if (x % y == 0)
		return y;
	else
		return f(y, x % y);                //运用辗转相除法求最大公约数
}
int main()
{
	int a,b,c;
	printf("输入的两个整数为");
	scanf("%d %d",&a,&b);

	c = f(a, b);
	printf("两个整数的最大公约数为%d", c);
	
	return 0;
}