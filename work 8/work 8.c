#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int f(int x, int y)
{
	if (x % y == 0)
		return y;
	else
		return f(y, x % y);                //����շת����������Լ��
}
int main()
{
	int a,b,c;
	printf("�������������Ϊ");
	scanf("%d %d",&a,&b);

	c = f(a, b);
	printf("�������������Լ��Ϊ%d", c);
	
	return 0;
}