#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Bài tập 1: yêu cầu user nhập vào ký tự bất kì
// in ra dạng thập phận (Hệ 10) 
// In ra dạng thập phân (Hệ 16)
void main() {
	int n = 0;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("You entered in dexcimal: %d\n", n);
	printf("You entered in hexadecimal: %x\n", n);
// Bài tập 2: yêu cầu user nhập vào mssv và điểm (float)
// In ra mssv và điểm vừa nhập
	int m = 0;
	float diem = 0.0f;
	printf("Enter your student ID: ");
	scanf("%d", &m);
	printf("Enter your score: ");
	scanf("%f", &diem);
	printf("Your student ID: %d\n", m);
	printf("Your score: %.2f\n", diem);
	printf("Your score: %.2f\n", diem);
	//Bài tập 3: yêu cầu user nhập vào 2 số nguyên a,b
	// in ra tổng, hiệu, tích, thương của 2 số vừa nhập mỗi dòng
	int a = 0, b = 0;
	printf("nhap 2 so nguyen a va b: ");
	scanf("%d %d", &a, &b);
	printf("Tong 2 so nguyen a va b la: %d\n", a + b);
	printf("Hieu 2 so nguyen a va b la : %d\n", a - b);
	printf("Tich 2 so nguyen a va b la : %d\n", a * b);
	printf("Thuong 2 so nguyen a va b la : %f\n", (float)a / b);
	// hoặc là
	//printf("Thuong 2 so nguyen a va b la : %f\n", a*1.0 / b);
	//Bài tập 4: yêu cầu user nhập vào nhiệt độ C (số nguyên)
	in ra nhiệt độ F (số thực)
	F = C * 9/5 + 32
	int nhietdoC = 0;
	printf("nhap nhiet do C: ");
	scanf("%d", &nhietdoC);
	printf("nhiet do F la: %f\n", nhietdoC * 1.0 * 9 / 5 + 32);
	// Bài tập 5: yêu cầu user nhập vào số giây ( số nguyên)
	//in ra số giờ, phút, giây mỗi dòng
	// ví dụ : 3672 giây = 1 giờ, 1 phút, 12 giây
	int giay = 0;
	printf("nhap so giay: ");
	scanf("%d", &giay);
	printf("so gio tuong ung la : %d\n", giay / 3600);
	printf("so phut tuong ung la: %d\n", (giay % 3600)/ 60);
	printf("so giay tuong ung la: %d\n", giay % 60);
	//Bài tập 6: nhập vào kính thước và bán kính r
	//in ra diện tích hình tròn, chu vi hình tròn
	// chu vi = 2 * r * 3,14
	// diện tích = r * r * 3,14
	int r = 0;
	printf("nhap ban kinh r: ");
	scanf("%d", &r);
	printf("chu vi hinh tron la: %f\n", 2 * r * 3.14);
	printf("dien tich hinh tron la: %f\n", r * r * 3.14);
}