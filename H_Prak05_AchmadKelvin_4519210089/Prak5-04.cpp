#include <iostream>
using namespace std;

int main()
{
	int kel;
	cout << " Menampilkan Angka dari 0 s.d. 100000 " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	{
		for (kel = 0; kel <= 100000; kel+=1000)
			cout << kel << endl;
	}
	cin.get();
}