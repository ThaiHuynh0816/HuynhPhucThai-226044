
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include "lib.h"
#include <stdlib.h>
// PHAN 1: STRUCT VA TYPEDEF
// struct la mot kieu cau truc du lieu
// cho phep nhom nhieu thanh vien vao 1 doi tuong

struct phan_so {
    int tu_so;
    int mau_so;
};

// Ap dung typedef vao struct
typedef struct {
    int tuso;
    int mauso;
} phansov2;

// typedef dung de tao ten khac cho kieu du lieu
typedef struct phan_so ps;
typedef struct phan_so phan_so_t;

// In phan so ra man hinh
void in_phan_so(struct phan_so a)
{
    printf("phan so: %d/%d\n", a.tu_so, a.mau_so);
}

// In phan so khi su dung typedef
void in_phan_so_v2(phansov2 a)
{
    printf("phan so: %d/%d\n", a.tuso, a.mauso);
}

// Nhan hai phan so
phan_so_t nhan_hai_phan_so(phan_so_t a, phan_so_t b)
{
    phan_so_t kq;

    kq.tu_so = a.tu_so * b.tu_so;
    kq.mau_so = a.mau_so * b.mau_so;

    return kq;
}

// Cong hai phan so
phan_so_t cong_hai_phan_so(phan_so_t a, phan_so_t b)
{
    phan_so_t kq;

    kq.tu_so = a.tu_so * b.mau_so + b.tu_so * a.mau_so;
    kq.mau_so = a.mau_so * b.mau_so;

    return kq;
}

// Rut gon phan so
phan_so_t rut_gon_phan_so(phan_so_t a)
{
    int ucln = tim_ucln(a.tu_so, a.mau_so);

    phan_so_t kq;

    kq.tu_so = a.tu_so / ucln;
    kq.mau_so = a.mau_so / ucln;

    return kq;
}

// Cach rut gon truc tiep bang con tro
/*
void rut_ngon_phan_so(phan_so_t* a)
{
    int ucln = tim_ucln(a->tu_so, a->mau_so);

    a->tu_so = a->tu_so / ucln;
    a->mau_so = a->mau_so / ucln;
}
*/

// PHAN 2: MANG SO NGUYEN VA PHAN SO
// Tim vi tri so nguyen lon nhat
int arr_max_val(int* arr, int len)
{
    int max = arr[0];
    int vi_tri_max = 0;

    for (int i = 1; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            vi_tri_max = i;
        }
    }

    return vi_tri_max;
}

// Tim vi tri phan so lon nhat
int arr_ps_max_val(phan_so_t* arr, int len)
{
    int vi_tri_max = 0;

    float max = arr[0].tu_so * 1.0 / arr[0].mau_so;

    for (int i = 1; i < len; i++)
    {
        float cur = arr[i].tu_so * 1.0 / arr[i].mau_so;

        if (cur > max)
        {
            max = cur;
            vi_tri_max = i;
        }
    }

    return vi_tri_max;
}

// PHAN 3: ENUM
// ENUM
typedef enum {
    Nam,
    Nu,
    Gay
} gt;

// Mang chuoi de hien thi gia tri enum
const char* convert_gt[] = {
    "Nam",
    "Nu",
    "Gay"
};

typedef enum {
    Gioi,
    Kha,
    Trung_binh,
    Yeu,
} hoc_luc;

const char* convert_xl[] = {
   "Gioi",
   "Kha",
   "Trung_binh",
   "Yeu"
};
void xep_loai_hoc_sinh(hoc_sinh_t arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        float dtb = diem_trung_binh_hoc_sinh(arr[i]);
        hoc_luc xl;

        if (dtb >= 8.0)
        {
            xl = Gioi;
        }
        else if (dtb >= 6.5)
        {
            xl = Kha;
        }
        else if (dtb >= 5.0)
        {
            xl = Trung_binh;
        }
        else
        {
            xl = Yeu;
        }
        printf("\nTen: %s\n", arr[i].ten);
        printf("Diem trung binh: %.2f\n", dtb);
        printf("Xep loai: %s\n", convert_xl[xl]);
    };
};
// PHAN 4: STRUCT HOC SINH
// Khai bao kieu du lieu hoc sinh
typedef struct {
    const char* ten;
    int tuoi;
    float diemtoan;
    float diemvan;
    gt gioitinh;
} hoc_sinh_t;

// In thong tin mot hoc sinh
void thong_tin_hoc_sinh(hoc_sinh_t hs)
{
    printf("Ten: %s\n", hs.ten);
    printf("Tuoi: %d\n", hs.tuoi);
    printf("Gioi tinh: %s\n", convert_gt[hs.gioitinh]);
    printf("Diem Toan: %.2f\n", hs.diemtoan);
    printf("Diem Van: %.2f\n", hs.diemvan);
}

