#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	int i = 0;
	int b = 0;
	char a[6] = {"123456"};             //char������Ҫ���{}
	char password[20] = { 0 };

	for (i = 1; i <= 3; i++)
	{
		printf("���������룺");
		scanf("%s",password);
		
		b = strcmp("123456", password);           //strcmp�����Ƚ������ַ����Ĵ�С��Ϊ0˵����ͬ��int�͡�
		if (b == 0)
		{
			printf("����������ȷ����½�ɹ���");
			break;
		}
		else
			printf("����������������롣\n");
	}
	if (i > 3)
		printf("��������ѳ���3�Σ������˳���¼");
		
	return 0;
}