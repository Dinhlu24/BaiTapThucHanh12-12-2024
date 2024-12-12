#include <stdio.h>

int main(){
	float toan,ly,hoa,sinh,van,diemtb;

	printf("|STT|%-20s|%8s|%8s|%8s|%8s|%8s|%8s|\n","Ho Va Ten","Toan","Vat Ly","Hoa","Sinh","Van","Diem TB");
	printf("|...|....................|........|........|........|........|........|........|\n");
	
	toan = 7.5, ly = 7.0,hoa = 5.5, sinh = 8.5, van =7.5,diemtb =7.4;
	printf("|%-3d|%s%-9c|%8.1f%|%8.1f%|%8.1f%|%8.1f%|%8.1f%|%8.1f%|\n",1,"Nguyen Van ",'A',toan,ly,hoa,sinh,van,diemtb);
	printf("|...|....................|........|........|........|........|........|........|\n");

	toan =7,ly =8.5,hoa =9,sinh =5,van = 6.5,diemtb = 7.7;
	printf("|%-3d|%s%-9c|%8.1f%|%8.1f%|%8.1f%|%8.1f%|%8.1f%|%8.1f%|\n",2,"Nguyen Van ",'B',toan,ly,hoa,sinh,van,diemtb);
	
	toan =6.5,ly =7.2,hoa =6.5,sinh =10,van = 5.5,diemtb = 7.2;
	printf("|...|....................|........|........|........|........|........|........|\n");
	printf("|%-3d|%s%-9c|%8.1f%|%8.1f%|%8.1f%|%8.1f%|%8.1f%|%8.1f%|\n",3,"Nguyen Van ",'C',toan,ly,hoa,sinh,van,diemtb);
	
	return 0;
}
