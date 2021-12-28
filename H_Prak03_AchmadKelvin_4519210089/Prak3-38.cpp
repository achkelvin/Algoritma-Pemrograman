#include <iostream>
#include <cmath>
using namespace std;

int main()
{
char Ac;
float hm, ad, Kel, vin;
cout << endl;
cout << "MENU" << endl;
cout << "~~~~" << endl;
cout << " A. Menghitung Luas Persegi Panjang " << endl;
cout << " B. Menghitung Keliling Persegi Panjang " << endl;
cout << " C. Keluar " << endl;
cout << " Pilih [A/B/C] = " ; cin >> Ac;
cout << endl;
switch (Ac)
{
case 'A' :
cout << " Panjang Persegi Panjang = " ; cin >> hm;
cout << " Lebar Persegi Panjang = " ; cin >> ad;
cout << endl;
vin = hm * ad;
cout << " Luas Persegi Panjang = " << vin << endl;
break;
case 'B' :
cout << " Panjang Persegi Panjang = " ; cin >> hm;
cout << " Lebar Persegi Panjang = " ; cin >> ad;
cout << endl;
Kel = 2*(hm + ad);
cout << " Keliling Persegi Panjang = " << Kel << endl;
break;
case 'C' :
exit;
break;
default : cout << " HURUF YANG ANDA MASUKKAN SALAH " << endl;
}
cin.get();
}