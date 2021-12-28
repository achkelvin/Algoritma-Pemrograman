#include <iostream>
using namespace std;

int main() 
{
	int kel; 
	cout<< " Menampilkan Hari-hari " <<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<endl;
	cout<< " Silahkan pilih [o-6] :";cin>>kel; 
	cout<<endl;
	
	if (kel == 0) 
		cout<< " Minggu " <<endl; 
	else 
		if (kel == 1) 
			cout<< " Senin " <<endl;
		else 
			if (kel == 2) 
				cout<< " selasa " <<endl;
			else 
				if (kel == 3) 
					cout<< " Rabu " <<endl;
				else 
					if (kel == 4) 
						cout<< " Kamis " <<endl;
					else 
						if (kel == 5) 
							cout<< " Jumat " <<endl;
						else 
							if (kel == 6) 
								cout<< " Sabtu " <<endl; 
							else 
								cout<< " Hari tidak valid " <<endl;
	cin.get();
}	
						
						
						
						
						
						
						