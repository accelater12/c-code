#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a;
	int i, j;
	printf("����������һ�������Ρ�\n");
	printf("�������м���:");
	scanf("%d", &a);
	;

	for (i = 1; i <=a; i++)
	{
		for (j = 1; j <= a - i; j++)
			printf(" ");             //���������  ��
		for (j = 1; j <= 2 * i - 1; j++)
			putchar('*');            //���������*��

		putchar('\n');
	}
	return 0;
}
