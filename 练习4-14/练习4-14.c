#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int i = 0;

	printf("��ʼ��ֵ��cm����");
	scanf("%d", &a);
	printf("������ֵ��cm����");
	scanf("%d", &b);
	printf("�����ֵ��cm����");
	scanf("%d", &c);

	for (i = a; i <= b; i += c)
		printf("%dcm    %.2fkg\n", i, (i - 100) * 0.9);

	return 0;
}