#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int x, y;
	printf("����������������\n");

	printf("����1��");
	scanf("%d", &x);
	printf("����2��");
	scanf("%d", &y);

	if (x < y)
		printf("���ǵĲ���%d", y - x);
	else
		printf("���ǵĲ���%d", x- y);


	return 0;
}