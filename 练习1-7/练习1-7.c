#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a=0, b=0;
	int sum;                                //ȷ������int�͵ı���
	
	puts("����������������");
	printf("����1:");   scanf("%d",&a);
	printf("����2:");   scanf("%d",&b);
	sum = a + b;                            //���������ĺ�
	printf("���ǵĺ���%d", sum);


	return 0;


}