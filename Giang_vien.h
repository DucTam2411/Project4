#pragma once
#include "nhan_vien.h"
class Giang_vien :
    public nhan_vien
{
    int so_tiet;
    int so_khoa_luan;
public:
    Giang_vien(){}
    void nhap();
    void xuat();
    bool isTienTien();
};

