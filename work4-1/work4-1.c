#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	switch (a = 1)
	{
	case 1:
		printf("      *      \n");
	case 2:
		printf("     ***     \n");
	case 3:
		printf("    *****    \n"); 
	case 4:
		printf("   *******   \n"); 
	case 5:
		printf("  *********  \n");
	case 6:
		printf(" *********** \n");
	case 7:
		printf("*************\n");
	case 8:
		printf(" *********** \n");
	case 9:
		printf("  *********  \n");
	case 10:
		printf("   *******   \n");
	case 11:
        printf("    *****    \n");
	case 12:
		printf("     ***     \n");
	case 13:
		printf("      *      \n");
	break;

	}
	
	
	return 0;
}