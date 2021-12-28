#include <iostream>
using namespace std;

int main()
{
	long Ach,mad,Ke,lv,in;
	Ke = 1100;
	cout << "==============================================" << endl;
	cout << " TOKO BUAH MANGGA BU NOVITA " << endl;
	cout << "==============================================" << endl;
	cout << endl;
	cout << "Masukkan Jumlah Buah Mangga Yang Dibeli = "; cin >> mad;
	cout << endl;
	
	lv = mad * Ke;
	
	if (lv >= 100000)
		{
			Ach = lv * 0.1;
		}
	else
		{
			Ach = 0;
		}
	in = lv - Ach;
	cout << " TOTAL YANG HARUS DIBAYAR ADALAH = " << in << endl;
	cout << "==============================================" << endl;
	cout << endl;
	cin.get();
}