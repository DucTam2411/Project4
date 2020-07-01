#include "nghien_cuu_sinh.h"

void nghien_cuu_sinh::nhap()
{
	nhan_vien::nhap();
	cout << "De tai: "; cin >> de_tai;
	cout << "Bai bao: "; cin >> bai_bao;
}

void nghien_cuu_sinh::xuat()
{
	nhan_vien::xuat();
	cout << "De tai: " << de_tai;
	cout << "\nBai bao: " << bai_bao << "\n";
}

bool nghien_cuu_sinh::isTienTien()
{
	return (de_tai >= 1 && bai_bao >= 2);
}
