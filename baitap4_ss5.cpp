#include<stdio.h>

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	while(n < 1 || n > 10)	
	{
		printf("Yeu cau nhap tu 1 - 10: ");
		scanf("%d", &n);
	}
	
	for(int i = 1; i <= 10; i++)
	{
		printf("%d * %d = %d\n", n, i, n*i);
	}
	
	return 0;
}
