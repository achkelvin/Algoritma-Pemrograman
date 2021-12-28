#include <iostream>
using namespace std;

int main()
{
float vin,Kel,Ach=150;
cout << endl;
cout << "Menampilkan Deret Angka" << endl;
cout << endl;
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
cout << "Masukkan Bilangan Akhir = " ; cin >> vin;
cout << endl;
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	for (Kel = 1; Kel<=vin; Kel++)
	{
		Ach = Ach / Kel;
		cout << "Bilangan Ke " << Kel << " adalah = " << Ach << endl;
	}
cin.get();
}