#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b;

	printf("������һ��������");
	scanf("%d", &a);

	if (a >= 0)
		printf("�������ľ���ֵΪ%d", a);
	else
		printf("�������ľ���ֵΪ%d", b = -a);
	return 0;
}