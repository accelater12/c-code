#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	
	double a = 1, b = 0,c = 0,sign=-1;      //�����˷��ű�����sign����if����ȡ���ж�ʱҪ�󶼱���Ϊ���ͣ��޷����㾫׼��
	while (a<= 100)
	{
		sign = -sign;
		b = sign / a;                      
		c += b;                            //��ֵ��������a+=b��ͬ��a=a+b
		a++;                              //ѭ������+1
	}
	printf("=%lf", c);                    //������
	return 0;
}