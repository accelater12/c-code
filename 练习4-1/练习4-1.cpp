#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 0;
	
	do
	{
		printf("������");
		scanf("%d", &num);
		if (num < 0)
			printf("������Ǹ�������\n");
		
	} while (num < 0);

	printf("%d��������ʾ�Ľ����",num);
	do
	{
		if (num >= 0)
		{
			printf("%d", num %10);            //���num�����һλ��
			num = num / 10;
		}
	} while (num > 0);                        //ѭ������
	printf("��");
   
	return 0;
}