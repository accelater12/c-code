#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a;
	printf("������һ��������\n");
	printf("������");
	scanf("%d", &a);

	switch (a % 2)
	{
	case 0:
		printf("��������ż����");
		break;
	case 1:
		printf("��������������");
		break;

	}



	return 0;
}