#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include "lib.h"
#include <stdlib.h>
void tang(int* p)
{
    *p = *p + 1;
}
void main() {
// con trỏ
    int a = 10;
    int b;
    int* p = &a;
    printf("Ban dau: a = %d\n", a);
    *p = 25;
    printf("Sau khi sua qua p: a = %d\n", a);
    a = 40;
    printf("Sau khi sua a: *p = %d\n", *p);
    tang(&a);
    printf("a sau khi tang: %d\n", a); // Vẫn là 41
    *p = 99; // Sửa a thành 99
    p = &b;  // Đổi p sang trỏ tới b; không sửa a hay b

    char str2[] = "hello";
    str2[4] = 'Y';
    printf("in ra: %s\n", str2);

    //char* str3 = "Hello";
    //str3[4] = 'y';
    //printf("in ra: %s\n", str3);

    char str[] = "Hello";
    char* q = str;
    q++;
    printf("%c\n", *q);  // e
    printf("%s\n", q);   // ello
    printf("%s\n", str); // Hello


    printf("%d",sizeof(char));

    int n;

    printf("Nhap so phan tu (1-100): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100)
    {
        printf("So phan tu khong hop le!\n");
        return 1;
    }

    int* arr = malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Cap phat that bai!\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Nhap arr[%d]: ", i);

        if (scanf("%d", &arr[i]) != 1)
        {
            printf("Gia tri khong hop le!\n");
            free(arr);
            return 1;
        }
    }

    printf("Mang da nhap: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

}