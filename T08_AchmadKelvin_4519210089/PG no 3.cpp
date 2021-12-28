#include <iostream>
using namespace std;

int main()
{
	const int ach=2;
	int Nilai[ach];
	int Kel, vin=0;
	cout << endl;
	cout << "Menampilkan arrray 1 dimensi" <<endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
		for (Kel=0; Kel<ach; Kel++)
		{
			cout << "Isi element ke " << Kel+1 << " = "; cin>> Nilai[Kel];
			vin = vin + Nilai[Kel];
		}
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
	cout << "Total dari penjumlahan = " <<vin <<endl;
	cin.get();
}