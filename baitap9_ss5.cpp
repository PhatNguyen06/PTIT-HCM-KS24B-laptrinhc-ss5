#include<stdio.h>

int show_menu();

int main()
{
	int a = 0, b = 0, c = 0;
	while(true)
	{
		int min;
		int max;
		int chose = show_menu();
		switch(chose)
		{
			case 1:
				printf("Nhap a: ");
				scanf("%d", &a);
				printf("Nhap b: ");
				scanf("%d", &b);
				printf("Nhap c: ");
				scanf("%d", &c);
				break;
			case 2:
				printf("%d + %d + %d = %d\n", a, b, c, a + b + c);
				break;
			case 3:
				printf("(%d + %d + %d) / 3 = %d\n", a, b, c, (a + b + c) / 3); // dang sai
				break;
			case 4:
				if(a < b && a < c)
				{
					min = a;
				}
				else if(b < a && b < c)
				{
					min = b;
				}
				else
				{
					min = c;
				}
				printf("So nho nhat la %d", min);
				break;
			case 5:
				if(a > b && a > c)
				{
					max = a;
				}
				else if(b > a && b > c)
				{
					max = b;
				}
				else
				{
					max = c;
				}
				printf("So lon nhat la %d", max);
				break;
			case 6:
				printf("Tam biet ban, hen gap lai\n");
				return 1;
			default :
				printf("Du lieu khong hop le\n");
		}
		
		int is_continue = 1;
		printf("Ban co muon tiep tuc khong!(1/0) \n");
		scanf("%d", &is_continue);
		if(is_continue == 0)
		{
			printf("Chuong trinh ket thuc, bai bai\n");
			break;
		}
	}
	
	return 0;
}

int show_menu()
{
	int chose;
	printf("         MENU        \n");
	printf("\n");
	printf("1. Nhap 3 so\n");
	printf("2. Tong 3 so\n");
	printf("3. Trung binh cong 3 so\n");
	printf("4. So nho nhat\n");
	printf("5. So lon nhat\n");
	printf("6. Thoat\n");
	printf("\n");
	printf("Lua chon cua ban la: ");
	scanf("%d", &chose);
	
	return chose;
}
