#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	
	
	printf("%d\n", 6 / 5);
	printf("%f\n", 6.0 / 5);
	printf("%f\n", 6 / 5.0);
	printf("%f\n", 6.0 / 5.0);      //常量的验证
	
	
	int a, b;
	double c, d;
	printf("%d\n",sizeof(a/b));
	printf("%d\n", sizeof(a / c)); 
	printf("%d\n", sizeof(c / b));
	printf("%d\n", sizeof(c/ d));    //通过变量的字节长度变化来判断



	return 0;
}
