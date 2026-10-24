#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include "lib.h"\


void main() {
	// Con trỏ
	int x = 10;
	int* px = &x;
	printf("dia chi cua bien x: %x\n", &x);
	printf("dia chi cua bien px: %x\n", px);
	printf("doc gia tri cua bien x: %x\n", *px);
	*px = 0x5678; //gán giá trị vào địa chỉ của con trỏ
	printf("doc gia tri cua bien x lan 2: %x\n", *px);

	//int y = 10;
	//int* py = &y;
	//printf("dia chi cua bien y: %x\n", &y);
	//printf("dia chi cua bien py: %x\n", py);
	//printf("doc gia tri cua bien y: %x\n", *py);
	//*py = 0x5678; //gán giá trị vào địa chỉ của con trỏ
	//printf("doc gia tri cua bien y lan 2: %x\n", *py);

	//int a = 0x1234;
	//char* pa = &a;
	//printf("doc gia tri cua bien a : % x\n", *(pa+1));
	//*pa = 0x4455;
	//*(pa + 1) = 0x6677; // nhảy lên byte cao rồi mới bắt gán( nhảy lên byte cao "12" và gán 77)
	//printf("doc gia tri cua bien a lan 2: %x\n", a);

	//short z = 0x1234;
	//char* pz = &z;
	//printf("byte thap:%x\n", *pz);
	//printf("byte cao:%x\n", *(pz+1));

	//int arr[] = { 1,2,3,4,5,6 };
	//int* px;
	//px = arr; // tên mảng cx là địa chỉ bắt đầu của mảng, cũng là địa chỉ của giá trị đầu tiên
	//printf("px lan 1: %x\n", px);
	//px = &arr[0];
	//printf("px lan 2: %x \n", px);
	//printf("px lan 2: %x \n", *(px+1));
	//for (int i = 0;i < 6;i++) {
	//	printf("arr[%d]: %d \n", i, *(arr + i));
	//}

	// Bài tập 1: viết hàm str_len nhận vào 1 string và trả ra độ dài của string dó
	char str1[] = "lap trinh CCpp";
	int len_str1 = str_len(str1);
	printf("str1 length: %d\n", len_str1);

	// Bài tập 2: viết hàm arr_sum nhận vào 1 mảng số nguyên và kích thước của mảng
	// hàm trả về tổng các phần tử trong mảng
	int arr[] = { 1,2,3,4,5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int sum = arr_sum(arr, len);
	printf("sum arr: %d\n ", sum);//expected 15

	// Bài tập 3: Viết hàm str_upper nhận vào 1 chuỗi string
	// và chuyển toàn bộ chuỗi đó thành chuỗi in hoa
	// gợi ý: kiểm tra kí tự từ a-z nếu đúng thì trừ đi 32
	char str2[] = "lap trinh CCpp";
	str_upper(str2);
	printf("str 2 upper: %s \n", str2); // "LAP TRINH CCPP"

}