#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a;
	printf("������һ��������");
	scanf("%d", &a);

	while (a >= 1)
	{
		printf("%d  ", a--);
	}
	return 0;
}