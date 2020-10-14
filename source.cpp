#include <iostream>
#include <math.h>
using namespace std;
const float PI = 3.14;
int tong(int a, int b) {
	int Tong = a + b;
	return Tong;
}
int hieu(int a, int b) {
	return (a - b);
}
int tich(int a, int b) {
	return a * b;
}
float thuong(int a, int b) {
	while (b == 0) {
		cout << "Nhap sai, nhap b khac 0: ";
		cin >> b;
	}
	return (float)a / b;
}
float Tinh_Dientich_HinhVuong(float c)
{
	return (float)(c*c);
}
float Tinh_DienTich_ChuNhat(float cd, float cr)
{

	return (float)(cd * cr);
}
float Tinh_DienTich_HinhTron(float r) {
	return (pow(r, 2)*PI);

}
int main()
{
	int a, b,r,c, cd,cr;
	char phepToan;
	cout << "Nhap 2 so nguyen: ";
	cin >> a >> b;
	cout << "nhap vao do dai hinh vuong";
	cin >> c;
	cout << "Nhap theo dung thu tu chieu dai, chieu rong, ban kinh";
	cin >> cd >> cr>>r;
	cout << "Tinh gi? (+,-,*,/, dien tich hinh vuong(v), dien tich hinh chu nhat(n), dien tich hinh tron(t)) ";
	cin >> phepToan;

	switch (phepToan)
	{
	case '+':
		cout << "Tong la:" <<tong(a,b)<<endl;
			break;
	case '-':
		cout << "hieu la : " << hieu(a, b) << endl;
		break;
	case '*':
		cout << "Tich cua " << a << "x" << b << " = " << tich(a, b);;
		break;
	case '/':
		cout << "Ket qua phep tinh chia giua " << a << "va" << b << "la: " << thuong(a, b);
		break;
	case 'v':
		cout << "Dien tich hinh chu nhat la: " << Tinh_Dientich_HinhVuong(c);
		break;
	case 'n':
		cout << "Dien tich hinh chu nhat la: " << cd << "x" << cr << "= " << Tinh_DienTich_ChuNhat(cd, cr);
		break;
	case 't':
		cout << "Dien tich hinh tron la : " << Tinh_DienTich_HinhTron(r);
		break;

	default:
		cout << "Chon sai phep toan";
		break;
	}
	
	return 0;
	
}