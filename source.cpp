#include <iostream>
using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap 2 so nguyen: ";
	cin >> a >> b;
	cout << "Tinh gi? (+,-,*,/) ";
	cin >> ch;
	
	float thuong(int a, int b){
		return (float)a/b;
	}
	
	switch (phepToan)
	{
	case '+':
		
		break;
	case '-':

		break;
	case '*':

		break;
	case '/':
		float kq4 = thuong(a,b);
		cout << "Ket qua phep tinh chia giua " + a + "va" + b + "la: " + kq4;
		break;
	default:
		cout << "Chon sai phep toan";
		break;
	}
	return 0;
}