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


	//for (i = a; i >0; i--)
	//{
	//	for (j = 1; j<=i ; j++)
	//		printf("*");
	//	putchar('\n');
	//}
	//return 0;                     //�����ε�ֱ�������Ϸ�

	for (i = a; i >0; i--)
	{
		for (j = 1; j <= a - i; j++)
			printf(" ");             //���������  ��
		for (j = 1; j<=i ; j++)
			putchar('*');
		putchar('\n');        
	}
	return 0;  



}