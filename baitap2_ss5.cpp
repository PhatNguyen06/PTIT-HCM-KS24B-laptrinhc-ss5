#include<stdio.h>

int main()
{
	int m = 7;
	
	while(true)
	{
		int n;
		printf("Nhap n: ");
		scanf("%d", &n);
		if(n == m)
		{
			break;
		}
	}
	
	return 0;
}
