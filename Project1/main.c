#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include "lib.h"
//Hàm
char kiem_tra_so_nguyen_to(int n)
{
    char kq = 1;
    if (n < 2) {
        kq = 0;
    }
    else {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0) {
                kq = 0;
                break;
            }
        }
    }
    return kq;
}
void main(){
    char x = kiem_tra_so_nguyen_to(15);
    if (x) {
        printf("day la so nguyen to\n");
    }
    else {
        printf("day khong phai la so nguyen to\n");
    }
// In ra tất cả các số nguyên tố từ 1 -> 100
    for (int i = 1;i <= 100;i++)
    {
        char k = kiem_tra_so_nguyen_to(i);
        if (k) {
            printf("%d la so nguyen to \n", i);
        }
        else {
            printf("%d khong phai la so nguyen to \n", i);
        }
    }
// khai báo (lib.h) và xây dựng hàm tìm ucln của 2 số nguyên (lib.c)
    int ucln1 = tim_ucln(12, 20); // return 4
    printf("ucln1: %d \n", ucln1);

    int ucln2 = tim_ucln(30, 45); // return 15          
    printf("ucln2: %d \n", ucln2);
// khai báo (lib.h) và xây dựng hàm tìm bcnn của 2 số nguyên (lib.c)
    int bcnn1 = tim_bcnn(3, 4); // return 12
    printf("bcnn1: %d \n", bcnn1);

    int bcnn2 = tim_bcnn(30, 45); // return 90
    printf("bcnn2: %d \n", bcnn2); 
// Mảng
    int arr[10] = { 3,2,5,6,5,6,2,1,12,32 };
    int tong = 0;
    for (int i = 0; i < 5; i++) {
    	tong += arr[i];
    }
    printf("tong: %d \n", tong);
// In ra giá trị min, max và vị trí tương ứng của nó trong mảng arr
    int min = arr[0];
    int max = arr[0];
    int vi_tri_min = 0;
    int vi_tri_max = 0;
    for (int i = 0;i < 10;i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            vi_tri_max = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            vi_tri_min = i;
        }
    }
    printf("max: %d, vi tri max: %d \n", max, vi_tri_max);
    printf("min: %d, vi tri min: %d \n", min, vi_tri_min);
    int arr1[] = { 1,2,3,4,5,6,7,8,9 };
    int length = sizeof(arr1) / sizeof(arr1[0]);
    for (int j = 0; j < length; j++)
    {
        printf("j[%d]: %d \n", j, arr1[j]);
    }
    printf("hello, %d\n", arr1[1]);
    char t = 'abbb';
    sizeof(t);
    printf("Kich thuoc: %zu byte\n", sizeof(t));
    printf("chu: %c\n", t);
    char v[10];
    printf("nhap 10 chu:");
    scanf("%9s", &v); //Lấy hello vào mảng, nhưng chưa lấy Enter. Gặp Enter ('\n') → dừng, để Enter lại trong bộ đệm nhập. 
                      //Sau đó, scanf tự thêm '\0' vào mảng để kết thúc chuỗi:
                      //'\0' và '\n' khác nhau: '\0' được thêm vào để kết thúc chuỗi; '\n' là Enter bạn đã bấm.
    printf("10 chu da nhap la: %s\n", v);
    printf("Nhap p[2]: ");
    scanf(" %c", &v[2]); // cần có khoảng cách trước %c vì %s được quy định là dừng khi gặp khoảng trắng hoặc Enter, và để ký tự đó lại, không đọc nó vào chuỗi.
                         // ở %c cần có khoảng cách để kết thúc /n và bắt đầu lưu 1 ký tự ta nhập.
    printf("chu o so 3 la: %c", v[2]);

}