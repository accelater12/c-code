#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int x, y,z;
	int min;
	printf("����������������\n");

	printf("����1��");
	scanf("%d", &x);
	printf("����2��");
	scanf("%d", &y);
	printf("����3��");
	scanf("%d", &z);

	min = (x > y) ?  y : x;
	min = (min > z) ? z : min;

	printf("����֮�����СֵΪ%d��", min);
	


	return 0;
}