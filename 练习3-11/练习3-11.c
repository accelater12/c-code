#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a;
	printf("请输入月份。\n");
	printf("月份：");
	scanf("%d", &a);

	switch (a)
	{
	case 1:
	case 2:
		printf("是冬季。");
		break;
	case 3:
	case 4:
	case 5:
		printf("是春季。");
		break;
	case 6:
	case 7:
	case 8:
		printf("是夏季。");
		break;
	case 9:
	case 10:
	case 11:
		printf("是秋季。");
		break;
	case 12:
		printf("是冬季。");
		break;
	
	}

	
	return 0;

}