#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num = 0;
	int a = 0;

	do {                     
		printf("������һ��������");
		scanf("%d", &num);
		if (num < 0)                         //num�Ƿ����0
			printf("������һ���Ǹ�������\n");
	} while (num < 0);                     

	printf("%d��λ���ǣ�",num);
	do{
		num = num / 10;                    //num������һλ
		a++;                               //λ����һ
	} while (num > 0);
	
	printf(" % d��", a);
	
	return 0;
}