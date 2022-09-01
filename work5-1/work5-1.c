#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void menu()
{
	printf("#####################\n");
	printf("#####  1.play   #####\n");
	printf("#####  2.exit   #####\n");
	printf("#####################\n");
}


void game()
{
	int b;       //输入的猜测数字
	int y;
	
	y = rand()%100+1;         //创建0到100的随机数

	while (1)                 //可以进行多次猜测
	{
		printf("请选择猜测数字：");
		scanf("%d", &b);
		if (b == y)
		{
			printf("恭喜你，猜对了\n");
			break;
		}
		else
		{
			if (b < y)
				printf("猜小了\n");
			else
				printf("猜大了\n");
		}
	}
			
}
int main()
{
	menu();       //菜单展现
	int a;       //是否进行游戏的选择
	
	srand((unsigned int)time(0));      //为随机数设置一个根据时间变化的起点
	
	do
	{
		printf("请选择>-");
		scanf("%d", &a);              //是否开始游戏应该加入循环
		
		if (a == 1)           //开始游戏
		{
			game();
		           //确定开始游戏后跳出循环
		}
		else
		{
			if (a == 0)
			{
			    printf("退出游戏\n");
				
			}
			else
			{
				printf("输入错误，请重新输入\n");
			
			}
		}
	} while (a);   //开始进行下一把


	return 0;
}