#pragma once
#include "nhan_vien.h"
class nv_van_phong : public nhan_vien
{
	int so_lop;
	int so_gio;
public:
	nv_van_phong(){}
	void nhap();
	void xuat();
	bool isTienTien();

};

