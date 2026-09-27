#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//Bài tập1: dùng vòng lập in ra bẳng cửu chương 2
void main() {
	//int cuuchuong2;
	//for (int a = 0; a <= 10; a++)
	//{
	//	cuuchuong2 = 2 * a;
	//	printf("cuu chuong 2: 2 * %d = %d\n", a, cuuchuong2);
	//}
//Bài tập 2: dùng vòng lâpj in ra bẳng cửu chương 2 đến 9
	//int cuuchuong;
	//for (int a = 2; a <= 9; a++)
	//{
	//	printf("Bang cuu chuong %d\n", a);
	//	for (int b = 0;b <= 10;b++)
	//	{
	//		cuuchuong = a * b;
	//		printf("%d * %d = %d \n", a, b, cuuchuong);
	//	}
	//	printf("\n");
	//}
//Bài tập 3: dùng vòng lâpj in ra bẳng cửu chương 2 đến 9 bỏ qua bảng cửu chương 4
	//int cuuchuong;
	//for (int a = 2; a <= 9; a++)
	//{
	//	if (a == 4) continue;
	//	printf("Bang cuu chuong %d\n", a);
	//	for (int b = 0;b <= 10;b++)
	//	{
	//		cuuchuong = a * b;
	//		printf("%d * %d = %d \n", a, b, cuuchuong);
	//	}
	//	printf("\n");
	//}
//Bài tập 4: Nhập vào số nguyên n từ bàn phím
// Tính và in ra kết quả giai thừa của n (1*2*3*...*n)
	//int n;
	//int ketqua = 1;
	//printf("Nhap vao so nguyen n: ");
	//scanf("%d", &n);
	//for (int a = 1;a <= n;a++)
	//{
	//	ketqua = ketqua * a;
	//}
	//printf("ket qua giai thua cua %d la : %d\n", n, ketqua);
//Bài tập 5: Nhập vào số nguyên n từ bàn phím
//Kiểm tra xem số đó có phải là số nguyên tố hay không
//Nếu đúng thì in ra n là số nguyên tố
//Nếu sai thì in ra n không phải số nguyên tố
	//int n;
	//int isSnt=1;
	//printf("Nhap vap so nguyen n: ");
	//scanf("%d", &n);
	//for (int i = 2;i < n; i++)
	//{
	//	if (n % i == 0) {
	//		isSnt = 0;
	//		break;
	//	}
	//}
	//	if (isSnt){
	//		printf("%d la so nguyen to\n", n);
	//	}
	//	else {
	//		printf("%d khong phai la so nguyen to \n", n);
	//}
//Bài tập 6: Nhập vào số nguyên n, đếm số lượng chữ số của n và in ra màn hình
//vd:97421 -> n có 5 chữ số
//gợi ý: dùng vòng lặp while kết hợp chia nguyên cho 10 để đếm
	int n;
	int dem = 0;
	printf("Nhap vao mot so nguyen n: ");
	scanf("%d", &n);
	if (n == 0)
	{
		dem = 1;
	}
	else
	{
		while (n != 0)
		{
			n = n / 10;
			dem++;
		}
	}
	printf("n co %d chu so\n", dem);
}
