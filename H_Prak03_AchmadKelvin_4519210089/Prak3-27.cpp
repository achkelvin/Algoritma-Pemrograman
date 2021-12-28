#include <iostream>
using namespace std;

int main() 
{
	char A,B,C,D,E,kel; 
	cout<< " Menampilkan Keterangan Nilai = " <<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<endl;
	cout<< " Silahkan pilih [A-E] :";cin>>kel; 
	cout<<endl;
	switch (kel)
	{
		case 'A' : cout << " SANGAT BAIK " << endl; break;
		case 'B' : cout << " BAIK " << endl; break;
		case 'C' : cout << " CUKUP " << endl; break;
		case 'D' : cout << " KURANG " << endl; break;
		case 'E' : cout << " MENGULANG " << endl; break;
	}
	cin.get();
}	
						
						
						
						
						
						
					