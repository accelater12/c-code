#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c;
	int sum;                                //ȷ���ĸ�int�͵ı���

	puts("����������������");
	printf("����1:");   scanf("%d", &a);
	printf("����2:");   scanf("%d", &b);
	printf("����3:");   scanf("%d", &c);
	sum = a + b + c;                            //���������ĺ�
	printf("���ǵĺ���%d", sum);


	return 0;
}