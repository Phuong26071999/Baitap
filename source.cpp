#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>

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
	//cout << "Tinh gi? (+,-,*,/,c) ";
	cout << "Tinh gi? (+,-,*,/) " << endl
		<< "\tr: Tinh cong tu 2 so ngau nhien." << endl
		<< "\tv: Tinh dien tich hinh vuong." << endl
		<< "\tn: Tinh dien tich hinh chu nhat." << endl
		<< "\tt: Tinh dien tich hinh tron." << endl
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
		if (kqR == (randA + randB)) {
			cout << "Ban da nhap dung ket qua la: " << randA + randB << " !!!" << endl;
		}
		else
			cout << "Ban da nhap sai ket qua!!!" << endl;
		break;
	case 'x':
		TruNgauNhien(randA,randB);
		break;
	default:
		cout << "Chon sai phep toan";
		break;
	}

	return 0;

}