#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int f(int x)
{
	int a, b, c,d;
	a = x / 100;                //x的百位数
	b = (x%100)/10;           //x的十位数
	c = x%10;                 //x的个位数
	d = (a*a*a) + (b*b*b) +(c*c*c);      //使各个数位上的数的三次方相加
	return d;

}

int main()
{
	int i=0;
	while (i <= 999)              //循环条件
	{
		if (i == f(i))            //判断i是否为水仙数
			printf("%d\n", i);      //输出i
		
		i++;                      //调整i值
		
	}
	
	return 0;
}