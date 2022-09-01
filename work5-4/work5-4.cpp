#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	int i = 0;
	int b = 0;
	char a[26] = {0};             //char命名的规则
	scanf("%s", &a);
	b = (int)strlen(a);



	for (i = 0; i < 3; ++i)
	{
		if (a[i] >= 65 && a[i] <= 90)
			a[i] += 32;
		else
			if (a[i] >= 97 && a[i] <= 122)
				a[i] -= 32;
	}
	printf("%s", a);
	
	return 0;
}