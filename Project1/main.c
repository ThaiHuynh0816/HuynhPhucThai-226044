#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//Bài 1. Nhập vào một số nguyên n. In ra giá trị của n.
void main() {
	int n;
	printf("nhap vao 1 so nguyen: ");
	scanf("%d", &n);
	printf("so nguyen ban da nhap: %d\n", n);
//Bài 2. Nhập vào họ tên, tuổi và điểm trung bình của một sinh viên.In toàn bộ thông tin ra màn hình.
	char fullname[100]; //nghĩa là tạo ra 100 ô nhớ kiểu char để lưu nhiều ký tự.
	int age;
	float avgscore;
	printf("nhap ho va ten: ");
	scanf("%[^\n]", &fullname); //Đọc liên tục tất cả ký tự không phải Enter; gặp Enter thì dừng (không lưu enter vào tên), dùng để nhập một dòng chữ có khoảng trắng
	printf("nhap tuoi: ");
	scanf("%d", &age);
	printf("nhap diem trung binh:");
	scanf("%f", &avgscore);
	printf("ho va ten ban da nhap: %s\n", fullname);
	printf("tuoi ban da nhap: %d\n", age);
	printf("diem trung binh ban da nhap: %f\n", avgscore);
//Bài 3. Nhập vào hai số nguyên a và b. Tính và in ra tổng, hiệu, tích và thương của hai số.
	int a;
	int b;
	printf("nhap vao hai so nguyen a va b: ");
	scanf("%d %d", &a ,& b);
	printf("Tong cua a va b la: %d\n", a + b);
	printf("Hieu cua a va b la: %d\n", a - b);
	printf("Tich cua a va b la: %d\n", a * b);
	printf("Thuong cua a va b la: %f\n", a * (1.0) / b);
//Bài 4. Nhập vào bán kính r của hình tròn. Tính chu vi và diện tích hình tròn.
	int r = 0;
	printf("nhap ban kinh r: ");
	scanf("%d", &r);
	printf("chu vi hinh tron la: %f\n", 2 * r * 3.14);
	printf("dien tich hinh tron la: %f\n", r * r * 3.14);
//Bài 5. Nhập vào chiều dài và chiều rộng của hình chữ nhật.Tính diện tích và chu vi hình chữ nhật.
	float chieudai;
	float chieurong;
	printf("nhap chieu dai cua hinh chu nhat: ");
	scanf("%f", &chieudai);
	printf("nhap chieu rong cua hinh chu nhat: ");
	scanf("%f", &chieurong);
	printf("dien tich hinh chu nhat la : %.2f\n", chieurong * chieudai);
	printf("chu vi hinh chu nhat la : %.2f\n", 2 *(chieurong + chieudai));
//Bài 6. Nhập vào một số nguyên m. Kiểm tra m là số dương, số âm hay bằng 0.
	int m;
	printf("nhap vao mot so nguyen m: ");
	scanf("%d", &m);
	if (m > 0) {
		printf("m la so duong \n");
	}
	else if (m < 0) {
		printf("m la so am \n");
	}
	else {
		printf("m bang 0 \n");
	}
//Bài 7. Nhập vào một số nguyên k. Kiểm tra k là số chẵn hay số lẻ.
		int k;
		printf("nhap vao mot so nguyen k: ");
		scanf("%d", &k);
		if (k % 2 == 0) {
			printf("k la so chan \n");
		}
		else {
			printf("k la so le \n");
		}
//Bài 8. Nhập vào hai số nguyên o và p.Tìm và in ra số lớn hơn.Nếu hai số bằng nhau thì thông báo hai số bằng nhau.
		int o;
		int p;
		printf("nhap vao hai so nguyen o va p: ");
		scanf("%d %d", &o, &p);
		if (o > p) {
			printf("so nguyen o lon hon p ");
		}
		else if (o < p) {
			printf("so nguyen p lon hon o ");
		}
		else {
			printf("hai so bang nhau ");
		}
//Bài 9. Nhập vào ba số nguyên q, w, e. Tìm số lớn nhất trong ba số.
		int q;
		int w;
		int e;
		int max;
		printf("nhap vao ba so nguyen q, w, e: ");
		scanf("%d %d %d", &q, &w, &e);
		max = q;
		if (w > max) {
			max = w;
		}
		if (e > max) {
			max = e;
		}
		printf("so lan nhat trong ba so la: %d\n", max);
//Bài 10. Nhập vào một số nguyên v. Kiểm tra r có chia hết cho cả 3 và 5 hay không.
		int v;
		printf("Nhap vao mot so nguyen r: ");
		scanf("%d", &v);
		if (v % 3 == 0 && v % 5 == 0) {
			printf("v chia het cho ca 3 va 5 \n");
		}
		else {
			printf("v khong chia het cho ca 3 va 5 \n");
		}
//Bài 11. Nhập vào điểm của một sinh viên từ 0 đến 10. Xếp loại theo quy tắc :
//Từ 8 đến 10 : Giỏi
//Từ 6.5 đến dưới 8 : Khá
//Từ 5 đến dưới 6.5 : Trung bình
//Dưới 5 : Yếu
		int diem;
		printf("nhap vao diem cua sinh vien: ");
		scanf("%d", &diem);
		if (diem >= 8 && diem <= 10) {
			printf("Gioi \n");
		}
		else if (diem >= 6.5 && diem < 8) {
			printf("Kha \n");
		}
		else if (diem >= 5 && diem < 6.5) {
			printf("Trung Binh \n");
		}
		else if (diem < 5) {
			printf("Yeu \n");
		}
//Bài 12. Nhập vào một số nguyên từ 1 đến 7. In ra tên thứ tương ứng trong tuần. Nếu nhập ngoài khoảng thì thông báo dữ liệu không hợp lệ.
		int tenthu;
		printf("nhap vao mot so nguyen tu 1 den 7: ");
		scanf("%d", &tenthu);
		switch (tenthu){
		    case 1:
				printf("Thu Hai\n");
				break;
			case 2:
				printf("Thu Ba\n");
				break;
			case 3:
				printf("Thu Tu\n");
				break;
			case 4:
				printf("Thu Nam\n");
				break;	
			case 5:
				printf("Thu Sau\n");
				break;
			case 6:
				printf("Thu Bay\n");
				break;
			case 7:
				printf("Chu Nhat\n");
				break;
			default:
				printf("Du lieu khong hop le\n");
}
//Bài 13. Nhập vào tháng và năm.Cho biết tháng đó có bao nhiêu ngày.Xử lý đúng trường hợp tháng 2 của năm nhuận.
// 1 năm nhuận là 1 năm chia hết cho 400 hoăc chia hết cho 4 nhưng ko chia hết cho 100
		int year;
		int month;
		int dieukien1;
		int dieukien2;
		int namnhuan;
		printf("nhap thang: ");
		scanf("%d", &month);
		printf("nhap nam: ");
		scanf("%d", &year);
		dieukien1 = year % 400 == 0;
		dieukien2 = (year % 4 ==0) && (year % 100 != 0);
		namnhuan = dieukien1 || dieukien2;
		if (namnhuan) {
			printf("nam %d la nam nhuan \n", year);
		}
		else {
			printf("nam %d khong phai la nam nhuan \n", year);
		}
		switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("Thang %d nam %d co 31 ngay\n", month, year);
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("Thang %d nam %d co 30 ngay\n", month, year);
			break;
		case 2:
			if (namnhuan) {
				printf("Thang 2 nam %d co 29 ngay\n", year);
			}
			else {
				printf("Thang 2 nam %d co 28 ngay\n", year);
			}
			break;

		default:
			printf("Thang khong hop le\n");
		}
