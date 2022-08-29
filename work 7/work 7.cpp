#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b, c;
	int max, m, min;
	scanf("%d %d %d", &a, &b, &c);           //输入a，b，c三个的数值

	max = a;
	if (b > max)
		max = b;
	if(c>max)
		max=c;                              //求出最大值
	

	min = a;
	if (b <min)
		min = b;
	if (c <min)
		min = c;                          //求出最小值

	m = a;
	if (m<max && m>min)
		m = a;
	else
	{
		m = b;
		if (m<max && m>min)
			m = b;
		else
			m = c;
	}


	printf("%d %d %d", max,m,min);
	return 0;
}