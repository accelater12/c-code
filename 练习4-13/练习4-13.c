#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	printf("请输入一个整数：");
	scanf("%d", &a);

	for (b = 0; b < a; b++)
		printf("%d", arr[b % 10]);

	return 0;
}