//Bài 14. Nhập vào ba số t, h, u. Kiểm tra ba số có thể tạo thành ba cạnh của một tam giác hay không.
// Điều kiện tạo thành tam giác: Ba cạnh phải Lớn hơn 0 và Tổng hai cạnh bất kỳ phải lớn hơn cạnh còn lại.
		int t;
		int h;
		int u;
		int dieukienthanhtamgiac1;
		int dieukienthanhtamgiac2;
		int tamgiac;
		printf("nhap vao ba so t, h, u: ");
		scanf("%d %d %d", &t, &h, &u);
		dieukienthanhtamgiac1 = t > 0 && h > 0 && u > 0;
		dieukienthanhtamgiac2 = (t + h > u) && (t + u > h) && (h + u > t);
		tamgiac = dieukienthanhtamgiac1 && dieukienthanhtamgiac2;
		if (tamgiac) {
			printf("ba so co the tao thanh mot tam giac \n");
		}
		else {
			printf("ba so khong the tao thanh mot tam giac \n");
		}
//Bài 15. Nhập vào ba cạnh của một tam giác. Nếu là tam giác hợp lệ, hãy xác định đó là tam giác đều, tam giác cân, tam giác vuông hay tam giác thường
		int canh1;
		int canh2;
		int canh3;
		int dieukienthanhtamgiacmot;
		int dieukienthanhtamgiachai;
		int triangle;
		printf("nhap vao thong so 3 canh cua 1 tan giac: ");
		scanf("%d %d %d", &canh1, &canh2, &canh3);
		dieukienthanhtamgiacmot = canh1 > 0 && canh2 > 0 && canh3 > 0;
		dieukienthanhtamgiachai = (canh1 + canh2 > canh3) && (canh1 + canh3 > canh2) && (canh2 + canh3 > canh1);
		triangle = dieukienthanhtamgiacmot && dieukienthanhtamgiachai;
		if (triangle) {
			printf("ba so co the tao thanh mot tam giac \n");
			if (canh1 == canh2 && canh2 == canh3) {
				printf("day la tam giac deu \n");
			}
			else if (canh1 == canh2 || canh1 == canh3 || canh2 == canh3) {
				printf("day la tam giac can \n");
			}
			else if (canh1 * canh1 + canh2 * canh2 == canh3 * canh3 || canh1 * canh1 + canh3 * canh3 == canh2 * canh2 || canh2 * canh2 + canh3 * canh3 == canh1 * canh1) {
				printf("day la tam giac vuong \n");
			}
			else {
				printf("day la tam giac thuong \n");
			}
		}
		else {
			printf("ba so khong the tao thanh mot tam giac \n");
		}
