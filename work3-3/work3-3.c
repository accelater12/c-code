#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 1, b = 0;
	
	while (a <= 100)
	{
		if (a % 10 == 9 )            //xiaoyu
		{
			b += 1;
			a++;
		}
		else
		{
			if (a / 10 >= 9 && a % 9 != 0)
				b += 1;
				a++;
		
		}
		
	
	}

	printf("��1��100�������к���%d��9", b);
	return 0;
}