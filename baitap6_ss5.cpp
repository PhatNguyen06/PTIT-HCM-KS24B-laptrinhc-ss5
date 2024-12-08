#include<stdio.h>
#include<iostream>

int show_menu();

int main()
{
	while(true)
	{
		int a, b;
		printf("Nhap a: ");
		scanf("%d", &a);
		printf("Nhap b: ");
		scanf("%d", &b);
		int chose = show_menu();
		system("cls");
		switch(chose)
		{
			case 1:
				printf("%d + %d = %d\n", a, b, a + b);
				break;
			case 2:
				printf("%d - %d = %d\n", a, b, a - b);
				break;
			case 3:
				printf("%d * %d = %d\n", a, b, a * b);
				break;
			case 4:
				printf("%d / %d = %d\n", a, b, a / b);
				break;
			case 5:
				printf("Tam biet ban, hen gap lai\n");
				return 1;
			default :
				printf("Du lieu khong hop le\n");
		}
		
		bool is_continue = true;
		printf("Ban co muon tiep tuc khong!(1/0) \n");
		scanf("%d", &is_continue);
		if(!is_continue)
		{
			printf("Chuong trinh ket thuc, bai bai\n");
			break;
		}
	}
	
	return 0;
}

int show_menu()
{
	system("cls");
	int chose;
	printf("         CALCULATOR        \n");
	printf("\n");
	printf("1. Tong 2 so\n");
	printf("2. Hieu 2 so\n");
	printf("3. Tich 2 so\n");
	printf("4. Thuong 2 so\n");
	printf("5. Thoat\n");
	printf("\n");
	printf("Lua chon cua ban la: ");
	scanf("%d", &chose);
	
	return chose;
}
