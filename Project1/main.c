
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include "lib.h"
#include <stdlib.h>

// struct là một kiểu cấu trúc dữ liệu cho phép nhóm nhiều thành viên dữ liệu vào dùng 1 đối tượng

//Kiểu dữ liệu phân số
struct phan_so {
    int tu_so;
    int mau_so;
};

//Áp dụng typedef vào struct
typedef struct {
    int tuso;
    int mauso;
} phansov2;

// typedef dùng để tạo tên khác cho 1 kiểu dữ liệu đã có
typedef struct phan_so ps;
typedef struct phan_so phan_so_t;

//In phân số ra màn hình console
void in_phan_so(struct phan_so a) {
    printf("phan so: %d/%d\n", a.tu_so, a.mau_so);
}

//In phân số ra màn hình console khi gộp typedef vào struct
void in_phan_so_v2(phansov2 a) {
    printf("phan so: %d/%d\n", a.tuso, a.mauso);
}

// Hàm nhân 2 phân số trả ra 1 phân số mới
// In ra sau khi nhân 2 phân số
phan_so_t nhan_hai_phan_so(phan_so_t a, phan_so_t b) {
    phan_so_t kq;
    kq.tu_so = a.tu_so * b.tu_so;
    kq.mau_so = a.mau_so * b.mau_so;
    return kq;
}
// In ra sau khi cộng 2 phân số
phan_so_t cong_hai_phan_so(phan_so_t a, phan_so_t b) {
    phan_so_t kq;
    kq.tu_so = a.tu_so * b.mau_so + b.tu_so * a.mau_so;
    kq.mau_so = a.mau_so * b.mau_so;
    return kq;
}
// Rút gọn phân số 
// B1 tìm UCLN của tử số và mẫu số
// B2 lấy tử số và mẫu số chia cho UCLN và gán vào phân số kết quả
phan_so_t rut_gon_phan_so(phan_so_t a)
{
    int ucln = tim_ucln(a.tu_so, a.mau_so);
    phan_so_t kq;
    kq.tu_so = a.tu_so / ucln;
    kq.mau_so = a.mau_so / ucln;
    return kq;
}
//void rut_ngon_phan_so(phan_so_t* a)
//{
//    int ucln = tim_ucln(a->tu_so, a->mau_so);
//    a->tu_so = a->tu_so / ucln;
//    a->mau_so = a->mau_so / ucln;
//}


// Hàm tìm giá trị lớn nhất trong mảng số nguyên
// param1: địa chỉ bắt đầu trong mảng số nguyên
// param2: Kích thước của mảng số nguyên
// Return: vị trí của số lớn nhất
int arr_max_val(int* arr, int len)
{
    int max = arr[0];
    int vi_tri_max = 0;
    for (int i = 1;i < len;i++) {
        if (arr[i] > max)
        {
            max = arr[i];
            vi_tri_max = i;
        }
    }
    return vi_tri_max;
}
// Hàm tìm giá trị lớn nhất trong mảng phân số 
// param1: địa chỉ bắt đầu trong mảng phân số
// param2: Kích thước của mảng phân số
// Return: vị trí của số lớn nhất
int arr_ps_max_val(phan_so_t* arr, int len)
{
    int vi_tri_max = 0;
    float max = arr[0].tu_so * 1.0 / arr[0].mau_so;

    for (int i = 1; i < len; i++)
    {
        float cur = arr[i].tu_so * 1.0 / arr[i].mau_so;

        if (cur > max) {
            max = cur;
            vi_tri_max = i;
        }
    }

    return vi_tri_max;
}
// Sử dụng struct khai báo kiểu dữ liệu học sinh
typedef struct {
    char* ten;
    int tuoi;
    float diemtoan;
    float diemvan;
} hoc_sinh_t;
// Tạo hàm ỉn a thông tin học sinh
void thong_tin_hoc_sinh(hoc_sinh_t hs)
{
    printf("ten:%s, tuoi:%d, diem toan:%.2f, diem van: %.2f \n", hs.ten, hs.tuoi, hs.diemtoan, hs.diemvan);
}
// Viết hàm tính và trả ra điểm trung bình của 1 học sinh (điểm toán + điểm văn)/2
float diem_trung_binh_hoc_sinh(hoc_sinh_t hs)
{
    float dtb = (hs.diemtoan + hs.diemvan) / 2;
    return dtb;
}
//Khai báo mẩng bao gồm 5 phần tử hoc_sinh_t,khởi tạo giá trị ban đầu cho nó
//Bt1: viết hàm tìm học sinh giỏi toán nhất và in thông tin học sinh đó ra
//Bt2: viết hàm tìm học sinh có điểm trung bình cao nhất và in thông tin của học sinh đó ra

void main()
{
    struct phan_so A;
    A.tu_so = 1;
    A.mau_so = 2;
    in_phan_so(A);

    struct phan_so B = { .tu_so = 2,.mau_so = 4 };
    in_phan_so(B);

    struct phan_so C = { 3,5 };
    in_phan_so(C);

    ps D = { 6,7 };
    in_phan_so(D);

    phan_so_t a = { 2,3 };
    phan_so_t b = { 4,6 };
    phan_so_t c = nhan_hai_phan_so(a, b);
    in_phan_so(c);

    phan_so_t d = cong_hai_phan_so(a, b);
    in_phan_so(d);

    phan_so_t z = rut_gon_phan_so(d);
    in_phan_so(z);

    //rut_ngon_phan_so(&d); // d: 3/4
    //in_phan_so(d);

// Khai báo 1 mảng phân số
    int arr[] = { 3,7,1,2,9,12,23,2 };
    int index = arr_max_val(arr, sizeof(arr)/sizeof(arr[0]));
    printf("arr max: %d\n",arr[index]);
    phan_so_t arr_ps[] = {
        {1,3},
        {2,5},
        {4,5},
        {7,8},
        {4,7}
    };
// viết hàm tìm vị trí của phân số lớn nhất trong mảng phân số
    int vi_tri_max = arr_ps_max_val(arr_ps, sizeof(arr_ps) / sizeof(arr_ps[0]));
    in_phan_so(arr_ps[vi_tri_max]);


    hoc_sinh_t hs1 = { "An", 20, 8.5, 7.5 };
    thong_tin_hoc_sinh(hs1);
    float dtb;
    dtb = diem_trung_binh_hoc_sinh(hs1);
    printf("Diem trung binh cua %s: %.2f\n", hs1.ten, dtb);
}
