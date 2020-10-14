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
	return (float)a / b;
}
int main()
{
	int a, b, kqR;
	char phepToan;
	srand(time(NULL));
	int randA = 0 + rand() % (100 + 1 - 0);
	int randB = 0 + rand() % (100 + 1 - 0);
	cout << "Nhap 2 so nguyen: ";
	cin >> a >> b;
	cout << "Tinh gi? (+,-,*,/,c) ";
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
	case 'c':
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
	default:
		cout << "Chon sai phep toan";
		break;
	}
	return 0;
}