#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int arr[10];
	scanf("%d %d %d  %d %d %d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5],&arr[6],&arr[7],&arr[8],&arr[9]);
	
	int max = arr[0];                //设最大值max为arr[0]
	if (arr[1] > max)
		max = arr[1];
	if (arr[2] > max)
		max = arr[2];
	if (arr[3] > max)
		max = arr[3];
	if (arr[4] > max)
		max = arr[4];
	if (arr[5] > max)
		max = arr[5];
	if (arr[6] > max)
		max = arr[6];
	if (arr[7] > max)
		max = arr[7];
	if (arr[8] > max)
		max = arr[8];
	if (arr[9] > max)
		max = arr[9];        // 另max与每一个数值相互比较，将两者中的较大值再赋予max
	
	printf("%d", max);     

	return 0;
}