#include <stdio.h>

int main(){
	//GLV : Gio Lam Viec, LTG :Muc Luong Theo Gio
	float GLV,LTG,payCheck;
	printf("Moi nhap vao gio lam viec trong thang cua ban : ");	scanf("%f",&GLV);
	printf("Moi nhap vao muc luong theo gio cua ban : ");	scanf("%f", &LTG);
	
	payCheck = GLV*LTG;
	
	if(GLV > 160){
		printf("Vi thang nay ban da lam hon 160 gio nen ban duoc bonus them 10%% tien luong\n");
		printf("Day la tien luong truoc khi bonus : %.0f (VND)\n",payCheck);
		printf("Day la tien luong sau khi bonus 10%%: %.0f (VND)\nBan duoc phu cap them : %.0f (VND)",payCheck*1.1,payCheck*0.01);
	}
	else{
		printf("Vi thang nay ban lam it hon 160 gio nen ban khong duoc bonus 10%% tien thuong\n");
		printf("Day la luong thang cua ban : %.0f",payCheck);
	}
}
