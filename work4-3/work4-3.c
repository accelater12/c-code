#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int f(int x)
{
	int a;
	a = (5 * x) + (4 * 10 * x) + (3 * 100 * x) + (2 * 1000 * x) + (10000 * x);    //n为x时sn的数值

	return a;

}

int main()
{
	int i=1,a=0;
	while (i <= 5)
	{
		a += f(i);
		i++;
	}
	printf("Sn=a+aa+aaa+aaaa+aaaaa的前5项之和为%d", a);
}