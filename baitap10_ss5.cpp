#include<stdio.h>

int main()
{
	int n, arr[20];
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int i = 0;
	while(n > 0)
	{
		arr[i] = n % 10;
		n = n/10;
		i++;
	}
	for(int j = i - 1; j >= 0; j--)
	{
		printf("Cac chu so vua nhap la: %d\n", arr[j]);
	}
	
	
	return 0;
}
