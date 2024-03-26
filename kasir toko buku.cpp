#include <iostream> 

using namespace std; 

int main(){
	int A,B,C,D,E,hasil,jumlah;
	string ulang, pilih;
	int pesanan;
	
	cout << "SELAMAT DATANG DI PROGRAM KASIR" << endl;
	do {
		cout << "Anda dapat memilih barang yang tersedia : " << endl;
		cout << "A. Hvs = Rp. 1000" << endl;
		cout << "B. Bingkai foto = Rp. 20000" << endl;
		cout << "C. Alat tulis = Rp. 5000" << endl;
		cout << "D. Kertas karton = Rp. 2000" << endl;
		cout << "E. Styrofoam = Rp. 10000" << endl;
		cin >> pilih;
		
		if(pilih == "A"|| pilih == "a"){
			cout << "Anda telah melakukan pembelian hvs seharga Rp. 1000/lembar" << endl;
			cout << "Berapa hvs yang anda inginkan : ";
			cin >> pesanan;
			jumlah = 1000 * pesanan;
			cout << "jumlah belanjaan anda adalah : " << jumlah << endl;		
		}
		else if (pilih == "B"|| pilih == "b" ){
			cout << "Anda telah melakukan pembelian Bingkai foto seharga Rp. 20000/barang" << endl;
			cout << "Berapa Bingkai foto yang anda inginkan : ";
			cin >> pesanan;
			jumlah = 20000 * pesanan;
			cout << "jumlah belanjaan anda adalah : " << jumlah << endl;
		}
		else if  (pilih == "C"|| pilih == "c" ){
			cout << "Anda telah melakukan pembelian Alat tulis seharga Rp. 5000/barang" << endl;
			cout << "Berapa Alat tulis yang anda inginkan : ";
			cin >> pesanan;
			jumlah = 5000 * pesanan;
			cout << "jumlah belanjaan anda adalah : " << jumlah << endl;
		}
		else if  (pilih == "D"|| pilih == "d" ){
			cout << "Anda telah melakukan pembelian Kertas karton seharga Rp. 2000/lembar" << endl;
			cout << "Berapa Kertas karton yang anda inginkan : ";
			cin >> pesanan;
			jumlah = 2000 * pesanan;
			cout << "jumlah belanjaan anda adalah : " << jumlah << endl;
		}
		else if  (pilih == "E"|| pilih == "e" ){
			cout << "Anda telah melakukan pembelian Styrofoam seharga Rp. 10000/barang" << endl;
			cout << "Berapa Styrofoam yang anda inginkan : ";
			cin >> pesanan;
			jumlah = 10000 * pesanan;
			cout << "jumlah belanjaan anda adalah : " << jumlah << endl;
		}
		else{
			cout << "Maaf barang yang anda inginkan tidak tersedia" << endl;
		}
		cout << "Apakah anda ingin mengulangi program (Y/N) ? "; cin >> ulang;
		}while (ulang == "Y"|| ulang == "Y");
		return 0;
		
	}
	
