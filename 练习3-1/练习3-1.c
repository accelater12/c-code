#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int a, b;
    printf("请输入两个整数。\n");
    printf("整数A:");  scanf("%d", &a);
    printf("整数B:");  scanf("%d", &b);

    if (a % b == 0)
        printf("B是A的约数。");
    else
        printf("B不是A的约数。");
    
    return 0;
}