
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b;
	int n, m;

	printf("����������������\n");
	printf("����A:");
	scanf("%d", &a);           //��������A
	printf("����B:");
	scanf("%d", &b);            //��������B

	n = a * 100;
	m = b;
	printf("A��ֵ��B��%d%%", n / m);

	return 0;
}