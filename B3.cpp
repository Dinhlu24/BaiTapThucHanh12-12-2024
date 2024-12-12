#include <stdio.h>

int main(){
	int n,money;
	printf("=============================================CHUONG TRINH CHUYEN DOI TIEN TE============================================");
	printf("1. USD to VND\n2. EUR to VND\n3. GBP to VND\n4. JPY to VND\n5. VND to USD\n6. VND to EUR\n7. VND to GBP\n8. VND to JPY\n");
	printf("Nhap vao don vi tien te ban muon chuyen doi : ");	scanf("%d",&n);
	printf("Nhap vao so tien ban muon chuyen doi : ");	scanf("%d",&money);
	
	switch(n){
		case 1:
			printf("%d USD = %d VND",money,money*23500);
			break;
		case 2:
			printf("%d EUR = %d VND",money,money*25000);
			break;
		case 3:
			printf("%d GBP = %d VND",money,money*28000);
			break;
		case 4:
			printf("%d JPY = %d VND",money,money*180);
			break;
		case 5:
			printf("%d VND = %d USD",money,money/23500);
			break;
		case 6:
			printf("%d VND = %d EUR",money,money/25000);
			break;
		case 7:
			printf("%d VND = %d GBP",money,money/28000);
			break;
		case 8:
			printf("%d VND = %d JPY",money,money/180);
			break;
		default:
			printf("Don vi tien te ban nhap khong ton tai");
	}
	
}
