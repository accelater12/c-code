#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10 };
	int a;
	int left, right, mid;

	left = 0;
	right = sizeof(arr) / sizeof(arr[0]) - 1;
	mid = (left + right) / 2;
   
	
	while (1)
	{
		printf("���������֣�");
		scanf("%d", &a);
		if (a <= arr[right])
		{
			while (a != arr[mid])
			{
				if (a < arr[mid])
					right = mid - 1;
				else
					left = mid + 1;

			}
			printf("�ҵ��ˣ��±���%d\n", mid);
			break;

		}
		else
			printf("����������ڷ�Χ�ڣ�����������\n");
	}


	return 0;

}