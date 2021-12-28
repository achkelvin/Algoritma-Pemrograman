#include <iostream>
using namespace std;
#include <conio.h>
#include <string.h>

int main()
{
       char Achmad [] ="Achmad ";
       char Kelvin [] ="Kelvin";

       cout<<"Menggabungkan String"<<endl;
       cout<<"--------------------"<<endl;
       cout<<"Nama awal : "<<Achmad<<endl;
       cout<<"Nama akhir : "<<Kelvin<<endl;

       strcat(Achmad, Kelvin);
       cout<<"Nama Setelah digabung, Nama sekarang menjadi : "<<Achmad<<endl;
	   cout<<"Membalik String"<<endl;
      cout<<"---------------"<<endl;
	   _strrev(Kelvin);
      cout<<"Nama setelah dibalik : "<<Kelvin<<endl;
cin.get();
}