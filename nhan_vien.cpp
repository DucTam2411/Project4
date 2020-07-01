#include "nhan_vien.h"

void nhan_vien::nhap()
{
	cout << "Ma nhan vien: "; cin >> ma_nv;
	cout << "Ho ten: "; cin >> ho_ten;
	cout << "Ngay thang: "; cin >> ngaySinh >> thangSinh >> namSinh;
}

void nhan_vien::xuat()
{
	cout << "\nMa nhan vien: "; cout<< ma_nv;
	cout << "\nHo ten: "; cout<< ho_ten;
	cout << "\nNgay thang: "; cout << ngaySinh << thangSinh << namSinh << "\n";
}
