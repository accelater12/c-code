#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int exc(int x1, int y1)   //交换函数
{
	int x2, y2;
	x2 = y1;
	y2 = x1;

	return x2, y2;
}

int main()
{
	int arr1[10]={0,1,2,3,4,5,6,7,8,9};
	int arr2[10]={0,0,0,0,0,0,0,0,0,0};              //创建两个相同大小的数组
	int a=0,b=0,c=0;

	while (a <= 9)                                   //开始进行循环交换，直到完成；注意下标从0开始，所以a应该为数组元素数量-1。
	{
	    b,c=exc(arr1[a], arr2[a]);
		printf("%d    %d\n", b, c);
		a++;
	}

	return 0;

}