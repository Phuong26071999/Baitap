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

int main()
{
	int a, b, r, c, cd, cr, kqR;
	char phepToan;
	srand(time(NULL));
	int randA = 0 + rand() % (100 + 1 - 0);
	int randB = 0 + rand() % (100 + 1 - 0);
	cout << "Nhap 2 so nguyen: ";
	cin >> a >> b;
	//cout << "Tinh gi? (+,-,*,/,c) ";
	cout << "Tinh gi? (+,-,*,/) " << endl
		<< "\tr: Tinh cong tu 2 so ngau nhien." << endl
		<< "\tv: Tinh dien tich hinh vuong." << endl
		<< "\tn: Tinh dien tich hinh chu nhat." << endl
		<< "\tt: Tinh dien tich hinh tron." << endl
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
		if (kqR == (randA + randB)) {
			cout << "Ban da nhap dung ket qua la: " << randA + randB << " !!!" << endl;
		}
		else
			cout << "Ban da nhap sai ket qua!!!" << endl;
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
		break;
	default:
		cout << "Chon sai phep toan";
		break;
	}

	return 0;

}