#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//Bài tập 1
// viết chương trình giải pt bậc 2 : ax^2 + bx + c = 0, nhập từ bàn phím
// tính delta = b^2 - 4ac 
// nếu delta > 0 thì pt có 2 nghiệm x1 = ( -b +sqrt(delta))/2a, x2 = (-b-sqrt(delta))/2a
// nếu delta = 0 thì pt có 1 nghiệm kép x1 = x2 = -b / 2a
// nếu delta < 0 thì pt vô nghiệm

void main() {
	int a = 0;
	int b = 0;
	int c = 0;
	int x1 = 0;
	int x2 = 0;
	int delta = 0;
	printf("nhap bien a,b,c de tinh phuong trinh bac 2 ax^2 + bx + c = 0: ");
	scanf("%d %d %d", &a, &b, &c);
	delta = b * b - 4 * a * c;
	if (delta > 0) {
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("phuong trinh co 2 nghiem: \n");
		printf("nghiem x1 la: %d\n", x1);
		printf("nghiem x2 la: %d\n", x2);
	}
	else if (delta == 0) {
		x1 = x2 = -b / 2.0 * a;
		printf("phuong trinh co 1 nghiem kep: \n");
		printf("x1 = x2 = %.2f\n", x1);
	}
	else{
		printf("Phuong trinh vo nghiem.\n");
	}
//// Bài tập 2 
//// Nhập vào từ bàn phím số bất kỳ
//// Kiểm tra và in ra số đó là số dương hay số 0 hay là số âm
	int number = 0;
	printf("nhap vao 1 so bat ky:");
	scanf("%d", &number);
	if (number > 0) {
		printf("day la so duong \n");
	}
	else if (number == 0) {
		printf("day la so 0 \n");
	}
	else {
		printf("day la so am \n");
	}
// Bài tập 3
// Nhập vào bàn phím số năm
// Nếu đó là năm nhuận thì in ra "day la nam nhuan"
// Nếu đó không phải là năm nhuận thì in ra " day khong phai la nam nhuan"
// 1 năm nhuận là 1 năm chia hết cho 400 hoăc chia hết cho 4 nhưng ko chia hết cho 100
	int year = 0;
	int dieukien1 = 0;
	int dieukien2 = 0;
	printf("nhap vao 1 nam bat ky:");
	scanf("%d", &year);
	dieukien1 = (year % 400 == 0);
	dieukien2 = (year % 4 == 0) && (year % 100 != 0);
	if (dieukien1 || dieukien2) {
		printf("Day la nam nhuan\n");
	}
	else {
		printf("Day khong phai la nam nhuan\n");
	}
// Bài tập 4 
// Nhập ra từ bàn phím 3 số x, y, z
// in ra số lớn nhất trong ba số
    int x = 0;
    int y = 0;
    int z = 0;
    int max = 0;
    printf("Nhap 3 so bat ky: ");
    scanf("%d %d %d", &x, &y, &z);
    max = x;
    if (y > max) {
        max = y;
    }

    if (z > max) {
        max = z;
    }
    printf("So lon nhat la: %d\n", max);
// Bài 5
// nhập vào số điện sử dụng bất kì
// tính tiền điện theo bậc
// Bậc 1 (0 - 50 kWh): 1.984 đồng/kWh
// Bậc 2 (51 - 100 kWh): 2.050 đồng/kWh
// Bậc 3 (101 - 200 kWh): 2.380 đồng/kWh
// Bậc 4 (201 - 300 kWh): 2.998 đồng/kWh
// Bậc 5 (301 - 400 kWh): 3.350 đồng/kWh
// Bậc 6 (từ 401 kWh trở lên): 3.460 đồng/kWh
    int sodien = 0;
    int tiendien = 0;
    printf("nhap vao so dien su dung: ");
    scanf("%d", &sodien);
    if (sodien <= 50) {
        tiendien = sodien * 1.984;
    }
    else if (sodien >= 51 && sodien <= 100) {
        tiendien = 50 * 1.984 + (sodien - 50) * 2.050;
    }
    else if (sodien >= 101 && sodien <= 200) {
        tiendien = 50 * 1.984 + 50 * 2.050 + (sodien - 100) * 2.380;
    }
    else if (sodien >= 201 && sodien <= 300) {
        tiendien = 50 * 1.984 + 50 * 2.050 + 100 * 2.380 + (sodien - 200) * 2.998;
    }
    else if (sodien >= 301 && sodien <= 401) {
        tiendien = 50 * 1.984 + 50 * 2.050 + 100 * 2.380 + 100 * 2.998 + (sodien - 300) * 3.350;
    }
    else if (sodien >= 401) {
        tiendien = 50 * 1.984 + 50 * 2.050 + 100 * 2.380 + 100 * 2.998 + 100 * 3.350 + (sodien - 400) * 3.460;
    }
    printf("so tien dien can tra: %d\n", tiendien);
}
