#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c,min;
	
	printf("����������������\n");
	printf("����A:");  scanf("%d", &a);
	printf("����B:");  scanf("%d", &b);
	printf("����C:");  scanf("%d", &c);

	min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;

	printf("��СֵΪ%d��", min);
	return 0;
}