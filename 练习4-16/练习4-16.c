#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b;
	int i, j;
	printf("����������������Ϊ���Ϳ�\n");
	printf("����1��");
	scanf("%d", &a);
	printf("����2��");
	scanf("%d", &b);

	if (a >= b)
	{
		for (i = 1; i <= b;i++)
		{
			for (j = 1; j <= a; j++)
				printf("*");
			putchar('\n');
		}
	}
	else 
	{
		for (i = 1; i <= a;i++)
		{
			for (j = 1; j <= b; j++)
				printf("*");
			putchar('\n');
		}
	}


	
	return 0;

}