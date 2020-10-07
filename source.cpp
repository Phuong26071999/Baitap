#include <iostream>
using namespace std;
int tong(int a, int b){
	int Tong = a + b;
	return Tong:
}
int hieu(int a, int b){
	return (a - b);
}
int tich(int a, int b){
	return a * b;
}
float thuong(int a, int b){
	while (b == 0){
		cout << "Nhap sai, nhap b khac 0: ";
		cin >> b;
	}
	return (float) a/b;
}
int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap 2 so nguyen: ";
	cin >> a >> b;
	cout << "Tinh gi? (+,-,*,/) ";
	cin >> ch;
	
	switch (phepToan)
	{
	case '+':
		cout<<"Tong la: <<tong(a,b)<<endl;
		break;
	case '-':
		int kq2 = hieu(a,b);
		cout<<"hieu la : "<< kq2 << endl;
		break;
	case '*':
		int kq;
		kq = tich(a,b);
		cout << "Tich cua " << a << "x" << b << " = " << kq;
		break;
	case '/':
		float kq4 = thuong(a,b);
		cout << "Ket qua phep tinh chia giua " << a << "va" << b << "la: " << kq4;
		break;
	default:
		cout << "Chon sai phep toan";
		break;
	}
	return 0;
}