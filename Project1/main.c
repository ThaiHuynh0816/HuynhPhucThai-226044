
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include "lib.h"
#include <stdlib.h>
    typedef struct {
        char* ten;
        int tuoi;
        float diemtoan;
        float diemvan;
    } hoc_sinh_t;
    // BT1: Tim hoc sinh gioi Toan nhat va in thong tin
    void tim_hs_gioi_toan_nhat(hoc_sinh_t arr[], int len)
    {
        int vi_tri_max = 0;
        float max = arr[0].diemtoan;

        for (int i = 1; i < len; i++)
        {
            if (arr[i].diemtoan > max)
            {
                max = arr[i].diemtoan;
                vi_tri_max = i;
            }
        }
        printf("\nHOC SINH GIOI TOAN NHAT\n");
        printf("Ten: %s\n", arr[vi_tri_max].ten);
        printf("Tuoi: %d\n", arr[vi_tri_max].tuoi);
        printf("Diem Toan: %.2f\n", arr[vi_tri_max].diemtoan);
        printf("Diem Van: %.2f\n", arr[vi_tri_max].diemvan);
    }
    // BT2: Tim hoc sinh co diem trung binh cao nhat va in thong tin
    void tim_hs_dtb_cao_nhat(hoc_sinh_t arr[], int len)
    {
        int vi_tri_max = 0;
        float max = (arr[0].diemtoan + arr[0].diemvan) / 2;
        for (int i = 1; i < len; i++)
        {
            float dtb = (arr[i].diemtoan + arr[i].diemvan) / 2;

            if (dtb > max)
            {
                max = dtb;
                vi_tri_max = i;
            }
        }
        printf("\nHOC SINH CO DIEM TB CAO NHAT\n");
        printf("Ten: %s\n", arr[vi_tri_max].ten);
        printf("Tuoi: %d\n", arr[vi_tri_max].tuoi);
        printf("Diem Toan: %.2f\n", arr[vi_tri_max].diemtoan);
        printf("Diem Van: %.2f\n", arr[vi_tri_max].diemvan);
        printf("Diem trung binh: %.2f\n", max);
    }
    void main()
    {
        hoc_sinh_t arr[] = {
            {"Hoc sinh A", 18, 8.5, 7.5},
            {"Hoc sinh B", 19, 9.5, 6.5},
            {"Hoc sinh C", 18, 7.0, 9.5},
            {"Hoc sinh D", 20, 8.0, 8.5},
            {"Hoc sinh E", 19, 9.0, 9.0}
        };
        int len = sizeof(arr) / sizeof(arr[0]);
        // BT1
        tim_hs_gioi_toan_nhat(arr, len);
        // BT2
        tim_hs_dtb_cao_nhat(arr, len);
    }