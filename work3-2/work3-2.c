#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	
	double a = 1, b = 0,c = 0,sign=-1;      //设置了符号变量：sign，用if进行取余判断时要求都必须为整型，无法计算精准。
	while (a<= 100)
	{
		sign = -sign;
		b = sign / a;                      
		c += b;                            //赋值操作符：a+=b等同于a=a+b
		a++;                              //循环次数+1
	}
	printf("=%lf", c);                    //输出结果
	return 0;
}