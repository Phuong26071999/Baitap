#include <iostream>
#include <cstdlib>
#include <ctime>
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
float ChuVi_HinhVuong(float c) {
	return (float)(c * 4);
}
float ChuVi_HinhCN(float cd, float cr) {
	return (float)((cd + cr) * 2);
}
float ChuVi_HinhTron(float r) {
	return (2 * r)*(3, 14);
}
void TruNgauNhien(int a, int b) {
	cout << "Luyen tap phep Tru 2 so ngau nhien" << endl;
	cout << "So nguyen a = " << a << endl;
	cout << "So nguyen b = " << b << endl;
	float kq;
	cout << "Moi ban nhao ket qua phep tru " << a << " - " << b << " = ";
	cin >> kq;
	do {
		if (kq == a - b) {
			cout << "Ban da nhap dung ket qua phe tinh " << a << " - " << b << " = " << kq;
		}
		else {
			cout << "ban da nhap sai vui long nhap lai ket qua" << endl;
			cout << "Nhap lai = ";
			cin >> kq;
		}
	} while (kq != a - b);
}

int main()
{
	int a, b, kqR;
	float r, cd, cr, c;
	char phepToan;
	srand(time(NULL));
	int randA = 0 + rand() % (100 + 1 - 0);
	int randB = 0 + rand() % (100 + 1 - 0);
	cout << "Nhap 2 so nguyen: ";
	cin >> a >> b;
	cout << "Tinh gi? (+,-,*,/) " << endl
		<< "\tr: Tinh cong tu 2 so ngau nhien." << endl
		<< "\tv: Tinh dien tich hinh vuong." << endl
		<< "\tn: Tinh dien tich hinh chu nhat." << endl
		<< "\tt: Tinh dien tich hinh tron." << endl
		<< "\td: Tinh chu vi hinh vuong." << endl
		<< "\te: Tinh chu vi CN." << endl
		<< "\tf: Tinh chu vi hinh tron." << endl
		<< "\tx: Tru ngau nhien 2 so." << endl
		<< "Hay chon: ";
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
		cout << "Tich cua " << a << "x" << b << " = " << tich(a, b) << endl;
		break;
	case '/':
		cout << "Ket qua phep tinh chia giua " << a << "va" << b << "la: " << thuong(a, b) << endl;
		break;
	case 'r':
		cout << "\t\tLuyen tap phep cong tu 2 so ngau nhien." << endl << endl;
		cout << "\tSo nguyen a = " << randA << endl;
		cout << "\tSo nguyen b = " << randB << endl;
		cout << "\tKet qua " << randA << " + " << randB << " = ";
		cin >> kqR;
		while (kqR != randA + randB) {
			cout << "Ban da nhap sai ket qua, nhap lai: ";
			cin >> kqR;
		}
		cout << "Ban da nhap dung ket qua la: " << randA + randB << " !!!" << endl;
		break;
	case 'v':
		cout << "nhap vao do dai hinh vuong: ";
		cin >> c;
		cout << "Dien tich hinh vuong la: " << Tinh_Dientich_HinhVuong(c);
		break;
	case 'n':
		cout << "Nhap theo dung thu tu chieu dai, chieu rong: ";
		cin >> cd >> cr;
		cout << "Dien tich hinh chu nhat la: " << cd << "x" << cr << "= " << Tinh_DienTich_ChuNhat(cd, cr) << endl;
		break;
	case 't':
		cout << "Nhap ban kinh: ";
		cin >> r;
		cout << "Dien tich hinh tron la : " << Tinh_DienTich_HinhTron(r) << endl;
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
	case 'x':
		TruNgauNhien(randA, randB);
		break;
	default:
		cout << "Chon sai phep toan";
		break;
	}

	return 0;


}
