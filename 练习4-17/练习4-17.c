#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a;
	int i, j;
	printf("让我们来画一个三角形。\n");
	printf("三角形有几层:");
	scanf("%d", &a);
	;


	//for (i = a; i >0; i--)
	//{
	//	for (j = 1; j<=i ; j++)
	//		printf("*");
	//	putchar('\n');
	//}
	//return 0;                     //三角形的直角在左上方

	for (i = a; i >0; i--)
	{
		for (j = 1; j <= a - i; j++)
			printf(" ");             //用于输出“  ”
		for (j = 1; j<=i ; j++)
			putchar('*');
		putchar('\n');        
	}
	return 0;  



}