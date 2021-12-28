#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

int main()
{
	char GANTIKELVIN[] = "Achmad Kelvin";
	char COPYKELVIN[30];
	int ACH;
	cout << endl;
	cout << "Menampilkan Nama Lengkap " << GANTIKELVIN <<endl;
	cout << "Karakter Kedua diganti F" << endl;
	GANTIKELVIN[1] = 'F';
	cout << "Menjadi	: " << GANTIKELVIN << endl;
	strcpy(COPYKELVIN, GANTIKELVIN);
	cout << "Tulisan Asli	: " << GANTIKELVIN << endl;
	cout << "Tulisan Hasil Salinan	:" << COPYKELVIN << endl;
	cout << endl;
	for (ACH = 0; GANTIKELVIN[ACH] ; ACH++)
		GANTIKELVIN[ACH] = toupper (GANTIKELVIN[ACH]);
		cout << "Hasil Tulisan Toupper	: " << GANTIKELVIN << endl;
		cin.get();
}