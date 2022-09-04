#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 0;
	
	do
	{
		printf("整数：");
		scanf("%d", &num);
		if (num < 0)
			printf("请输入非负整数。\n");
		
	} while (num < 0);

	printf("%d的逆向显示的结果是",num);
	do
	{
		if (num >= 0)
		{
			printf("%d", num %10);            //输出num的最后一位数
			num = num / 10;
		}
	} while (num > 0);                        //循环条件
	printf("。");
   
	return 0;
}