// Tinh diem trung binh cua mot hoc sinh
float diem_trung_binh_hoc_sinh(hoc_sinh_t hs)
{
    float dtb = (hs.diemtoan + hs.diemvan) / 2;

    return dtb;
}

// PHAN 5: BAI TAP HOC SINH
// BT1: Tim hoc sinh gioi Toan nhat
void tim_hs_gioi_toan_nhat(hoc_sinh_t arr[], int len)
{
    if (len <= 0)
        return;

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

    thong_tin_hoc_sinh(arr[vi_tri_max]);
}

// BT2: Tim hoc sinh co diem trung binh cao nhat
void tim_hs_dtb_cao_nhat(hoc_sinh_t arr[], int len)
{
    if (len <= 0)
        return;

    int vi_tri_max = 0;

    float max = diem_trung_binh_hoc_sinh(arr[0]);

    for (int i = 1; i < len; i++)
    {
        float dtb = diem_trung_binh_hoc_sinh(arr[i]);

        if (dtb > max)
        {
            max = dtb;
            vi_tri_max = i;
        }
    }
    printf("\nHOC SINH CO DIEM TB CAO NHAT\n");

    thong_tin_hoc_sinh(arr[vi_tri_max]);

    printf("Diem trung binh: %.2f\n", max);
}
// UNION
// union là một kiểu dữ liệu do người dùng tự định nghĩa (tương tự struct)
// cho phép lưu trữ nhiều thành viên có các kiểu dữ liệu khác nhau tại cùng 1 vùng nhớ
typedef struct {
    short a;
    char x;
    char y;
} struct_t;

typedef union {
    short a;
    char x;
    char y;
} union_t;
void main()
{
    // BT PHAN SO
    printf("PHAN SO\n");

    struct phan_so A;
    A.tu_so = 1;
    A.mau_so = 2;
    in_phan_so(A);

    struct phan_so B = { .tu_so = 2, .mau_so = 4 };
    in_phan_so(B);

    struct phan_so C = { 3, 5 };
    in_phan_so(C);

    ps D = { 6, 7 };
    in_phan_so(D);

    phan_so_t a = { 2, 3 };
    phan_so_t b = { 4, 6 };

    phan_so_t c = nhan_hai_phan_so(a, b);
    in_phan_so(c);

    phan_so_t d = cong_hai_phan_so(a, b);
    in_phan_so(d);

    phan_so_t z = rut_gon_phan_so(d);
    in_phan_so(z);
    // BT MANG SO NGUYEN
    printf("MANG SO NGUYEN\n");
    int arr[] = { 3, 7, 1, 2, 9, 12, 23, 2 };
    int index = arr_max_val(
        arr,
        sizeof(arr) / sizeof(arr[0])
    );
    printf("arr max: %d\n", arr[index]);
    // BT MANG PHAN SO
    printf("MANG PHAN SO\n");

    phan_so_t arr_ps[] = {
        {1, 3},
        {2, 5},
        {4, 5},
        {7, 8},
        {4, 7}
    };
    int vi_tri_max = arr_ps_max_val(
        arr_ps,
        sizeof(arr_ps) / sizeof(arr_ps[0])
    );
    in_phan_so(arr_ps[vi_tri_max]);

    // BT THONG TIN HOC SINH
    printf("THONG TIN HOC SINH\n");

    hoc_sinh_t hs1 = { "An", 20, 8.5, 7.5, Nam };

    thong_tin_hoc_sinh(hs1);

    float dtb;
    dtb = diem_trung_binh_hoc_sinh(hs1);

    printf("Diem trung binh cua %s: %.2f\n", hs1.ten, dtb);
    // BT MANG 5 HOC SINH
    hoc_sinh_t arr_hs[] = {
        {"Hoc sinh A", 18, 8.5, 7.5, Nam},
        {"Hoc sinh B", 19, 9.5, 6.5, Nu},
        {"Hoc sinh C", 18, 7.0, 9.5, Gay},
        {"Hoc sinh D", 20, 8.0, 8.5, Nam},
        {"Hoc sinh E", 19, 9.0, 9.0, Nu}
    };
    int len = sizeof(arr_hs) / sizeof(arr_hs[0]);
    // BT1
    tim_hs_gioi_toan_nhat(arr_hs, len);
    // BT2
    tim_hs_dtb_cao_nhat(arr_hs, len);
    // BT ENUM
    printf("VI DU ENUM\n");
    gt hs2 = Nam;
    gt hs3 = Nu;
    printf("Hoc sinh 1: %s\n", convert_gt[hs2]);
    printf("Hoc sinh 2: %s\n", convert_gt[hs3]);
}
// Viết hàm xeoes loại toàn bộ học sinh trong mảng
// Dựa vào điểm trung bình để xếp loại
//>= 8.0:giỏi
//>= 6.5 && < 8.0 :khá
//>= 5.0 && <6.5 : trung bình 
//< 5.0 : Yếu
