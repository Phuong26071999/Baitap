#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
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
	return (float)(a / b);
}
float ChuVi_HinhVuong(float c) {
	return (float)(c * 4);
}
float ChuVi_HinhCN(float cd, float cr) {
	return (float)((cd + cr) * 2);
}
float ChuVi_HinhTron(float r) {
	return (2 * r)*(3,14);
}

int main()
{
	int a, b;
	float r, cd, cr, c;
	char phepToan;
	cout << "Nhap 2 so nguyen: ";
	cin >> a >> b;
	cout << "Tinh gi? (+,-,*,/,d,e,f) ";
	cin >> phepToan;

	switch (phepToan)
	{
	case '+':
		cout << "Tong la: " << tong(a, b) << endl;
		break;
	case '-':
		cout << "hieu la : " << hieu(a, b) << endl;
		break;
	case '*':
		cout << "Tich cua " << a << "x" << b << " = " << tich(a, b);
		break;
	case '/':
		cout << "Ket qua phep tinh chia giua " << a << "va" << b << "la: " << thuong(a, b) << endl;
		break;
	case 'd':
		cout << "nhap vao do dai hinh vuong: ";
		cin >> c;
		cout << "Chu vi hinh vuong la: " << ChuVi_HinhVuong(c);
		break;
	case 'e':
		cout << "Nhap theo dung thu tu chieu dai, chieu rong: ";
		cin >> cd >> cr;
		cout << "Chu vi hinh CN la: " << ChuVi_HinhCN(cd, cr);
		break;
	case 'f':
		cout << "Nhap ban kinh: ";
		cin >> r;
		cout << "Chu vi hinh CN la: " << ChuVi_HinhTron(r);
		break;



	default:
		cout << "Chon sai phep toan";
		break;
	}
	return 0;
}