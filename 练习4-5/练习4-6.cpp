#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a;
	printf("������һ��������");
	scanf("%d", a);

	if (a >= 0)
	{
		while (a >= 0)
		{
			printf("%d", a);
			a--;
		}
		putchar('\n');
	}
	return 0;
}