#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c,d, max;

	printf("�������ĸ�������\n");
	printf("����A:");  scanf("%d", &a);
	printf("����B:");  scanf("%d", &b);
	printf("����C:");  scanf("%d", &c);
	printf("����D:");  scanf("%d", &d);

	max = a;
	if (b >max)
		max = b;
	if (c > max)
		max = c;
	if (d > max)
		max = d;

	printf("���ֵΪ%d��", max);
	return 0;
}