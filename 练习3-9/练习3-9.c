#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, z;
	printf("����������������\n");
	printf("����1��");
	scanf("%d", &x);
	printf("����2��");
	scanf("%d", &y);
	printf("����3��");
	scanf("%d", &z );

	if (x == y && x == z)
		printf("�����������");
	else if (x == y || x == z || y == z)
		printf("�������������");
	else
		printf("��������������ͬ");


	return 0;
}


