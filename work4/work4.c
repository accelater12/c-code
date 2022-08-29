#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a1,a2;
	int b1,b2;
	scanf("%d %d",&a1,&b1);
	
	a2 = b1;
	b2 = a1;
	printf("%d %d", a2, b2);
	return 0;
}