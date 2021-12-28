#include <iostream> 
using namespace std;

void Ac (int hm, int ad) 
{
	if (hm == 1){
		cout<< " Jenis Kelamin Anda Laki laki " <<endl;
		if (ad >= 175){
			cout << " Selamat Anda Lulus" ;
		}
		else{
			cout << " Maaf, Tinggi Badan Anda Belum Mencukupi";
		}
	}	
	if (hm == 2){
		cout << " Jenis Kelamin Anda Perempuan " << endl;
		if (ad >= 160){
			cout << " Selamat Anda Lulus ";
		}
		else{
			cout << " Maaf, Tinggi Badan Anda Belum Mencukupi ";
		}
	}
}	
int main()
{
	char Ke [40];
	int lv,in;
	cout << " Perekrutan Karyawan Bank" << endl;
	cout << endl;
	cout << " Masukkan Nama Anda = " ;gets (Ke);
	cout << endl;
	cout << " 1. Laki laki " << endl;
	cout << " 2. Perempuan " << endl;
	cout << " Masukkan Jenis Kelamin Anda = " ;cin >> lv;
	cout << endl;
	cout << " Masukkan Berapa Tinggi Badan Anda = "; cin >> in;
	cout << endl;
	Ac (lv,in);
	cin.get();
}