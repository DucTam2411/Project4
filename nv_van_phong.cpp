#include "nv_van_phong.h"

void nv_van_phong::nhap()
{
	nhan_vien::nhap();
	cout << "So lop boi duong da tham du: "; cin >> so_lop;
	cout << "So gio tham gia lao dong cong ich: "; cin >> so_gio;
}

void nv_van_phong::xuat()
{
	nhan_vien::xuat();
	cout << "So lop boi duong da tham du: "; cout<< so_lop;
	cout << "\nSo gio tham gia lao dong cong ich: "; cout << so_gio << "\n";
}

bool nv_van_phong::isTienTien()
{
	return (so_lop >= 1 && so_gio >= 20);
}
