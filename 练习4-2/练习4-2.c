#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num = 0;
	int a = 0;

	do {                     
		printf("请输入一个整数：");
		scanf("%d", &num);
		if (num < 0)                         //num是否大于0
			printf("请输入一个非负整数。\n");
	} while (num < 0);                     

	printf("%d的位数是：",num);
	do{
		num = num / 10;                    //num向右移一位
		a++;                               //位数加一
	} while (num > 0);
	
	printf(" % d。", a);
	
	return 0;
}