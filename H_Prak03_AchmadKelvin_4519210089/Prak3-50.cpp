#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int Kelvin;
char Ac;
float Sisi, Luass4, Kels4, Luass3, a, b, c, Kels3, Alas, Tinggi;
cout << endl;
cout << "MENU" << endl;
cout << "~~~~" << endl;
cout << " A. Segiempat " << endl;
cout << " B. Segitiga " << endl;
cout << " C. Keluar " << endl;
cout << " Pilih [A/B/C] = " ; cin >> Ac;
cout << endl;
switch (Ac)
{
case 'A':
cout << " 1. Luas Segiempat = " << endl;
cout << " 2. Keliling Segiempat = " << endl;
cout << " 3. Exit - Kembali Ke Menu Utama " <<endl;
cout << " Pilih [1/2/3] : " ; cin >> Kelvin;
cout << " Masukkan Ukuran sisi = " ; cin >> Sisi;
switch (Kelvin)
{
	case 1:
		Luass4 = Sisi * Sisi;
		cout << " Luas Segiempat = " << Luass4 << endl; break;
	case 2:
		Kels4 = 4 * Sisi;
		cout << " Keliling Segiempat = " << Kels4 << endl; break;
	case 3:
		switch (Ac)
		cout << " Kembali Ke Menu Utama " << endl;
	default : cout << " Masukkan Dengan Benar " << endl;
}
break;
case 'B' :
cout << " 1. Luas Segitiga = " << endl;
cout << " 2. Keliling Segitiga = " << endl;
cout << " 3. Exit - Kembali Ke Menu Utama " << endl;
cout << " Pilih [1/2/3] : " ; cin >> Kelvin;
switch (Kelvin)
{
	case 1:
		cout << " Masukkan Ukuran Alas = " ; cin >> Alas;
		cout << " Masukkan Ukuran Tinggi = " ; cin >> Tinggi;
		Luass3 = 0.5 * Alas * Tinggi;
		cout << " Luas Segitiga = " << Luass3 << endl; break;
	case 2:
		cout << " Masukkan sisi a = " ; cin >> a;
		cout << " Masukkan sisi b = " ; cin >> b;
		cout << " Masukkan sisi c = " ; cin >> c;
		Kels3 = a + b +c;
		cout << " Keliling Segitiga = " << Kels3 << endl; break;
	case 3:
		switch (Ac)
		cout << " Kembali Ke Menu Utama " << endl; break;
	default : cout << " Masukkan Dengan Benar " << endl;
}
break;
case 'C' :
exit;
break;
default : cout << "  " << endl;
}
cin.get();
}