#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int exc(int x1, int y1)   //��������
{
	int x2, y2;
	x2 = y1;
	y2 = x1;

	return x2, y2;
}

int main()
{
	int arr1[10]={0,1,2,3,4,5,6,7,8,9};
	int arr2[10]={0,0,0,0,0,0,0,0,0,0};              //����������ͬ��С������
	int a=0,b=0,c=0;

	while (a <= 9)                                   //��ʼ����ѭ��������ֱ����ɣ�ע���±��0��ʼ������aӦ��Ϊ����Ԫ������-1��
	{
	    b,c=exc(arr1[a], arr2[a]);
		printf("%d    %d\n", b, c);
		a++;
	}

	return 0;

}