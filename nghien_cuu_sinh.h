#pragma once
#include "nhan_vien.h"
class nghien_cuu_sinh :
    public nhan_vien
{
    int de_tai;
    int bai_bao;
public:
    nghien_cuu_sinh(){}
    void nhap();
    void xuat();
    bool isTienTien();
};

