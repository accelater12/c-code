#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b;
	printf("����������������\n");
	printf("����A:");  scanf("%d", &a);
	printf("����B:");  scanf("%d", &b);

	if (a == b)
		printf("A��B���");
	else
	{
		if (a > b)
			printf("A����B");
		else
			printf("AС��B");
	}


	return 0;
}