//Bài 16. Nhập vào chỉ số điện tiêu thụ trong tháng. Tính tiền điện theo quy tắc:
//0–50 kWh : 1.800đ / kWh
//51–100 kWh : 2.000đ / kWh
//101–200 kWh : 2.500đ / kWh
//Trên 200 kWh : 3.000đ / kWh
		int sodien;
		printf("nhap vao chi so dien tieu thu trong thang: ");
		scanf("%d", &sodien);
		if (sodien >= 0 && sodien <= 50) {
			printf("So tien dien tieu thu trong thang la: %.2f dong\n", sodien * 1.800);
		}
		else if (sodien >= 51 && sodien <= 100) {
			printf("So tien dien tieu thu trong thang la: %.2f dong\n", 50 * 1.800 + (sodien - 50) * 2.000);
		}
		else if (sodien >= 101 && sodien <= 200) {
			printf("So tien dien tieu thu trong thang la: %.2f dong\n", 50 * 1.800 + 50 * 2.000 + (sodien - 100) * 2.500);
		}
		else if (sodien > 200) {
			printf("So tien dien tieu thu trong thang la: %.2f dong\n", 50 * 1.800 + 50 * 2.000 + 100 * 2.500 + (sodien - 200) * 3.000);
		}
//Bài 17. Nhập vào số tiền mua hàng. Tính số tiền khách phải thanh toán sau khi giảm giá:
//Dưới 500.000đ: không giảm
//Từ 500.000đ đến dưới 1.000.000đ : giảm 5 %
//Từ 1.000.000đ đến dưới 2.000.000đ : giảm 10 %
//Từ 2.000.000đ trở lên : giảm 15 %
		float tienhang;
		printf("nhap vao so tien mua hang: ");
		scanf("%f", &tienhang);
		if (tienhang < 500000) {
			printf("So tien phai thanh toan: %.3f\n", tienhang);
		}
		else if (tienhang >= 500000 && tienhang <= 1000000) {
			printf("So tien phai thanh toan: %.3f\n", tienhang - tienhang * 5/100);
		}
		else if (tienhang >= 1000000 && tienhang <= 2000000) {
			printf("So tien phai thanh toan: %.3f\n", tienhang - tienhang * 10 / 100);
		}
		else if (tienhang > 2000000) {
			printf("So tien phai thanh toan: %.3f\n", tienhang - tienhang * 15 / 100);
		}
//Bài 18. Nhập vào số tiền lương của một nhân viên. Tính thuế thu nhập theo quy tắc:
//Lương dưới 10 triệu: không đóng thuế
//	Từ 10 đến dưới 20 triệu : thuế 10 %
//	Từ 20 đến dưới 30 triệu : thuế 15 %
//	Từ 30 triệu trở lên : thuế 20 %
//	In ra tiền thuế và tiền lương thực nhận.
		float luong;
		float tongtien;
		float tienthue;
		printf("Nhap so tien luong cua nhan vien: ");
		scanf("%f", &luong);
		if (luong <= 10000000) {
			tongtien = luong;
			tienthue = 0;
		}
		else if (luong > 10000000 && luong <= 20000000) {
			tongtien = luong - luong * 10 / 100;
			tienthue = luong * 10 / 100;
		}
		else if (luong > 20000000 && luong <= 30000000) {
			tongtien = luong - luong * 15 / 100;
			tienthue = luong * 15 / 100;
		}
		else if (luong > 30000000) {
			tongtien = luong - luong * 20 / 100;
			tienthue = luong * 20 / 100;
		}
		printf("Tong tien thue phai tra: %.3f\n", tienthue);
		printf("Tong tien thu nhap sau thue: %.3f\n", tongtien);
