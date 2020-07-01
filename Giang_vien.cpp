#include "Giang_vien.h"

void Giang_vien::nhap()
{
	nhan_vien::nhap();
	cout << "So tiet: "; cin >> so_tiet;
	cout << "So khoa luan: "; cin >> so_khoa_luan;
}

void Giang_vien::xuat()
{
	nhan_vien::xuat();
	cout << "So tiet: " << so_tiet;
	cout << "\nSo khoa luan: " << so_khoa_luan << "\n";
}

bool Giang_vien::isTienTien()
{
	return (so_tiet >= 300 && so_khoa_luan >= 5);
}
