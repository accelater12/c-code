#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b,c;
	int sum = 0;
	printf("����������������\n");
	printf("����1��");
	scanf("%d", &a);
	c = a;
	printf("����2��");
	scanf("%d", &b);

	do {
		sum += a;
		a++;
	} while (a <=b);                   //���������� 

	printf("���ڵ���%d��С�ڵ���%d��������Ϊ%d��", c, b, sum);

	return 0;
}