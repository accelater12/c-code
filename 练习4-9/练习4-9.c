#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b;
	printf("������һ����������");
	scanf("%d", &a);

	if (a >= 0)
	{
		b = 2;
		while (b <= a)
		{
			printf("%d ",b );
			b += 2;
		}
		putchar('\n');
	}
	else
		printf("�벻Ҫ���븺��");
	return 0;
}