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
	int b;       //����Ĳ²�����
	int y;
	
	y = rand()%100+1;         //����0��100�������

	while (1)                 //���Խ��ж�β²�
	{
		printf("��ѡ��²����֣�");
		scanf("%d", &b);
		if (b == y)
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
		else
		{
			if (b < y)
				printf("��С��\n");
			else
				printf("�´���\n");
		}
	}
			
}
int main()
{
	menu();       //�˵�չ��
	int a;       //�Ƿ������Ϸ��ѡ��
	
	srand((unsigned int)time(0));      //Ϊ���������һ������ʱ��仯�����
	
	do
	{
		printf("��ѡ��>-");
		scanf("%d", &a);              //�Ƿ�ʼ��ϷӦ�ü���ѭ��
		
		if (a == 1)           //��ʼ��Ϸ
		{
			game();
		           //ȷ����ʼ��Ϸ������ѭ��
		}
		else
		{
			if (a == 0)
			{
			    printf("�˳���Ϸ\n");
				
			}
			else
			{
				printf("�����������������\n");
			
			}
		}
	} while (a);   //��ʼ������һ��


	return 0;
}