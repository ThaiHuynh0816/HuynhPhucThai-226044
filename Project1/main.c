#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include "lib.h"
void main() {
	// Bài 1 Đếm phân loại phần tử**
	//Yêu cầu : Duyệt mảng và đếm xem có bao nhiêu số chẵn và bao nhiêu số lẻ.
	//- Đầu vào : Số nguyên n và n phần tử của mảng.
	//- Đầu ra  : 2 số nguyên tương ứng với số lượng phần tử chẵn và lẻ.
	//Input : 6 | 3 4 7 3 1 2
	//Output : Chan : 2, Le : 4
        int n;
        int arr[100];
        int chan = 0, le = 0;
        do
        {
            printf("Nhap so phan tu n (1-100): ");
            scanf("%d", &n);
        } while (n < 1 || n > 100);
        for (int i = 0; i < n; i++)
        {
            printf("Nhap arr[%d]: ", i);
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                chan++;
            }
            else
            {
                le++;
            }
        }
        printf("Chan: %d, Le: %d\n", chan, le);
    //Bài 2: Tìm kiếm vị trí phần tử
    //Yêu cầu : Nhập thêm một số nguyên x.Tìm và in ra vị trí(index) cuối cùng mà x xuất hiện trong mảng.Nếu x không tồn tại, in ra - 1. Giả sử mảng bắt đầu từ index 0.
    //Đầu vào : Số nguyên m, m phần tử của mảng và số x.
    //Đầu ra : Vị trí index cuối cùng của x.
    //Input : 6 | 1 5 3 5 2 5 | x = 5
    //Output : 5 (vì số 5 xuất hiện lần cuối ở vị trí index 5)
            int m, x;
            int arrr[100];
            int viTri = -1;
            do
            {
                printf("Nhap so phan tu n (1-100): ");
                scanf("%d", &m);
            } while (m < 1 || m > 100);
            for (int i = 0; i < m; i++)
            {
                printf("Nhap arrr[%d]: ", i);
                scanf("%d", &arrr[i]);
            }
            printf("Nhap x: ");
            scanf("%d", &x);
            for (int i = 0; i < m; i++)
            {
                if (arrr[i] == x)
                {
                    viTri = i;
                }
            }
            printf("Vi tri cuoi cung cua x: %d\n", viTri);
        }