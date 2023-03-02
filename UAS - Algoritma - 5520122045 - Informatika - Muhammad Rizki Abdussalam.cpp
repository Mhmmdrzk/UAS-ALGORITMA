
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string namaPembayar;
	string namaPenerima;
	int nilai;
	string kodePembayaran;
	
	cout << "Selamat Datang di Aplikasi Pemesanan Hotel!" << endl;
	cout << "Nama Pemesan : Muhammad Rizki Abdussalam " << endl;
	cout << "NIM : 5520122045 " << endl;
	
	cout << "Masukkan nama pemesan hotel : ";
	cin >> namaPembayar;
	
	cout << "Masukkan nama penerima pesanan hotel : ";
	cin >> namaPenerima;
	
	cout << "Masukkan nilai pembayaran hotel : ";
	cin >> nilai;
	
	cout << "Masukkan kode pembayaran hotel : ";
	cin >> kodePembayaran;
	
	cout << "Apakah Anda yakin ingin melakukan pemesanan hotel?(y/n) : ";
	char confirm;
	cin >> confirm;
	
	if(confirm == 'y'){
		cout << "Pembayaran Hotel berhasil!" << endl;
	} else {
		cout << "Pembayaran Hotel dibatalkan" << endl;
	}
	
	return 0;
}

