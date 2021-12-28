#include <iostream>
using namespace std;
int main()
{
	int Ach [8][2];
	int Kel, vin;
	cout << endl;
	cout << "Menampilkan Array/Larik 2 Dimensi " << endl;
	cout << "Dengan Ordo 8x2 Melalui Inputan " << endl;
	cout << "----------------------------------" << endl;
	cout << endl;
	cout << endl;
	for (Kel = 0; Kel<8; Kel++)			{
		for (vin = 0; vin<2; vin++)		{
		cout << "Masukkan Isi Elemen [" << Kel+1<<"]["<<vin+1<<"]  :  ";
	cin >> Ach[Kel][vin];		}	}
	cout << endl;
	cout << "Tampilan Isi Elemen" << endl;
	cout << "-------------------" << endl;
	cout << endl;
	for (Kel = 0; Kel<8; Kel++)		{
		for (vin = 0; vin<2; vin++)		
			cout << Ach[Kel][vin] << "   ";
	cout << endl;}	
cin.get();
}