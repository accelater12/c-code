#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b,c ,d;

	printf("��������������a��b��");
	scanf("%d %d", &a, &b);

	if (a == b)
	{
		c = (a == b);
		printf("���������ʱ�������������Ľ��Ϊ%d\n",c);

	}
	else
	{
		c = (a == b);
		printf("�����������ʱ�������������Ľ��Ϊ%d\n", c);
		if (a > b)
		{
			d = (a > b);
			printf("��a>bʱ����>������Ľ��Ϊ%d", c);
		}
		else
		{
			d = (a > b);
			printf("��a<bʱ����>������Ľ��Ϊ%d", c);
		}
	}
	     
          
	




	return 0;
}