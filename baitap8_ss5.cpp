#include<stdio.h>

int main()
{
	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	
	for(int i = a; i <= a*b; i++)
	{
		if(i % a == 0 && i % b == 0)
		{
			printf("%d", i);
			break;
		}
	}
	return 0;
}
