#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include "lib.h"
    int add(int a, int b)
    {
        int tong = a + b;
        return tong;
    }
    //char kiem_tra_so_nguyen_to(int n)
    //{
    //    char kq = 1;

    //    for (int i = 2; i < n; i++)
    //    {
    //        if (n % i == 0)
    //        {
    //            kq = 0;
    //            break;
    //        }
    //    }

    //    return kq;
    //}
    char kiem_tra_so_nguyen_to(int n)
    {
        for (int i = 2; i < n;i++)
        {
            if (n % i == 0) {
                return 0;
            }
        }
        return 1;
    }
void main(){
    // int a = add(3, 5);
    // int b = add(6, 7);
    // int c = add(3, 9);
    // printf("%d \n", a);
    // printf("%d \n", b);
    // printf("%d \n", c);
    //char x = kiem_tra_so_nguyen_to(15);
    //if (x)
    //{
    //    printf("day la so nguyen to \n");
    //}
    //else
    //{
    //    printf("day khong la so nguyen to \n");
    //}
    //return 0;
// in ra tất cả số nguyên tố từ 0 đến 100
    char x = kiem_tra_so_nguyen_to(100);
    for (int i = 1;i <= 100;i++)
    {
        char k = kiem_tra_so_nguyen_to(i);
        if (k == 1) {
            printf("%d la so nguyen to \n", i);
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



// mảng 
    //int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    //int tong = 0;

    //for (int i = 0; i < 10; i++)
    //{
    //    tong += arr[i];
    //}

    //printf("tong: %d\n", tong);

//In ra giá trị min, max và vị trí tương ứng của nó trong mảng arr
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int tong = 0;
    int min = arr[0];
    int max = arr[0];
    int vi_tri_max = 0;
    int vi_tri_min = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            vi_tri_max = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            vi_tri_min = i;
        }
    }
    printf("max: %d, vi tri max: %d \n", max, vi_tri_max);
    printf("min: %d, vi tri min: %d \n", min, vi_tri_min);

    int arr1[] = { 1,2,3,4,5,6,7,8,9 };
    int length = sizeof(arr1) / sizeof(arr1[0]);
    for (int j = 0;j < length; j++)
    {
        printf("j[%d]: %d \n", j, arr1[j]);
    }
}
