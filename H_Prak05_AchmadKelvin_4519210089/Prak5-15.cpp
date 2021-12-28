#include <iostream>
using namespace std;

int main ()
{
	int Ach,Kel,vin;
	cout << " Menampilkan Pengulangan (3x) e dan (5x) f " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	vin=0;
	for ( Ach = 1; Ach <= 3; Ach ++ )
	{
		for ( Kel = Ach; Kel <= 5; Kel ++ )
		{
		vin = vin + 19;
		cout << " Nilai bilangan = " << vin << endl;
		}
	}
	cin.get();
}