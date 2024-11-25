#include<stdio.h>
int main(){
	int num1, num2, tong, hieu, tich, choice;
	float thuong;
	printf("vui long nhap lan luot so thu nhat va so thu hai: ");
	scanf("%d %d", &num1, &num2);
	printf("moi ban chon chuc nang \n");
	printf("1. tinh tong \n");
	printf("2. tinh hieu \n");
	printf("3. tinh tich \n");
	printf("4. tinh thuong \n");
	printf("chon chuc nang muon su dung: ");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			tong = num1 + num2;
			printf("%d + %d = %d", num1, num2, tong);
			break;
		case 2:
			hieu = num1 - num2;
			printf("%d - %d = %d", num1, num2, hieu);
			break;
		case 3:
			tich = num1 * num2;
			printf("%d x %d = %d", num1, num2, tich);
			break;
		case 4:
			thuong = num1 / num2;
			printf("%d : %d = %.2f", num1, num2, thuong);
			break;
	}
	return 0;
}
