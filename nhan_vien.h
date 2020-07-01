#pragma once
#include <iostream>
using namespace std;

class nhan_vien
{
protected:
	int ma_nv;
	string ho_ten;
	int ngaySinh, namSinh, thangSinh;
public:
	virtual void nhap();
	virtual void xuat();
	virtual bool isTienTien() = 0;
};