//Bài 19. Nhập vào ba số nguyên h, j, k và một phép toán +, -, *, /. Thực hiện phép tính tương ứng. Nếu phép toán không hợp lệ hoặc phép chia có mẫu số bằng 0 thì thông báo lỗi.
		int s;
		int j;
		int l;
		char pheptoan;
		printf("Nhap vao ba so nguyen s, j, l: ");
		scanf("%d %d %d", &s, &j, &l);
		printf("Nhap vao phep toan (+, -, *, /): ");
		scanf(" %c", &pheptoan);
		switch (pheptoan) {
		case '+':
			printf("Ket qua: %d\n", s + j + l);
			break;
		case '-':
			printf("Ket qua: %d\n", s - j - l);
			break;

		case '*':
			printf("Ket qua: %d\n", s * j* l);
			break;
		case '/':
			if (j == 0 || l == 0) {
				printf("Loi: Khong the chia cho 0\n");
			}
			else {
				printf("Ket qua: %.2f\n",(float)s / j / l);
			}
			break;
		default:
			printf("Loi: Phep toan khong hop le\n");
			break;
		}
//Bài 20. Viết chương trình nhập vào số điện tiêu thụ và số nước tiêu thụ của một hộ gia đình. Tính tổng tiền phải trả, trong đó tiền điện và tiền nước được tính theo các bậc giá khác nhau. 
// Sau đó áp dụng thêm mức giảm giá 5% nếu tổng hóa đơn từ 2.000.000đ trở lên. In ra chi tiết tiền điện, tiền nước, tiền giảm giá và tổng tiền phải thanh toán.
	float sodientieuthu;
	float sonuoctieuthu;
	float sotiennuoc;
	float sotiendien;
	float tonghoadon;
	printf("Nhap vao so dien tieu thu: ");
	scanf("%f", &sodientieuthu);
	printf("Nhap vao so nuoc tieu thu: ");
	scanf("%f", &sonuoctieuthu);
	//Tính tiền điện
	if (sodientieuthu >= 0 && sodientieuthu <= 50) {
		sotiendien = sodientieuthu * 1800;
	}
	else if (sodientieuthu >50 && sodientieuthu <= 100) {
		sotiendien = 50 * 1800 + (sodientieuthu - 50) * 2000;
	}
	else if (sodientieuthu >100 && sodientieuthu <= 200) {
		sotiendien = 50 * 1800 + 50 * 2000 + (sodientieuthu - 100) * 2500;
	}
	else if (sodientieuthu > 200) {
		sotiendien = 50 * 1800 + 50 * 2000 + 100 * 2500 + (sodientieuthu - 200) * 3000;
	}
	printf("So tien dien tieu thu: %.3f \n", sotiendien);
	//Tính tiền nước
	if (sonuoctieuthu >= 0 && sonuoctieuthu <= 50) {
		sotiennuoc = sonuoctieuthu * 3800;
	}
	else if (sonuoctieuthu >= 51 && sonuoctieuthu <= 100) {
		sotiennuoc = 50 * 3800 + (sonuoctieuthu - 50) * 5000;
	}
	else if (sonuoctieuthu >= 101 && sonuoctieuthu <= 200) {
		sotiennuoc = 50 * 3800 + 50 * 5000 + (sonuoctieuthu - 100) * 8500;
	}
	else if (sonuoctieuthu > 200) {
		sotiennuoc = 50 * 3800 + 50 * 5000 + 100 * 8500 + (sonuoctieuthu - 200) * 11000;
	}
	printf("So tien nuoc tieu thu: %.3f \n", sotiennuoc);
	//Giảm giá 5% nếu tổng hóa đơn từ 2.000.000đ trở lên và tiền tổng thanh toán
	tonghoadon = sotiennuoc + sotiendien;
	printf("So tien tong la: %.3f\n", tonghoadon);
	if (tonghoadon >= 2000000) {
		printf("so tien duoc giam gia 5%% voi tong hoa don tu 2000000: %.3f\n", tonghoadon * 5 / 100);
		printf("Tong tien con lai phai tra: %.3f\n", tonghoadon - tonghoadon * 5 / 100);
	}
	else {
		printf("Khong duoc giam 5% do tong hoa don khong tren 2000000");
	}
}