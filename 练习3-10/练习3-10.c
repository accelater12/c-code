#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void f(int x)
{
	if (x <= 10)
		printf("���ǵĲ�С�ڵ���10��");
	else
		printf("���ǵĲ����10��");
}

int main()
{
	int a, b, c;                  //cΪ��
	printf("����������������\n");
	printf("����1��");
	scanf("%d", &a);
	printf("����2��");
	scanf("%d", &b);
	
	if (a> b&&a==b)
	{
		c = a - b;
		f(c);
	}
	else
	{
		c = b - a;
		f(c);
	}

	return 0;
}