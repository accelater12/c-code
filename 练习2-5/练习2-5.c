#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b;
	printf("����������������\n");

	printf("����A:");
	scanf("%d", &a);

	printf("����B:");
	scanf("%d", &b);

	printf("A��B��%f%%", (double)100*a/b);

	return 0;
}