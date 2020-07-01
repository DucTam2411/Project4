#include "quan_ly_nv.h"

void quan_ly_nv::nhapDS()
{
	cout << "Nhap so luong nhan vien: ";
	cin >> n;
	nv = new nhan_vien * [n];
	for (int i = 0; i < n; i++) {
		cout << "1 la giang vien\n"
			<< "2 la nghien cuu sinh\n"
			<< "3 la nhan vien van phong\n";
		int tem;
		cin >> tem;
		switch (tem)
		{
		case 1: {
			nv[i] = new Giang_vien;
			break;
		}
		case 2: {
			nv[i] = new nghien_cuu_sinh;
			break;
		}
		case 3: {
			nv[i] = new nv_van_phong;
			break;
		}
		default:
			break;
		}
		nv[i]->nhap();
	}
}

void quan_ly_nv::xuatDS()
{
	cout << "\n";
	for (int i = 0; i < n; i++) {
		nv[i]->xuat();
		cout << "\n";
	}
}

void quan_ly_nv::nvTienTien()
{
	cout << "Danh sach nhan vien tien tien: \n";
	for (int i = 0; i < n; i++) {
		if (nv[i]->isTienTien()) {
			nv[i]->xuat();
			cout << "\n";
		}
		
	}
	cout << "\n";
}
