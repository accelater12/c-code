#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	int i = 0;
	int b = 0;
	char a[6] = {"123456"};             //char定义需要添加{}
	char password[20] = { 0 };

	for (i = 1; i <= 3; i++)
	{
		printf("请输入密码：");
		scanf("%s",password);
		
		b = strcmp("123456", password);           //strcmp用来比较两个字符串的大小。为0说明相同。int型。
		if (b == 0)
		{
			printf("密码输入正确，登陆成功。");
			break;
		}
		else
			printf("密码错误，请重新输入。\n");
	}
	if (i > 3)
		printf("错误次数已超过3次，即将退出登录");
		
	return 0;
}