#include <iostream>
using namespace std;

int main() {
	int hari;
	int jumlah;
	string pilih;
	cout<<"Selamat Datang di Hotel Indah"<< endl;
	cout<< "Silahkan Pilih Jenis Kamar"<<endl;
	cout<< "A. kamar Single = 5000 dollar"<< endl;
	cout<< "B. Kamar Double =  10000 dollar"<< endl;
	cin>>pilih;
	if (pilih == "A" || pilih == "a"){
		cout<< "Anda memilih kamar Single seharga 5000 dollar perhari"<< endl;
		cout<< "Berapa hari yang anda inginkan :";
		cin>>hari;
		jumlah = 5000*hari;
		cout<< "Anda harus membayar :" << jumlah << endl;
	} else {
		cout<< "Anda memilih kamar double seharga 10000 dollar"<< endl;
		cout << "Berapa hari yang anda inginkan :";
		cin>>hari;
		jumlah = 10000*hari;
		cout << "Anda harus membayar :" << jumlah << endl;
		}
	}
	

