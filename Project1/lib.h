#ifndef LIB_H
#define LIB_H

int tim_ucln(int a, int b);
int tim_bcnn(int a, int b);
int str_len(char* str);
/**
* @brief hàm dùng để tính tổng các phần tử trong mảng số nguyên
* @param int*: địa chỉ bắt đầu của mảng số nguyên
* @param int: kích thước của mảng 
* @return tổng các phần tử trong mảng
*/
int arr_sum(int arr[], int length);
/**
* @brief hàm in hao chuỗi string
* @param char*: địa chỉ bắt đuầ của chuỗi 
*/
void str_upper(char str[]);
#endif