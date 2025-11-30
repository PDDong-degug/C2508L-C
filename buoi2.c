#include<stdio.h>

int main(){
	
	printf("xin chao \n");
	int tuoi=18;
	printf("tuoi cua toi la: %d \n", tuoi );
	
	float diemtoan = 4.5;
	float diemanh = 7.5;
	float diemvan = 9.5;
	float diemtb;
	
	printf("diem toan : %f \n" , diemtoan);
	printf("diem anh : %f \n", diemanh);
	printf("diem van : %f \n", diemvan);
	
	diemtb = (diemtoan + diemanh + diemvan) / 3;
	printf("diem trung binh la : %f \n ", diemtb);
	
	int b;
	int a;
	int tong;
	printf("nhap so a la: \n");
	scanf("%d", &a);

	printf("nhap so b la: \n");
	scanf("%d", &b);
	
	tong = a+b;
	printf("tong cua a va b la : %d \n", tong);
	
	return 0;  
}
