#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int a, b;
    printf("����������������\n");
    printf("����A:");  scanf("%d", &a);
    printf("����B:");  scanf("%d", &b);

    if (a % b == 0)
        printf("B��A��Լ����");
    else
        printf("B����A��Լ����");
    
    return 0;
}