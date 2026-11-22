#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "lib.h"

// Quy trình làm việc với file, sử dụng thư viện <stdio.h>
// 1.Khai báo con trỏ fileL FILE* fp;
// 2. mở file: dùng hàm fopen("file name","mode"), file name phải dưới dạng file name extension
// mode "r" -> mở để đọc
// mode "w" -> mở để ghi
// mode "a" -> mở để ghi nối tiếp
// 3. Thao tác đọc/ghi dữ liệu:
// dùng các hàm tương ứng (fgetc, fgets, fprintf, fscanf,fput,)
// 4. đóng fi;e: dùng hàm fclose()

void main() {
	//FILE* fp;
	//fp = fopen("D:\\studyC_2\\datanew.txt", "a");

	//if (fp == NULL)
	//{
	//	printf("Khong mo dc file\n");
	//}
	//else {
	//	printf("mo file thanh cong\n");
		//char c = fgetc(fp);
		//printf("%c %d\n", c,c); // mới đầu con trỏ nằm ở đầu tiên, đọc xong và dịch con trỏ sang phải 1 ký tự, 
		//						// đọc h xong dịch con trỏ  qua e, %d đọc ra ký tự trong bảng mã ascii
		//c = fgetc(fp);
		//printf("%c %d\n", c, c); // đọc e xong dịch con trỏ qua l
		//c = fgetc(fp);
		//printf("%c %d\n", c, c); // đọc l xong dịch con trỏ qua l
		//c = fgetc(fp);
		//printf("%c %d\n", c, c); // đọc l xong dịch con trỏ qua o

		//char str_buffer[100];
		//char* str = fgets(str_buffer, 5, fp); //fgets đọc được tối đa 1 dòng vì khi gặp \n thì sẽ kết thúc, hoặc gặp \0 ( ví dụ 5 thì đọc dc hell và \0)
		//printf("%s \n", str);

		//char str1[100];
		//char str2[100];
		//int n = fscanf(fp, "%s %s", str1, str2); //fscanf(fp, "%s %s", str1, str2) đọc hai từ từ file mà fp trỏ tới, rồi lưu từ đầu vào str1 và từ sau vào str2. 
												   // Lệnh printf bên dưới mới in hai từ đó ra màn hình.
		//printf("%s %s\n", str1, str2);
		//printf("n:%d\n", n);

		//n= fscanf(fp, "%s %s", str1, str2);
		//printf("%s %s\n", str1, str2);
		//printf("n:%d\n", n);

		//n = fscanf(fp, "%s %s", str1, str2);
		//printf("%s %s\n", str1, str2);
		//printf("n:%d\n", n);

		//n = fscanf(fp, "%s %s", str1, str2);
		//printf("%s %s\n", str1, str2);
		//printf("n:%d\n", n);

		//fputc(' ', fp); // fputs chỉ truyền vào đc 1 ký tự ( như char)
		//fputc('c', fp);
		//fputc(100, fp);
		//fputc(102, fp);
		//fputc(111, fp);
		//fputc(' ', fp); 
		//fputs("hello how r u", fp); //fputs truyền đc chuỗi ký tự
		//fputs("\n", fp);
		//fputs("diem:8", fp);
		//fputs("\n", fp);
		//int diem_so = 8;
		//fprintf(fp, "diem: %d", diem_so);

		//fprintf(fp, "%s %s\n", "Phuc", "Thai");
		//fclose(fp);
		
		
	// VD:
	// mở và tọa mới 1 file students.txt
	// ghi dữ liệu sau vào file
	// 101 Nguyen_Van_A 8.5
	// 102 Nguyen_Van_B 9.0
	// Đọc dữ liệu đã ghi vào file và in ra màn hình console
	// đóng file
	FILE* fp = fopen("D:\\studyC_2\\students.txt", "w");
	if (fp==NULL)
	{
		printf("Khong mo dc file\n");
	}
	else {
		printf("Mo file thanh cong\n");
		fprintf(fp, "%d %s %.1f\n", 101, "Nguyen_Van_A", 8.5);
		fprintf(fp, "%d %s %.1f\n", 102, "Nguyen_Van_B", 9.0);
		fclose(fp);
	}
	fp = fopen("D:\\studyC_2\\students.txt", "r");
	if (fp == NULL)
	{
		printf("Khong mo dc file\n");
	}
	else {
		int id;
		char name[100];
		float diem;
		printf("Danh sach sinh vien: \n");
		int n = fscanf(fp, "%d %s %f", &id, name, &diem);
		while (n == 3) {
			printf("MSSV: %d, ho ten:%s, diem so: %.1f\n", id, name, diem);
			n = fscanf(fp, "%d %s %f", &id, name, &diem);
			fclose(fp);
		}
	}
}
