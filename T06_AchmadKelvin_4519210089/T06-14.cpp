#include <iostream>
using namespace std;

int main()
{
	int Ach,mad,Kel,vin=1;
	cout << endl;
	cout << "menampilkan pengulangan 3x(s),4x(t) dan 5x (u)		" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout<< endl;
	
	for (Ach = 1; Ach <=3; Ach++)
		for (mad = Ach; mad <=4; mad++)
		  for (Kel = Ach; Kel <=5; Kel++)
			vin = vin+10-1;
		cout << " nilai akhir dari n adalah " << vin << endl;
		cin.get();
}		