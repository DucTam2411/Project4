#pragma once
#include "nhan_vien.h"
#include "Giang_vien.h"
#include "nghien_cuu_sinh.h"
#include "nv_van_phong.h"
class quan_ly_nv
{
	nhan_vien** nv;
	int n;
public:
	quan_ly_nv(){}
	void nhapDS();
	void xuatDS();
	void nvTienTien();
};

