#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a;
	printf("�������·ݡ�\n");
	printf("�·ݣ�");
	scanf("%d", &a);

	switch (a)
	{
	case 1:
	case 2:
		printf("�Ƕ�����");
		break;
	case 3:
	case 4:
	case 5:
		printf("�Ǵ�����");
		break;
	case 6:
	case 7:
	case 8:
		printf("���ļ���");
		break;
	case 9:
	case 10:
	case 11:
		printf("���＾��");
		break;
	case 12:
		printf("�Ƕ�����");
		break;
	
	}

	
	return 0;

}