#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int f(int x)
{
	int a, b, c,d;
	a = x / 100;                //x�İ�λ��
	b = (x%100)/10;           //x��ʮλ��
	c = x%10;                 //x�ĸ�λ��
	d = (a*a*a) + (b*b*b) +(c*c*c);      //ʹ������λ�ϵ��������η����
	return d;

}

int main()
{
	int i=0;
	while (i <= 999)              //ѭ������
	{
		if (i == f(i))            //�ж�i�Ƿ�Ϊˮ����
			printf("%d\n", i);      //���i
		
		i++;                      //����iֵ
		
	}
	
	return 0;
}